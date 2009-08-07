/*
 * qt_user_events.h - user-defined Qt-events
 *
 * Copyright (c) 2006-2008 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *  
 * This file is part of iTALC - http://italc.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */


#ifndef _QT_USER_EVENTS_H
#define _QT_USER_EVENTS_H

#include <QtCore/QEvent>
#include <QtCore/QList>
#include <QtCore/QRect>

typedef QList<QRect> RectList;

class regionChangedEvent : public QEvent
{
public:
	regionChangedEvent( const RectList &r = RectList() ) :
		QEvent( static_cast<QEvent::Type>( QEvent::User+385 ) ),
		m_changedRegion( r )
	{
	}

	const RectList &changedRegion() const
	{
		return m_changedRegion;
	}


private:
	RectList m_changedRegion;

} ;


#endif
