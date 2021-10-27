#pragma once

#ifndef JAVA_NET_AUTHENTICATOR_REQUESTORTYPE
#define JAVA_NET_AUTHENTICATOR_REQUESTORTYPE

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::net
{
	class Authenticator_RequestorType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PROXY();
		static QAndroidJniObject SERVER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	QAndroidJniObject Authenticator_RequestorType::PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"PROXY",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	QAndroidJniObject Authenticator_RequestorType::SERVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"SERVER",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	
	// Constructors
	void Authenticator_RequestorType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.Authenticator$RequestorType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Authenticator_RequestorType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;",
			arg0
		);
	}
	QAndroidJniObject Authenticator_RequestorType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Authenticator_RequestorType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"values",
			"()[Ljava/net/Authenticator$RequestorType;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Authenticator_RequestorType : public __jni_impl::java::net::Authenticator_RequestorType
	{
	public:
		Authenticator_RequestorType(QAndroidJniObject obj) { __thiz = obj; }
		Authenticator_RequestorType()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_AUTHENTICATOR_REQUESTORTYPE

