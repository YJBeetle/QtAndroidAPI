#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLDataException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLDataException::SQLDataException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLDataException::SQLDataException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"()V"
		) {}
	SQLDataException::SQLDataException(JString arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLDataException::SQLDataException(JThrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLDataException::SQLDataException(JString arg0, JString arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLDataException::SQLDataException(JString arg0, JThrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLDataException::SQLDataException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLDataException::SQLDataException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLDataException::SQLDataException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

