#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectionEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionEvent(QJniObject obj);
		
		// Constructors
		ConnectionEvent(JObject arg0);
		ConnectionEvent(JObject arg0, java::sql::SQLException arg1);
		
		// Methods
		java::sql::SQLException getSQLException();
	};
} // namespace javax::sql

