#include "./SQLTransientConnectionException.hpp"

namespace java::sql
{
	// Fields
	
	SQLTransientConnectionException::SQLTransientConnectionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLTransientConnectionException::SQLTransientConnectionException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"()V"
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jstring &arg0, jstring &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(const QString &arg0, const QString &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SQLTransientConnectionException::SQLTransientConnectionException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

