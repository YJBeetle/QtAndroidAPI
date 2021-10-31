#include "../../java/sql/SQLException.hpp"
#include "./ConnectionEvent.hpp"

namespace javax::sql
{
	// Fields
	
	ConnectionEvent::ConnectionEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectionEvent::ConnectionEvent(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;)V",
			arg0.__jniObject().object()
		);
	}
	ConnectionEvent::ConnectionEvent(__JniBaseClass arg0, java::sql::SQLException arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ConnectionEvent::getSQLException()
	{
		return __thiz.callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
} // namespace javax::sql

