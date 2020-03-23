#pragma once

#ifndef JAVA_NET_STANDARDPROTOCOLFAMILY
#define JAVA_NET_STANDARDPROTOCOLFAMILY

#include "../lang/Enum.hpp"


namespace __jni_impl::java::net
{
	class StandardProtocolFamily : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INET();
		static QAndroidJniObject INET6();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	QAndroidJniObject StandardProtocolFamily::INET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET",
			"Ljava/net/StandardProtocolFamily;");
	}
	QAndroidJniObject StandardProtocolFamily::INET6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET6",
			"Ljava/net/StandardProtocolFamily;");
	}
	
	// Constructors
	void StandardProtocolFamily::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.StandardProtocolFamily",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject StandardProtocolFamily::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"values",
			"()[Ljava/net/StandardProtocolFamily;");
	}
	QAndroidJniObject StandardProtocolFamily::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/StandardProtocolFamily;",
			arg0);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class StandardProtocolFamily : public __jni_impl::java::net::StandardProtocolFamily
	{
	public:
		StandardProtocolFamily(QAndroidJniObject obj) { __thiz = obj; }
		StandardProtocolFamily()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_STANDARDPROTOCOLFAMILY

