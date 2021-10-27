#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/util/EventObject.hpp"

namespace java::sql
{
	class SQLException;
}

namespace javax::sql
{
	class StatementEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		StatementEvent(QAndroidJniObject obj);
		// Constructors
		StatementEvent(__JniBaseClass &arg0, __JniBaseClass &arg1);
		StatementEvent(__JniBaseClass &arg0, __JniBaseClass &arg1, java::sql::SQLException &arg2);
		StatementEvent() = default;
		
		// Methods
		QAndroidJniObject getSQLException();
		QAndroidJniObject getStatement();
	};
} // namespace javax::sql

