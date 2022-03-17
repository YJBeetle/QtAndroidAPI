#pragma once

#include "../../../JArray.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./SSLParameters.def.hpp"
#include "./SSLServerSocket.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean SSLServerSocket::getEnableSessionCreation() const
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	inline JArray SSLServerSocket::getEnabledCipherSuites() const
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLServerSocket::getEnabledProtocols() const
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean SSLServerSocket::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	inline javax::net::ssl::SSLParameters SSLServerSocket::getSSLParameters() const
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	inline JArray SSLServerSocket::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLServerSocket::getSupportedProtocols() const
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean SSLServerSocket::getUseClientMode() const
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	inline jboolean SSLServerSocket::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	inline void SSLServerSocket::setEnableSessionCreation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	inline void SSLServerSocket::setEnabledCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLServerSocket::setEnabledProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLServerSocket::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	inline void SSLServerSocket::setSSLParameters(javax::net::ssl::SSLParameters arg0) const
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	inline void SSLServerSocket::setUseClientMode(jboolean arg0) const
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	inline void SSLServerSocket::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/net/ServerSocket.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
