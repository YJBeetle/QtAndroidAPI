#pragma once

#ifndef JAVA_SQL_SQLPERMISSION
#define JAVA_SQL_SQLPERMISSION

#include "../security/BasicPermission.hpp"


namespace __jni_impl::java::sql
{
	class SQLPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void SQLPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SQLPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class SQLPermission : public __jni_impl::java::sql::SQLPermission
	{
	public:
		SQLPermission(QAndroidJniObject obj) { __thiz = obj; }
		SQLPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_SQLPERMISSION

