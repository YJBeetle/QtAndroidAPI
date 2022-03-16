#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./SSLEngineResult.def.hpp"
#include "./SSLEngineResult_HandshakeStatus.def.hpp"
#include "./SSLParameters.def.hpp"
#include "./SSLEngine.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SSLEngine::beginHandshake() const
	{
		callMethod<void>(
			"beginHandshake",
			"()V"
		);
	}
	inline void SSLEngine::closeInbound() const
	{
		callMethod<void>(
			"closeInbound",
			"()V"
		);
	}
	inline void SSLEngine::closeOutbound() const
	{
		callMethod<void>(
			"closeOutbound",
			"()V"
		);
	}
	inline JString SSLEngine::getApplicationProtocol() const
	{
		return callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SSLEngine::getDelegatedTask() const
	{
		return callObjectMethod(
			"getDelegatedTask",
			"()Ljava/lang/Runnable;"
		);
	}
	inline jboolean SSLEngine::getEnableSessionCreation() const
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	inline JArray SSLEngine::getEnabledCipherSuites() const
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLEngine::getEnabledProtocols() const
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline JString SSLEngine::getHandshakeApplicationProtocol() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SSLEngine::getHandshakeApplicationProtocolSelector() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	inline JObject SSLEngine::getHandshakeSession() const
	{
		return callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngine::getHandshakeStatus() const
	{
		return callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline jboolean SSLEngine::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	inline JString SSLEngine::getPeerHost() const
	{
		return callObjectMethod(
			"getPeerHost",
			"()Ljava/lang/String;"
		);
	}
	inline jint SSLEngine::getPeerPort() const
	{
		return callMethod<jint>(
			"getPeerPort",
			"()I"
		);
	}
	inline javax::net::ssl::SSLParameters SSLEngine::getSSLParameters() const
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	inline JObject SSLEngine::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	inline JArray SSLEngine::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLEngine::getSupportedProtocols() const
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean SSLEngine::getUseClientMode() const
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	inline jboolean SSLEngine::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	inline jboolean SSLEngine::isInboundDone() const
	{
		return callMethod<jboolean>(
			"isInboundDone",
			"()Z"
		);
	}
	inline jboolean SSLEngine::isOutboundDone() const
	{
		return callMethod<jboolean>(
			"isOutboundDone",
			"()Z"
		);
	}
	inline void SSLEngine::setEnableSessionCreation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	inline void SSLEngine::setEnabledCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLEngine::setEnabledProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLEngine::setHandshakeApplicationProtocolSelector(JObject arg0) const
	{
		callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline void SSLEngine::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	inline void SSLEngine::setSSLParameters(javax::net::ssl::SSLParameters arg0) const
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	inline void SSLEngine::setUseClientMode(jboolean arg0) const
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	inline void SSLEngine::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	inline javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, JArray arg1) const
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object()
		);
	}
	inline javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, JArray arg1, jint arg2, jint arg3) const
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
	inline javax::net::ssl::SSLEngineResult SSLEngine::wrap(JArray arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline javax::net::ssl::SSLEngineResult SSLEngine::wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object()
		);
	}
	inline javax::net::ssl::SSLEngineResult SSLEngine::wrap(JArray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3) const
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

// Base class headers

