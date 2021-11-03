#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JString;
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
	class SSLEngine : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLEngine(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngine(QJniObject obj);
		
		// Constructors
		
		// Methods
		void beginHandshake();
		void closeInbound();
		void closeOutbound();
		JString getApplicationProtocol();
		JObject getDelegatedTask();
		jboolean getEnableSessionCreation();
		JArray getEnabledCipherSuites();
		JArray getEnabledProtocols();
		JString getHandshakeApplicationProtocol();
		JObject getHandshakeApplicationProtocolSelector();
		JObject getHandshakeSession();
		javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus();
		jboolean getNeedClientAuth();
		JString getPeerHost();
		jint getPeerPort();
		javax::net::ssl::SSLParameters getSSLParameters();
		JObject getSession();
		JArray getSupportedCipherSuites();
		JArray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		jboolean isInboundDone();
		jboolean isOutboundDone();
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(JArray arg0);
		void setEnabledProtocols(JArray arg0);
		void setHandshakeApplicationProtocolSelector(JObject arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, JArray arg1);
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, JArray arg1, jint arg2, jint arg3);
		javax::net::ssl::SSLEngineResult wrap(JArray arg0, java::nio::ByteBuffer arg1);
		javax::net::ssl::SSLEngineResult wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		javax::net::ssl::SSLEngineResult wrap(JArray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3);
	};
} // namespace javax::net::ssl

