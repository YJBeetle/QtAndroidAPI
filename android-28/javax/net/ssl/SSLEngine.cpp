#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./SSLEngineResult.hpp"
#include "./SSLEngineResult_HandshakeStatus.hpp"
#include "./SSLParameters.hpp"
#include "./SSLEngine.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLEngine::SSLEngine(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void SSLEngine::beginHandshake() const
	{
		callMethod<void>(
			"beginHandshake",
			"()V"
		);
	}
	void SSLEngine::closeInbound() const
	{
		callMethod<void>(
			"closeInbound",
			"()V"
		);
	}
	void SSLEngine::closeOutbound() const
	{
		callMethod<void>(
			"closeOutbound",
			"()V"
		);
	}
	JString SSLEngine::getApplicationProtocol() const
	{
		return callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLEngine::getDelegatedTask() const
	{
		return callObjectMethod(
			"getDelegatedTask",
			"()Ljava/lang/Runnable;"
		);
	}
	jboolean SSLEngine::getEnableSessionCreation() const
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	JArray SSLEngine::getEnabledCipherSuites() const
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLEngine::getEnabledProtocols() const
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	JString SSLEngine::getHandshakeApplicationProtocol() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLEngine::getHandshakeApplicationProtocolSelector() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	JObject SSLEngine::getHandshakeSession() const
	{
		return callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngine::getHandshakeStatus() const
	{
		return callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	jboolean SSLEngine::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	JString SSLEngine::getPeerHost() const
	{
		return callObjectMethod(
			"getPeerHost",
			"()Ljava/lang/String;"
		);
	}
	jint SSLEngine::getPeerPort() const
	{
		return callMethod<jint>(
			"getPeerPort",
			"()I"
		);
	}
	javax::net::ssl::SSLParameters SSLEngine::getSSLParameters() const
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JObject SSLEngine::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	JArray SSLEngine::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLEngine::getSupportedProtocols() const
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLEngine::getUseClientMode() const
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLEngine::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	jboolean SSLEngine::isInboundDone() const
	{
		return callMethod<jboolean>(
			"isInboundDone",
			"()Z"
		);
	}
	jboolean SSLEngine::isOutboundDone() const
	{
		return callMethod<jboolean>(
			"isOutboundDone",
			"()Z"
		);
	}
	void SSLEngine::setEnableSessionCreation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setEnabledCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLEngine::setEnabledProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLEngine::setHandshakeApplicationProtocolSelector(JObject arg0) const
	{
		callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	void SSLEngine::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setSSLParameters(javax::net::ssl::SSLParameters arg0) const
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	void SSLEngine::setUseClientMode(jboolean arg0) const
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, JArray arg1) const
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, JArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2,
			arg3
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::wrap(JArray arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::wrap(JArray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3) const
	{
		return callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object<jarray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
} // namespace javax::net::ssl

