#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLTransientConnectionException.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	SQLTransientConnectionException::SQLTransientConnectionException()
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"()V"
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JString arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JThrowable arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JString arg0, JString arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JString arg0, JThrowable arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLTransientConnectionException::SQLTransientConnectionException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

