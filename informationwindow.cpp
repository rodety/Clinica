#include "informationwindow.h"

 InformationWindow::InformationWindow(int id, QSqlRelationalTableModel *offices,
                                      QWidget *parent)
     : QDialog(parent)
 {
     QLabel *locationLabel = new QLabel(tr("Location: "));
     QLabel *countryLabel = new QLabel(tr("Country: "));
     QLabel *descriptionLabel = new QLabel(tr("Description: "));
     QLabel *imageFileLabel = new QLabel(tr("Image file: "));
     createButtons();
     locationText = new QLabel;
     countryText = new QLabel;
     descriptionEditor = new QTextEdit;
     imageFileEditor = new QComboBox;
     imageFileEditor->setModel(offices->relationModel(1));
     imageFileEditor->setModelColumn(offices->relationModel(1)->fieldIndex("file"));
     mapper = new QDataWidgetMapper(this);
     mapper->setModel(offices);
     mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
     mapper->setItemDelegate(new QSqlRelationalDelegate(mapper));
     mapper->addMapping(imageFileEditor, 1);
     mapper->addMapping(locationText, 2, "text");
     mapper->addMapping(countryText, 3, "text");
     mapper->addMapping(descriptionEditor, 4);
     mapper->setCurrentIndex(id);
     connect(descriptionEditor, SIGNAL(textChanged()),
             this, SLOT(enableButtons()));
     connect(imageFileEditor, SIGNAL(currentIndexChanged(int)),
             this, SLOT(enableButtons()));
     QFormLayout *formLayout = new QFormLayout;
     formLayout->addRow(locationLabel, locationText);
     formLayout->addRow(countryLabel, countryText);
     formLayout->addRow(imageFileLabel, imageFileEditor);
     formLayout->addRow(descriptionLabel, descriptionEditor);

     QVBoxLayout *layout = new QVBoxLayout;
     layout->addLayout(formLayout);
     layout->addWidget(buttonBox);
     setLayout(layout);
     locationId = id;
     displayedImage = imageFileEditor->currentText();
     setWindowFlags(Qt::Window);
     enableButtons(false);
     setWindowTitle(tr("Office: %1").arg(locationText->text()));
 }

 int InformationWindow::id()
 {
     return locationId;
 }

 void InformationWindow::revert()
 {
     mapper->revert();
     enableButtons(false);
 }

 void InformationWindow::submit()
 {
     QString newImage(imageFileEditor->currentText());

     if (displayedImage != newImage) {
         displayedImage = newImage;
         emit imageChanged(locationId, newImage);
     }

     mapper->submit();
     mapper->setCurrentIndex(locationId);
     enableButtons(false);
 }

 void InformationWindow::createButtons()
 {
     closeButton = new QPushButton(tr("&Close"));
     revertButton = new QPushButton(tr("&Revert"));
     submitButton = new QPushButton(tr("&Submit"));
     closeButton->setDefault(true);
     connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
     connect(revertButton, SIGNAL(clicked()), this, SLOT(revert()));
     connect(submitButton, SIGNAL(clicked()), this, SLOT(submit()));
     buttonBox = new QDialogButtonBox(this);
     buttonBox->addButton(submitButton, QDialogButtonBox::AcceptRole);
     buttonBox->addButton(revertButton, QDialogButtonBox::ResetRole);
     buttonBox->addButton(closeButton, QDialogButtonBox::RejectRole);
 }

 void InformationWindow::enableButtons(bool enable)
 {
    revertButton->setEnabled(enable);
    submitButton->setEnabled(enable);
 }
