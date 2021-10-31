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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatementEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		StatementEvent(QAndroidJniObject obj);
		
		// Constructors
		StatementEvent(__JniBaseClass arg0, __JniBaseClass arg1);
		StatementEvent(__JniBaseClass arg0, __JniBaseClass arg1, java::sql::SQLException arg2);
		
		// Methods
		QAndroidJniObject getSQLException();
		QAndroidJniObject getStatement();
	};
} // namespace javax::sql

