#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>   //add qdebug, replacement for "cout"

//global variable need multiple access
double firstNum;

bool userIsTypingSecondNumber = false; //allows the user to user multiple digits when using operations

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //associate button press with calling the slot function
    /* "Ui" is just a pointer to our user interface so all our buttons
        and labels can be access through the "ui" pointer */

    /* connect ui->pushbutton_0 to signal released so when the button
       is released it will emmit a signal and call a "slot "SLOT" associated with this object "pushbutton_0"
       we will define that slot as the one we just created below "digit_pressed"*/
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_plusminus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->pushButton_Subtract,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->pushButton_plus->setCheckable(true); //allows us to set plus to checked
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_Subtract->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* --------------------------------------------
     Here we are configuring the "1-9" buttons
   --------------------------------------------*/

void MainWindow::digit_pressed()
{
    //replacement for "cout" in Qt enviornment to test if our digits are connected successfully
    //qDebug() << "test";

    /*we want to figure out what button was pressed when function is executed
     *  sender will return a pointer to a Qobject.in this case we know its --"QPushButton *"-- (from mainwindow.h 'class')
     *  that will be sending a signal so 'sender()' is going to return a pointer to our 'Qpushbutton' so we declare a varialbe to store that in "button"
        then we need to cast the result of send to "qpushbuttonpointer"QPushButton" which is (QPushButton*)"  */
    QPushButton * button = (QPushButton*)sender();

                          // we want to read in the current number  label into a variable
    double labelNumber;  // int double variable
    QString newLabel;   //after we convert it we want to bring it back to QString (label)


    //if one of the operations is pressed, we want a new number or entry
    if((ui->pushButton_plus->isChecked() ||ui->pushButton_Subtract->isChecked() ||
       ui->pushButton_multiply->isChecked() ||ui->pushButton_divide->isChecked()) && (!userIsTypingSecondNumber))

    {   //we just wnat the new digit not the old
        labelNumber = button->text().toDouble();
        userIsTypingSecondNumber = true;

        //we can call it just with the type and scope resolution operator (static method)
        newLabel = QString::number(labelNumber,'g',15); //doulbee back to QString
    }
    else //if not than we do want to continue appending the digit
    {
        if(ui->label->text().contains('.') && button->text() == "0")
        {
            newLabel = ui->label->text() + button->text(); //append the zero without converting it to type double
        }
        else
        {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber,'g',15); //doulbee back to QString
        }
        ui->label->setText(newLabel);
    }





    ui->label->setText(newLabel);

    //set the label text to the button that was pressed, setText tochange the label text,
    // get text from the button using "button->text();"
    //this will only populate the digit on the calculator as a char not an integer
    //ui->label->setText(button->text());
}

// if we right click on the button in the it will create it and connect it to abovee for us
//"mainwindow.ui"->"go to slot" -> "released()"



/* -----------------------------------------
     Here we are configuring the "." button
   -----------------------------------------*/

void MainWindow::on_pushButton_dot_released()
{
    //This is a if statement which will check if a '.' is already entered
    if(!ui->label->text().count(QString('.'))){
        ui->label->setText(ui->label->text()+".");
    }
    //ui->label->setText(ui->label->text() + "."); //here whenever a decimal is pressed we are taking the previous value and putting "." after it
}


/* -----------------------------------------------
     Here we are configuring the "UNARY" buttons
   -----------------------------------------------*/

void MainWindow::unary_operation_pressed() //here we are calling the unary class using scope operator (::)
{
    QPushButton * button =(QPushButton*) sender(); //same as listed above^^^
    double labelNumber;
    QString newLabel;

    /* -----------------------------------------
       Here we are configuring the "+/-" button
       -----------------------------------------*/
    if (button->text() == "+/-")
    {   //get current value from the label
        labelNumber = ui->label->text().toDouble(); //using "toDouble" to convert it to a number
        labelNumber = labelNumber * -1; //to make our negative number
        newLabel = QString::number(labelNumber,'g',15); //from qstring back to a number here
        ui->label->setText(newLabel);
    }



    /* -----------------------------------------
       Here we are configuring the "%" button
       -----------------------------------------*/
    if (button->text() == "%")
    {   //get current value from the label
        labelNumber = ui->label->text().toDouble(); //using "toDouble" to convert it to a number
        labelNumber = labelNumber * 0.01; //to make our negative number
        newLabel = QString::number(labelNumber,'g',15); //from qstring back to a number here
        ui->label->setText(newLabel);
    }


}



/* -----------------------------------------
     Here we are configuring the "C" button
   -----------------------------------------*/

void MainWindow::on_pushButton_clear_released()
{   //jsut want to reset calc to original state
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_Subtract->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    userIsTypingSecondNumber = false;

    //reset display
    ui->label->setText("0");
}



/* -----------------------------------------
     Here we are configuring the "=" button
   -----------------------------------------*/

void MainWindow::on_pushButton_equals_released()
{
    double labelNumber, secondNum;

    //dereference ui to get the label from user interface
    secondNum = ui->label->text().toDouble(); //we need toDouble"()" cuz its a method
    QString newLabel;


    if(ui->pushButton_plus->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_plus->setChecked(false);
    }

    else if(ui->pushButton_Subtract->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Subtract->setChecked(false);
    }

    else if(ui->pushButton_multiply->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_multiply->setChecked(false);
    }

    else if(ui->pushButton_divide->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_divide->setChecked(false);
    }

    userIsTypingSecondNumber = false; //so if using single digits
}



/* -----------------------------------------------
     Here we are configuring the "+, /, *" buttons
   -----------------------------------------------*/
void MainWindow::binary_operation_pressed()
{
    QPushButton * button =(QPushButton*) sender();
    firstNum = ui->label->text().toDouble();    //we are converting the text from the label to a number of type double and store in type num. need to access it when we press = so set as global varaible

    button->setChecked(true);                   //getting the sender uptop from the button that was pressed will now be checked (+, , or *)


}

