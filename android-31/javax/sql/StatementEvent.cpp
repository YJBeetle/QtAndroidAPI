#include "../../java/sql/SQLException.hpp"
#include "./StatementEvent.hpp"

namespace javax::sql
{
	// Fields
	
	// QJniObject forward
	StatementEvent::StatementEvent(QJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	StatementEvent::StatementEvent(JObject arg0, JObject arg1)
		: java::util::EventObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V",
			arg0.object(),
			arg1.object()
		) {}
	StatementEvent::StatementEvent(JObject arg0, JObject arg1, java::sql::SQLException arg2)
		: java::util::EventObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::sql::SQLException StatementEvent::getSQLException() const
	{
		return callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
	JObject StatementEvent::getStatement() const
	{
		return callObjectMethod(
			"getStatement",
			"()Ljava/sql/PreparedStatement;"
		);
	}
} // namespace javax::sql

