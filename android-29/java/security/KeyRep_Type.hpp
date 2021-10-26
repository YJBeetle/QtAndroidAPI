#pragma once

#ifndef JAVA_SECURITY_KEYREP_TYPE
#define JAVA_SECURITY_KEYREP_TYPE

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::security
{
	class KeyRep_Type : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject SECRET();
		static QAndroidJniObject PUBLIC();
		static QAndroidJniObject PRIVATE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	QAndroidJniObject KeyRep_Type::SECRET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.KeyRep$Type",
			"SECRET",
			"Ljava/security/KeyRep$Type;"
		);
	}
	QAndroidJniObject KeyRep_Type::PUBLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.KeyRep$Type",
			"PUBLIC",
			"Ljava/security/KeyRep$Type;"
		);
	}
	QAndroidJniObject KeyRep_Type::PRIVATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.KeyRep$Type",
			"PRIVATE",
			"Ljava/security/KeyRep$Type;"
		);
	}
	
	// Constructors
	void KeyRep_Type::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyRep$Type",
			"(V)V");
	}
	
	// Methods
	jarray KeyRep_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"values",
			"()[Ljava/security/KeyRep$Type;"
		).object<jarray>();
	}
	QAndroidJniObject KeyRep_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/KeyRep$Type;",
			arg0
		);
	}
	QAndroidJniObject KeyRep_Type::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/KeyRep$Type;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyRep_Type : public __jni_impl::java::security::KeyRep_Type
	{
	public:
		KeyRep_Type(QAndroidJniObject obj) { __thiz = obj; }
		KeyRep_Type()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYREP_TYPE

