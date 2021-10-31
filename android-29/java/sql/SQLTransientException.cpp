#include "./SQLTransientException.hpp"

namespace java::sql
{
	// Fields
	
	SQLTransientException::SQLTransientException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLTransientException::SQLTransientException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"()V"
		);
	}
	SQLTransientException::SQLTransientException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLTransientException::SQLTransientException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLTransientException::SQLTransientException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTransientException::SQLTransientException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

