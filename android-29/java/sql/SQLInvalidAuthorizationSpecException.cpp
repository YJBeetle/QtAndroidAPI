#include "./SQLInvalidAuthorizationSpecException.hpp"

namespace java::sql
{
	// Fields
	
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"()V"
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

