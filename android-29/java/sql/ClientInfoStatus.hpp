#pragma once

#ifndef JAVA_SQL_CLIENTINFOSTATUS
#define JAVA_SQL_CLIENTINFOSTATUS

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::sql
{
	class ClientInfoStatus : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject REASON_UNKNOWN();
		static QAndroidJniObject REASON_UNKNOWN_PROPERTY();
		static QAndroidJniObject REASON_VALUE_INVALID();
		static QAndroidJniObject REASON_VALUE_TRUNCATED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	QAndroidJniObject ClientInfoStatus::REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN",
			"Ljava/sql/ClientInfoStatus;");
	}
	QAndroidJniObject ClientInfoStatus::REASON_UNKNOWN_PROPERTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN_PROPERTY",
			"Ljava/sql/ClientInfoStatus;");
	}
	QAndroidJniObject ClientInfoStatus::REASON_VALUE_INVALID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_INVALID",
			"Ljava/sql/ClientInfoStatus;");
	}
	QAndroidJniObject ClientInfoStatus::REASON_VALUE_TRUNCATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_TRUNCATED",
			"Ljava/sql/ClientInfoStatus;");
	}
	
	// Constructors
	void ClientInfoStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.ClientInfoStatus",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ClientInfoStatus::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"values",
			"()[Ljava/sql/ClientInfoStatus;");
	}
	QAndroidJniObject ClientInfoStatus::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;",
			arg0);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class ClientInfoStatus : public __jni_impl::java::sql::ClientInfoStatus
	{
	public:
		ClientInfoStatus(QAndroidJniObject obj) { __thiz = obj; }
		ClientInfoStatus()
		{
			__constructor();
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_CLIENTINFOSTATUS

