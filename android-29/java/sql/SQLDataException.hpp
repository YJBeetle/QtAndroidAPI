#pragma once

#ifndef JAVA_SQL_SQLDATAEXCEPTION
#define JAVA_SQL_SQLDATAEXCEPTION

#include "SQLNonTransientException.hpp"


namespace __jni_impl::java::sql
{
	class SQLDataException : public __jni_impl::java::sql::SQLNonTransientException
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
	void SQLDataException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SQLDataException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SQLDataException::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLDataException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SQLDataException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"()V");
	}
	void SQLDataException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLDataException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SQLDataException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLDataException : public __jni_impl::java::sql::SQLDataException
	{
	public:
		SQLDataException(QAndroidJniObject obj) { __thiz = obj; }
		SQLDataException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLDataException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLDataException(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLDataException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLDataException()
		{
			__constructor();
		}
		SQLDataException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLDataException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLDataException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLDATAEXCEPTION

