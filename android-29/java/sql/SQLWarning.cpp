#include "./SQLWarning.hpp"

namespace java::sql
{
	// Fields
	
	SQLWarning::SQLWarning(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLWarning::SQLWarning()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"()V"
		);
	}
	SQLWarning::SQLWarning(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLWarning::SQLWarning(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLWarning::SQLWarning(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLWarning::SQLWarning(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLWarning::SQLWarning(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	SQLWarning::SQLWarning(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLWarning::SQLWarning(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	SQLWarning::SQLWarning(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLWarning::SQLWarning(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLWarning::SQLWarning(jstring &arg0, jstring &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLWarning::SQLWarning(const QString &arg0, const QString &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	SQLWarning::SQLWarning(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SQLWarning::SQLWarning(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject SQLWarning::getNextWarning()
	{
		return __thiz.callObjectMethod(
			"getNextWarning",
			"()Ljava/sql/SQLWarning;"
		);
	}
	void SQLWarning::setNextWarning(java::sql::SQLWarning arg0)
	{
		__thiz.callMethod<void>(
			"setNextWarning",
			"(Ljava/sql/SQLWarning;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::sql

