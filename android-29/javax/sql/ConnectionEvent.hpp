#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/util/EventObject.hpp"

namespace java::sql
{
	class SQLException;
}

namespace javax::sql
{
	class ConnectionEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		ConnectionEvent(QAndroidJniObject obj);
		// Constructors
		ConnectionEvent(__JniBaseClass arg0);
		ConnectionEvent(__JniBaseClass arg0, java::sql::SQLException arg1);
		ConnectionEvent() = default;
		
		// Methods
		QAndroidJniObject getSQLException();
	};
} // namespace javax::sql

