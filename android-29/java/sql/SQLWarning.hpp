#pragma once

#ifndef JAVA_SQL_SQLWARNING
#define JAVA_SQL_SQLWARNING

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"


namespace __jni_impl::java::sql
{
	class SQLWarning : public __jni_impl::java::sql::SQLException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0, jstring arg1, jthrowable arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject getNextWarning();
		void setNextWarning(__jni_impl::java::sql::SQLWarning arg0);
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void SQLWarning::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SQLWarning::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SQLWarning::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLWarning::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SQLWarning::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLWarning::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SQLWarning::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLWarning::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLWarning",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SQLWarning::getNextWarning()
	{
		return __thiz.callObjectMethod(
			"getNextWarning",
			"()Ljava/sql/SQLWarning;"
		);
	}
	void SQLWarning::setNextWarning(__jni_impl::java::sql::SQLWarning arg0)
	{
		__thiz.callMethod<void>(
			"setNextWarning",
			"(Ljava/sql/SQLWarning;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLWarning : public __jni_impl::java::sql::SQLWarning
	{
	public:
		SQLWarning(QAndroidJniObject obj) { __thiz = obj; }
		SQLWarning(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLWarning(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLWarning(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLWarning(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLWarning(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLWarning(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLWarning(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLWarning()
		{
			__constructor();
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLWARNING

