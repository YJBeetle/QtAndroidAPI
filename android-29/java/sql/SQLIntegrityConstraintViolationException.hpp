#pragma once

#ifndef JAVA_SQL_SQLINTEGRITYCONSTRAINTVIOLATIONEXCEPTION
#define JAVA_SQL_SQLINTEGRITYCONSTRAINTVIOLATIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"
#include "SQLNonTransientException.hpp"


namespace __jni_impl::java::sql
{
	class SQLIntegrityConstraintViolationException : public __jni_impl::java::sql::SQLNonTransientException
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
	void SQLIntegrityConstraintViolationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SQLIntegrityConstraintViolationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SQLIntegrityConstraintViolationException::__constructor(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	void SQLIntegrityConstraintViolationException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SQLIntegrityConstraintViolationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"()V");
	}
	void SQLIntegrityConstraintViolationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLIntegrityConstraintViolationException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SQLIntegrityConstraintViolationException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLIntegrityConstraintViolationException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLIntegrityConstraintViolationException : public __jni_impl::java::sql::SQLIntegrityConstraintViolationException
	{
	public:
		SQLIntegrityConstraintViolationException(QAndroidJniObject obj) { __thiz = obj; }
		SQLIntegrityConstraintViolationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SQLIntegrityConstraintViolationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLIntegrityConstraintViolationException()
		{
			__constructor();
		}
		SQLIntegrityConstraintViolationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLINTEGRITYCONSTRAINTVIOLATIONEXCEPTION

