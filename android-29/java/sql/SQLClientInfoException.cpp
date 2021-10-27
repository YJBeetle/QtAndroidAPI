#include "./SQLClientInfoException.hpp"

namespace java::sql
{
	// Fields
	
	SQLClientInfoException::SQLClientInfoException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLClientInfoException::SQLClientInfoException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"()V"
		);
	}
	SQLClientInfoException::SQLClientInfoException(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(__JniBaseClass &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	SQLClientInfoException::SQLClientInfoException(jstring &arg0, jstring &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(const QString &arg0, const QString &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(jstring &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	SQLClientInfoException::SQLClientInfoException(const QString &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	SQLClientInfoException::SQLClientInfoException(jstring &arg0, jstring &arg1, jint &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(const QString &arg0, const QString &arg1, jint &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	SQLClientInfoException::SQLClientInfoException(jstring &arg0, jstring &arg1, __JniBaseClass &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	SQLClientInfoException::SQLClientInfoException(const QString &arg0, const QString &arg1, __JniBaseClass &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	SQLClientInfoException::SQLClientInfoException(jstring &arg0, jstring &arg1, jint &arg2, __JniBaseClass &arg3, jthrowable &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	SQLClientInfoException::SQLClientInfoException(const QString &arg0, const QString &arg1, jint &arg2, __JniBaseClass &arg3, jthrowable &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	
	// Methods
	QAndroidJniObject SQLClientInfoException::getFailedProperties()
	{
		return __thiz.callObjectMethod(
			"getFailedProperties",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::sql

