#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLTimeoutException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLTimeoutException::SQLTimeoutException(QAndroidJniObject obj) : java::sql::SQLTransientException(obj) {}
	
	// Constructors
	SQLTimeoutException::SQLTimeoutException()
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"()V"
		) {}
	SQLTimeoutException::SQLTimeoutException(JString arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLTimeoutException::SQLTimeoutException(JThrowable arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLTimeoutException::SQLTimeoutException(JString arg0, JString arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLTimeoutException::SQLTimeoutException(JString arg0, JThrowable arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLTimeoutException::SQLTimeoutException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLTimeoutException::SQLTimeoutException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLTimeoutException::SQLTimeoutException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLTransientException(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

