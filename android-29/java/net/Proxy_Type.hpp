#pragma once

#ifndef JAVA_NET_PROXY_TYPE
#define JAVA_NET_PROXY_TYPE

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::net
{
	class Proxy_Type : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIRECT();
		static QAndroidJniObject HTTP();
		static QAndroidJniObject SOCKS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	QAndroidJniObject Proxy_Type::DIRECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy$Type",
			"DIRECT",
			"Ljava/net/Proxy$Type;"
		);
	}
	QAndroidJniObject Proxy_Type::HTTP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy$Type",
			"HTTP",
			"Ljava/net/Proxy$Type;"
		);
	}
	QAndroidJniObject Proxy_Type::SOCKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy$Type",
			"SOCKS",
			"Ljava/net/Proxy$Type;"
		);
	}
	
	// Constructors
	void Proxy_Type::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.Proxy$Type",
			"(V)V");
	}
	
	// Methods
	jarray Proxy_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Proxy$Type",
			"values",
			"()[Ljava/net/Proxy$Type;"
		).object<jarray>();
	}
	QAndroidJniObject Proxy_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Proxy$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Proxy$Type;",
			arg0
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Proxy_Type : public __jni_impl::java::net::Proxy_Type
	{
	public:
		Proxy_Type(QAndroidJniObject obj) { __thiz = obj; }
		Proxy_Type()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_PROXY_TYPE

