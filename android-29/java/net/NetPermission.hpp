#pragma once

#ifndef JAVA_NET_NETPERMISSION
#define JAVA_NET_NETPERMISSION

#include "../security/BasicPermission.hpp"


namespace __jni_impl::java::net
{
	class NetPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void NetPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NetPermission",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void NetPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.NetPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class NetPermission : public __jni_impl::java::net::NetPermission
	{
	public:
		NetPermission(QAndroidJniObject obj) { __thiz = obj; }
		NetPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NetPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_NETPERMISSION

