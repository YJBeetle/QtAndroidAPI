#include "./SQLFeatureNotSupportedException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(QJniObject obj) : java::sql::SQLNonTransientException(obj) {}
	
	// Constructors
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"()V"
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jthrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jthrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::sql

