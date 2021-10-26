#pragma once

#ifndef JAVA_NET_SOCKETADDRESS
#define JAVA_NET_SOCKETADDRESS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::net
{
	class SocketAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void SocketAddress::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketAddress",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class SocketAddress : public __jni_impl::java::net::SocketAddress
	{
	public:
		SocketAddress(QAndroidJniObject obj) { __thiz = obj; }
		SocketAddress()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKETADDRESS

