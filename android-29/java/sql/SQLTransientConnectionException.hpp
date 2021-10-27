#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"
#include "SQLTransientException.hpp"


namespace __jni_impl::java::sql
{
	class SQLTransientConnectionException : public __jni_impl::java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1, jthrowable arg2);
		void __constructor(const QString &arg0, const QString &arg1, jthrowable arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void SQLTransientConnectionException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"()V"
		);
	}
	void SQLTransientConnectionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLTransientConnectionException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SQLTransientConnectionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void SQLTransientConnectionException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void SQLTransientConnectionException::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void SQLTransientConnectionException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SQLTransientConnectionException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SQLTransientConnectionException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SQLTransientConnectionException::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void SQLTransientConnectionException::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SQLTransientConnectionException::__constructor(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLTransientConnectionException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void SQLTransientConnectionException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
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
	void SQLTransientConnectionException::__constructor(const QString &arg0, const QString &arg1, jint arg2, jthrowable arg3)
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
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLTransientConnectionException : public __jni_impl::java::sql::SQLTransientConnectionException
	{
	public:
		SQLTransientConnectionException(QAndroidJniObject obj) { __thiz = obj; }
		SQLTransientConnectionException()
		{
			__constructor();
		}
		SQLTransientConnectionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLTransientConnectionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLTransientConnectionException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLTransientConnectionException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLTransientConnectionException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLTransientConnectionException(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLTransientConnectionException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::sql

