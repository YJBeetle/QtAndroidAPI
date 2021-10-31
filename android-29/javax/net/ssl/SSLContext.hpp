#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::net::ssl
{
	class SSLContextSpi;
}
namespace javax::net::ssl
{
	class SSLEngine;
}
namespace javax::net::ssl
{
	class SSLParameters;
}
namespace javax::net::ssl
{
	class SSLServerSocketFactory;
}
namespace javax::net::ssl
{
	class SSLSocketFactory;
}

namespace javax::net::ssl
{
	class SSLContext : public __JniBaseClass
	{
	public:
		// Fields
		
		SSLContext(QAndroidJniObject obj);
		// Constructors
		SSLContext() = default;
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static void setDefault(javax::net::ssl::SSLContext arg0);
		QAndroidJniObject createSSLEngine();
		QAndroidJniObject createSSLEngine(jstring arg0, jint arg1);
		QAndroidJniObject getClientSessionContext();
		QAndroidJniObject getDefaultSSLParameters();
		jstring getProtocol();
		QAndroidJniObject getProvider();
		QAndroidJniObject getServerSessionContext();
		QAndroidJniObject getServerSocketFactory();
		QAndroidJniObject getSocketFactory();
		QAndroidJniObject getSupportedSSLParameters();
		void init(jarray arg0, jarray arg1, java::security::SecureRandom arg2);
	};
} // namespace javax::net::ssl

