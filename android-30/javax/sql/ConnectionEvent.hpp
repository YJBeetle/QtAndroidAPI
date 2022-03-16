#pragma once

#include "../../java/sql/SQLException.def.hpp"
#include "./ConnectionEvent.def.hpp"

namespace javax::sql
{
	// Fields
	
	// Constructors
	inline ConnectionEvent::ConnectionEvent(JObject arg0)
		: java::util::EventObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;)V",
			arg0.object()
		) {}
	inline ConnectionEvent::ConnectionEvent(JObject arg0, java::sql::SQLException arg1)
		: java::util::EventObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::sql::SQLException ConnectionEvent::getSQLException() const
	{
		return callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
} // namespace javax::sql

// Base class headers
#include "../../java/util/EventObject.hpp"

