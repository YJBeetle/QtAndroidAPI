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
		void beginHandshake() const;
		void closeInbound() const;
		void closeOutbound() const;
		JString getApplicationProtocol() const;
		JObject getDelegatedTask() const;
		jboolean getEnableSessionCreation() const;
		JArray getEnabledCipherSuites() const;
		JArray getEnabledProtocols() const;
		JString getHandshakeApplicationProtocol() const;
		JObject getHandshakeApplicationProtocolSelector() const;
		JObject getHandshakeSession() const;
		javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus() const;
		jboolean getNeedClientAuth() const;
		JString getPeerHost() const;
		jint getPeerPort() const;
		javax::net::ssl::SSLParameters getSSLParameters() const;
		JObject getSession() const;
		JArray getSupportedCipherSuites() const;
		JArray getSupportedProtocols() const;
		jboolean getUseClientMode() const;
		jboolean getWantClientAuth() const;
		jboolean isInboundDone() const;
		jboolean isOutboundDone() const;
		void setEnableSessionCreation(jboolean arg0) const;
		void setEnabledCipherSuites(JArray arg0) const;
		void setEnabledProtocols(JArray arg0) const;
		void setHandshakeApplicationProtocolSelector(JObject arg0) const;
		void setNeedClientAuth(jboolean arg0) const;
		void setSSLParameters(javax::net::ssl::SSLParameters arg0) const;
		void setUseClientMode(jboolean arg0) const;
		void setWantClientAuth(jboolean arg0) const;
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, JArray arg1) const;
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const;
		javax::net::ssl::SSLEngineResult unwrap(java::nio::ByteBuffer arg0, JArray arg1, jint arg2, jint arg3) const;
		javax::net::ssl::SSLEngineResult wrap(JArray arg0, java::nio::ByteBuffer arg1) const;
		javax::net::ssl::SSLEngineResult wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const;
		javax::net::ssl::SSLEngineResult wrap(JArray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3) const;
	};
} // namespace javax::net::ssl

