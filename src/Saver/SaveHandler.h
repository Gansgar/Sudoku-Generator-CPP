#ifndef SAVEHANDLER_H
#define SAVEHANDLER_H

#include "Saver/SaveTXT.h"
#include "Saver/SaveVector.h"
#include "Saver/SaveIMG.h"

#include <QFileDialog>
#include <QWidget>
#include <QString>
#include <QDir>

#include <iostream>

#define elif else if

#define TXTE QString("")
#define IMGE QString("\\.(?:png|jpe?g|tiff)$")
#define PDFE QString(".pdf")
#define SVGE QString(".svg")

#define TXT ("Text file (*"+TXTE+")")
#define IMG ("Image file (*.jpg *.png *.tiff)")
#define PDF ("PDF file (*"+PDFE+")")
#define SVG ("SVG file (*"+SVGE+")")
#define SP +QString(";;")+

class SaveHandler {
private:
public:
    static QString filter;
    static QString fileName;
    SaveHandler(Sudoku su, QWidget *parent = 0);
};

#endif // SAVEHANDLER_H
