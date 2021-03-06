#pragma once

#ifndef JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION
#define JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"
#include "SQLNonTransientException.hpp"


namespace __jni_impl::java::sql
{
	class SQLInvalidAuthorizationSpecException : public __jni_impl::java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0, jstring arg1, jthrowable arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void SQLInvalidAuthorizationSpecException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SQLInvalidAuthorizationSpecException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SQLInvalidAuthorizationSpecException::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLInvalidAuthorizationSpecException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SQLInvalidAuthorizationSpecException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"()V");
	}
	void SQLInvalidAuthorizationSpecException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLInvalidAuthorizationSpecException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SQLInvalidAuthorizationSpecException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLInvalidAuthorizationSpecException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLInvalidAuthorizationSpecException : public __jni_impl::java::sql::SQLInvalidAuthorizationSpecException
	{
	public:
		SQLInvalidAuthorizationSpecException(QAndroidJniObject obj) { __thiz = obj; }
		SQLInvalidAuthorizationSpecException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLInvalidAuthorizationSpecException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLInvalidAuthorizationSpecException()
		{
			__constructor();
		}
		SQLInvalidAuthorizationSpecException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION

