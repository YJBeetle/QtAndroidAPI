#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLRecoverableException.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	SQLRecoverableException::SQLRecoverableException()
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"()V"
		) {}
	SQLRecoverableException::SQLRecoverableException(JString arg0)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLRecoverableException::SQLRecoverableException(JThrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLRecoverableException::SQLRecoverableException(JString arg0, JString arg1)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLRecoverableException::SQLRecoverableException(JString arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLRecoverableException::SQLRecoverableException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLRecoverableException::SQLRecoverableException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLRecoverableException::SQLRecoverableException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

