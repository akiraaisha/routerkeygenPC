/*
 * Copyright 2016 Alex Stanev <alex@stanev.org>
 *
 * This file is part of Router Keygen.
 *
 * Router Keygen is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Router Keygen is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Router Keygen.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SITECOMWLR2100KEYGEN_H
#define SITECOMWLR2100KEYGEN_H
#include "Keygen.h"

class SitecomWLR2100Keygen : public Keygen
{
    public:
        SitecomWLR2100Keygen(QString ssid, QString mac);
    private:
        QVector<QString> & getKeys();
        const static QString ALPHABET;
};

#endif // SITECOMWLR2100KEYGEN_H
