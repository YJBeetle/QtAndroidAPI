#include "./SQLTransactionRollbackException.hpp"

namespace java::sql
{
	// Fields
	
	SQLTransactionRollbackException::SQLTransactionRollbackException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLTransactionRollbackException::SQLTransactionRollbackException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"()V"
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring &arg0, jstring &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(const QString &arg0, const QString &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SQLTransactionRollbackException::SQLTransactionRollbackException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

