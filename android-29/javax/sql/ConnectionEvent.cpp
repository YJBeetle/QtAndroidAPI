#include "../../java/sql/SQLException.hpp"
#include "./ConnectionEvent.hpp"

namespace javax::sql
{
	// Fields
	
	// Constructors
	ConnectionEvent::ConnectionEvent(JObject arg0)
		: java::util::EventObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;)V",
			arg0.object()
		) {}
	ConnectionEvent::ConnectionEvent(JObject arg0, java::sql::SQLException arg1)
		: java::util::EventObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::sql::SQLException ConnectionEvent::getSQLException() const
	{
		return callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
} // namespace javax::sql

