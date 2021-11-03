#pragma once

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
		StatementEvent(JObject arg0, JObject arg1);
		StatementEvent(JObject arg0, JObject arg1, java::sql::SQLException arg2);
		
		// Methods
		java::sql::SQLException getSQLException() const;
		JObject getStatement() const;
	};
} // namespace javax::sql

