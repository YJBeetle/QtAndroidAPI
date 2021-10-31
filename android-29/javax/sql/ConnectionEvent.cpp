#include "../../java/sql/SQLException.hpp"
#include "./ConnectionEvent.hpp"

namespace javax::sql
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectionEvent::ConnectionEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	ConnectionEvent::ConnectionEvent(__JniBaseClass arg0)
		: java::util::EventObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;)V",
			arg0.object()
		) {}
	ConnectionEvent::ConnectionEvent(__JniBaseClass arg0, java::sql::SQLException arg1)
		: java::util::EventObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject ConnectionEvent::getSQLException()
	{
		return callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
} // namespace javax::sql

