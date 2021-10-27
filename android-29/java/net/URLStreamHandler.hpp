#pragma once

#ifndef JAVA_NET_URLSTREAMHANDLER
#define JAVA_NET_URLSTREAMHANDLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class Proxy;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::net
{
	class URLConnection;
}

namespace __jni_impl::java::net
{
	class URLStreamHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"
#include "Proxy.hpp"
#include "URL.hpp"
#include "URLConnection.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URLStreamHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.URLStreamHandler",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class URLStreamHandler : public __jni_impl::java::net::URLStreamHandler
	{
	public:
		URLStreamHandler(QAndroidJniObject obj) { __thiz = obj; }
		URLStreamHandler()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_URLSTREAMHANDLER

