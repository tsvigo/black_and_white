#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
///
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
     //   QString myString;
    const int len = 2832, strings =1737;
    const char ch = '\n';
    char mass[len][strings];
    
    ifstream fs("/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/единицы из шрифтов/black-white/spisok_black_and_white.txt", ios::in | ios::binary);
 // действие
   //  std::cout<<"тест"<< std::endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    команда1=convert "/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/единицы из шрифтов/
//        команда2=font
//        команда3=" -threshold 50%  "/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/единицы из шрифтов/black-white/
//          команда2=font
//          команда4="
//              команда_вся=команда1+команда2+команда3+команда2+команда4
          
          
 // QString comanda1="magick -background white -fill  black -pointsize 72 -font ";
              QString comanda1="convert \"/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/единицы из шрифтов/";
          QString font;
    QString comanda3="\" -threshold 50%  \"/mnt/247E7EDA7E7EA3E8/книги/загрузки_Яндекс_браузера/единицы/единицы из шрифтов/black-white/";
          QString comanda4="\"";
         // QString comanda_vsia=comanda1+font+comanda3+font;
    QString comanda_vsia;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///      
        
        for(int r = 0; r<strings; r++)
    {
        fs.getline(mass[r], len-1,ch); //Считываем строки в массив

        font=mass[r];
       // subString = myString.mid(7,myString.size() - 1);
         comanda_vsia=comanda1+font+comanda3+font+comanda4;
         system (comanda_vsia.toStdString().c_str() );
//std::cout <<font.toStdString().c_str() << std::endl;
    //    system (comanda4.toStdString().c_str() );
        /// 
        /// 
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///         
    }
        // system (comanda_vsia.toStdString().c_str() );
                            //    std::cout << "The error has disappeared. Variable error = " << variable_error<< std::endl;
/// 
    fs.close(); //Закрываем файл 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///      
}

Dialog::~Dialog()
{
    delete ui;
}

