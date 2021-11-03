#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLFeatureNotSupportedException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"()V"
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JThrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JThrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

