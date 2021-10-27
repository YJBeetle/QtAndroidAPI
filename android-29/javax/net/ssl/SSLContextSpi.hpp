#pragma once

#ifndef JAVAX_NET_SSL_SSLCONTEXTSPI
#define JAVAX_NET_SSL_SSLCONTEXTSPI

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class SecureRandom;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLEngine;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLParameters;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLServerSocketFactory;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLSocket;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLSocketFactory;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLContextSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/security/SecureRandom.hpp"
#include "SSLEngine.hpp"
#include "SSLParameters.hpp"
#include "SSLServerSocketFactory.hpp"
#include "SSLSocket.hpp"
#include "SSLSocketFactory.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLContextSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLContextSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLContextSpi : public __jni_impl::javax::net::ssl::SSLContextSpi
	{
	public:
		SSLContextSpi(QAndroidJniObject obj) { __thiz = obj; }
		SSLContextSpi()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLCONTEXTSPI

