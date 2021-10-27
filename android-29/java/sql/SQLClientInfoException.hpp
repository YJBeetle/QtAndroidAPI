#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"


namespace __jni_impl::java::sql
{
	class SQLClientInfoException : public __jni_impl::java::sql::SQLException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, jthrowable arg1);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		void __constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jthrowable arg3);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jthrowable arg3);
		void __constructor(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jthrowable arg4);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jthrowable arg4);
		
		// Methods
		QAndroidJniObject getFailedProperties();
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void SQLClientInfoException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"()V"
		);
	}
	void SQLClientInfoException::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLClientInfoException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SQLClientInfoException::__constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SQLClientInfoException::__constructor(__jni_impl::__JniBaseClass arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SQLClientInfoException::__constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void SQLClientInfoException::__constructor(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void SQLClientInfoException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SQLClientInfoException::__constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SQLClientInfoException::__constructor(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
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
	void SQLClientInfoException::__constructor(const QString &arg0, const QString &arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
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
	void SQLClientInfoException::__constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jthrowable arg3)
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
	void SQLClientInfoException::__constructor(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jthrowable arg3)
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
	void SQLClientInfoException::__constructor(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jthrowable arg4)
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
	void SQLClientInfoException::__constructor(const QString &arg0, const QString &arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jthrowable arg4)
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
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLClientInfoException : public __jni_impl::java::sql::SQLClientInfoException
	{
	public:
		SQLClientInfoException(QAndroidJniObject obj) { __thiz = obj; }
		SQLClientInfoException()
		{
			__constructor();
		}
		SQLClientInfoException(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		SQLClientInfoException(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLClientInfoException(__jni_impl::__JniBaseClass arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLClientInfoException(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLClientInfoException(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLClientInfoException(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jthrowable arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace java::sql

