/*
 * This file is part of Lucky OIer
 *
 * Copyright (C) 2012 by Wang Luming <wlm199558@126.com>
 *
 * Lucky OIer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Lucky OIer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Lucky OIer. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QString>
#include <QFile>
#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>
#include <Qsci/qscilexerpascal.h>

class codeEditor: public QsciScintilla
{
public:
    codeEditor(QWidget *parent = 0);
    codeEditor(const QString &name, QWidget *parent=0);
    bool open(QString name);
};

#endif // CODEEDITOR_H
