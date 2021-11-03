#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLIntegrityConstraintViolationException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"()V"
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JString arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JThrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JString arg0, JString arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JString arg0, JThrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

