#include "./SQLIntegrityConstraintViolationException.hpp"

namespace java::sql
{
	// Fields
	
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"()V"
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

