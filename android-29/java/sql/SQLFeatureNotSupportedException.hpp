#pragma once

#ifndef JAVA_SQL_SQLFEATURENOTSUPPORTEDEXCEPTION
#define JAVA_SQL_SQLFEATURENOTSUPPORTEDEXCEPTION

#include "SQLNonTransientException.hpp"


namespace __jni_impl::java::sql
{
	class SQLFeatureNotSupportedException : public __jni_impl::java::sql::SQLNonTransientException
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
	void SQLFeatureNotSupportedException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SQLFeatureNotSupportedException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SQLFeatureNotSupportedException::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLFeatureNotSupportedException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SQLFeatureNotSupportedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"()V");
	}
	void SQLFeatureNotSupportedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLFeatureNotSupportedException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SQLFeatureNotSupportedException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLFeatureNotSupportedException : public __jni_impl::java::sql::SQLFeatureNotSupportedException
	{
	public:
		SQLFeatureNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
		SQLFeatureNotSupportedException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLFeatureNotSupportedException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLFeatureNotSupportedException()
		{
			__constructor();
		}
		SQLFeatureNotSupportedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLFEATURENOTSUPPORTEDEXCEPTION

