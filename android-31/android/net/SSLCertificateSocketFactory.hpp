#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./SSLSessionCache.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "../../javax/net/SocketFactory.def.hpp"
#include "../../javax/net/ssl/SSLSocketFactory.def.hpp"
#include "./SSLCertificateSocketFactory.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline SSLCertificateSocketFactory::SSLCertificateSocketFactory(jint arg0)
		: javax::net::ssl::SSLSocketFactory(
			"android.net.SSLCertificateSocketFactory",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline javax::net::SocketFactory SSLCertificateSocketFactory::getDefault(jint arg0)
	{
		return callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getDefault",
			"(I)Ljavax/net/SocketFactory;",
			arg0
		);
	}
	inline javax::net::ssl::SSLSocketFactory SSLCertificateSocketFactory::getDefault(jint arg0, android::net::SSLSessionCache arg1)
	{
		return callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getDefault",
			"(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;",
			arg0,
			arg1.object()
		);
	}
	inline javax::net::ssl::SSLSocketFactory SSLCertificateSocketFactory::getInsecure(jint arg0, android::net::SSLSessionCache arg1)
	{
		return callStaticObjectMethod(
			"android.net.SSLCertificateSocketFactory",
			"getInsecure",
			"(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;",
			arg0,
			arg1.object()
		);
	}
	inline java::net::Socket SSLCertificateSocketFactory::createSocket() const
	{
		return callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	inline java::net::Socket SSLCertificateSocketFactory::createSocket(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline java::net::Socket SSLCertificateSocketFactory::createSocket(java::net::InetAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1
		);
	}
	inline java::net::Socket SSLCertificateSocketFactory::createSocket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline java::net::Socket SSLCertificateSocketFactory::createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline java::net::Socket SSLCertificateSocketFactory::createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline JArray SSLCertificateSocketFactory::getDefaultCipherSuites() const
	{
		return callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JByteArray SSLCertificateSocketFactory::getNpnSelectedProtocol(java::net::Socket arg0) const
	{
		return callObjectMethod(
			"getNpnSelectedProtocol",
			"(Ljava/net/Socket;)[B",
			arg0.object()
		);
	}
	inline JArray SSLCertificateSocketFactory::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline void SSLCertificateSocketFactory::setHostname(java::net::Socket arg0, JString arg1) const
	{
		callMethod<void>(
			"setHostname",
			"(Ljava/net/Socket;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void SSLCertificateSocketFactory::setKeyManagers(JArray arg0) const
	{
		callMethod<void>(
			"setKeyManagers",
			"([Ljavax/net/ssl/KeyManager;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLCertificateSocketFactory::setNpnProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setNpnProtocols",
			"([[B)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLCertificateSocketFactory::setTrustManagers(JArray arg0) const
	{
		callMethod<void>(
			"setTrustManagers",
			"([Ljavax/net/ssl/TrustManager;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLCertificateSocketFactory::setUseSessionTickets(java::net::Socket arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setUseSessionTickets",
			"(Ljava/net/Socket;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers
#include "../../javax/net/SocketFactory.hpp"
#include "../../javax/net/ssl/SSLSocketFactory.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
