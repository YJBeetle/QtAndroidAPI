#include "./SQLRecoverableException.hpp"

namespace java::sql
{
	// Fields
	
	SQLRecoverableException::SQLRecoverableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLRecoverableException::SQLRecoverableException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"()V"
		);
	}
	SQLRecoverableException::SQLRecoverableException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLRecoverableException::SQLRecoverableException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLRecoverableException::SQLRecoverableException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLRecoverableException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

