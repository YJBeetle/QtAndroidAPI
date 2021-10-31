#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/util/EventObject.hpp"

namespace javax::net::ssl
{
	class SSLSocket;
}

namespace javax::net::ssl
{
	class HandshakeCompletedEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		HandshakeCompletedEvent(QAndroidJniObject obj);
		// Constructors
		HandshakeCompletedEvent(javax::net::ssl::SSLSocket arg0, __JniBaseClass arg1);
		HandshakeCompletedEvent() = default;
		
		// Methods
		jstring getCipherSuite();
		jarray getLocalCertificates();
		QAndroidJniObject getLocalPrincipal();
		jarray getPeerCertificateChain();
		jarray getPeerCertificates();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getSession();
		QAndroidJniObject getSocket();
	};
} // namespace javax::net::ssl

