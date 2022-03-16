#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLTransientException.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	SQLTransientException::SQLTransientException()
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"()V"
		) {}
	SQLTransientException::SQLTransientException(JString arg0)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLTransientException::SQLTransientException(JThrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLTransientException::SQLTransientException(JString arg0, JString arg1)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLTransientException::SQLTransientException(JString arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLTransientException::SQLTransientException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLTransientException::SQLTransientException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLTransientException::SQLTransientException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

