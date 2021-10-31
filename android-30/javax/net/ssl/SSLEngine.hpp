#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace javax::net::ssl
{
	class SSLEngineResult;
}
namespace javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus;
}
namespace javax::net::ssl
{
	class SSLParameters;
}

namespace javax::net::ssl
{
	class SSLEngine : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLEngine(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngine(QJniObject obj);
		
		// Constructors
		
		// Methods
		void beginHandshake();
		void closeInbound();
		void closeOutbound();
		jstring getApplicationProtocol();
		__JniBaseClass getDelegatedTask();
		jboolean getEnableSessionCreation();
		jarray getEnabledCipherSuites();
		jarray getEnabledProtocols();
		jstring getHandshakeApplicationProtocol();
		__JniBaseClass getHandshakeApplicationProtocolSelector();
		__JniBaseClass getHandshakeSession();
		javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus();
		jboolean getNeedClientAuth();
		jstring getPeerHost();
		jint getPeerPort();
		javax::net::ssl::SSLParameters getSSLParameters();
		__JniBaseClass getSession();
		jarray getSupportedCipherSuites();
		jarray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		jboolean isInboundDone();
		jboolean isOutboundDone();
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		void setHandshakeApplicationProtocolSelector(__JniBaseClass arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, jarray arg1);
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, jarray arg1, jint arg2, jint arg3);
		javax::net::ssl::SSLEngineResult wrap(jarray arg0, java::nio::ByteBuffer arg1);
		javax::net::ssl::SSLEngineResult wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		javax::net::ssl::SSLEngineResult wrap(jarray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3);
	};
} // namespace javax::net::ssl

