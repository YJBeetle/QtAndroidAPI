#include "../../java/sql/SQLException.hpp"
#include "./StatementEvent.hpp"

namespace javax::sql
{
	// Fields
	
	// QAndroidJniObject forward
	StatementEvent::StatementEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	StatementEvent::StatementEvent(__JniBaseClass arg0, __JniBaseClass arg1)
		: java::util::EventObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V",
			arg0.object(),
			arg1.object()
		) {}
	StatementEvent::StatementEvent(__JniBaseClass arg0, __JniBaseClass arg1, java::sql::SQLException arg2)
		: java::util::EventObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	QAndroidJniObject StatementEvent::getSQLException()
	{
		return callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
	QAndroidJniObject StatementEvent::getStatement()
	{
		return callObjectMethod(
			"getStatement",
			"()Ljava/sql/PreparedStatement;"
		);
	}
} // namespace javax::sql

