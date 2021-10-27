#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace __jni_impl::java::sql
{
	class SQLPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
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
			arg0
		);
	}
	void SQLPermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SQLPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void SQLPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
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

