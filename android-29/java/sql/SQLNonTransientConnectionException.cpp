#include "./SQLNonTransientConnectionException.hpp"

namespace java::sql
{
	// Fields
	
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLNonTransientConnectionException::SQLNonTransientConnectionException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"()V"
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLNonTransientConnectionException::SQLNonTransientConnectionException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLNonTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

