#include "./SQLTimeoutException.hpp"

namespace java::sql
{
	// Fields
	
	SQLTimeoutException::SQLTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLTimeoutException::SQLTimeoutException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"()V"
		);
	}
	SQLTimeoutException::SQLTimeoutException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLTimeoutException::SQLTimeoutException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLTimeoutException::SQLTimeoutException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLTimeoutException::SQLTimeoutException(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLTimeoutException::SQLTimeoutException(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	SQLTimeoutException::SQLTimeoutException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLTimeoutException::SQLTimeoutException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	SQLTimeoutException::SQLTimeoutException(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTimeoutException::SQLTimeoutException(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLTimeoutException::SQLTimeoutException(jstring &arg0, jstring &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTimeoutException::SQLTimeoutException(const QString &arg0, const QString &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLTimeoutException::SQLTimeoutException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SQLTimeoutException::SQLTimeoutException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTimeoutException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

