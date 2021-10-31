#include "../../java/sql/SQLException.hpp"
#include "./StatementEvent.hpp"

namespace javax::sql
{
	// Fields
	
	StatementEvent::StatementEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StatementEvent::StatementEvent(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	StatementEvent::StatementEvent(__JniBaseClass arg0, __JniBaseClass arg1, java::sql::SQLException arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject StatementEvent::getSQLException()
	{
		return __thiz.callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
	QAndroidJniObject StatementEvent::getStatement()
	{
		return __thiz.callObjectMethod(
			"getStatement",
			"()Ljava/sql/PreparedStatement;"
		);
	}
} // namespace javax::sql

