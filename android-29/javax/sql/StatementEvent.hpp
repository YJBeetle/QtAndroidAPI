#pragma once

#include "../../java/sql/SQLException.def.hpp"
#include "./StatementEvent.def.hpp"

namespace javax::sql
{
	// Fields
	
	// Constructors
	inline StatementEvent::StatementEvent(JObject arg0, JObject arg1)
		: java::util::EventObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline StatementEvent::StatementEvent(JObject arg0, JObject arg1, java::sql::SQLException arg2)
		: java::util::EventObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::sql::SQLException StatementEvent::getSQLException() const
	{
		return callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
	inline JObject StatementEvent::getStatement() const
	{
		return callObjectMethod(
			"getStatement",
			"()Ljava/sql/PreparedStatement;"
		);
	}
} // namespace javax::sql

// Base class headers
#include "../../java/util/EventObject.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::sql;
#endif
