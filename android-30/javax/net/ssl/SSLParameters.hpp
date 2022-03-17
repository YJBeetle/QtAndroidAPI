#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLParameters.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLParameters::SSLParameters()
		: JObject(
			"javax.net.ssl.SSLParameters",
			"()V"
		) {}
	inline SSLParameters::SSLParameters(JArray arg0)
		: JObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	inline SSLParameters::SSLParameters(JArray arg0, JArray arg1)
		: JObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline JObject SSLParameters::getAlgorithmConstraints() const
	{
		return callObjectMethod(
			"getAlgorithmConstraints",
			"()Ljava/security/AlgorithmConstraints;"
		);
	}
	inline JArray SSLParameters::getApplicationProtocols() const
	{
		return callObjectMethod(
			"getApplicationProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLParameters::getCipherSuites() const
	{
		return callObjectMethod(
			"getCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean SSLParameters::getEnableRetransmissions() const
	{
		return callMethod<jboolean>(
			"getEnableRetransmissions",
			"()Z"
		);
	}
	inline JString SSLParameters::getEndpointIdentificationAlgorithm() const
	{
		return callObjectMethod(
			"getEndpointIdentificationAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline jint SSLParameters::getMaximumPacketSize() const
	{
		return callMethod<jint>(
			"getMaximumPacketSize",
			"()I"
		);
	}
	inline jboolean SSLParameters::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	inline JArray SSLParameters::getProtocols() const
	{
		return callObjectMethod(
			"getProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline JObject SSLParameters::getSNIMatchers() const
	{
		return callObjectMethod(
			"getSNIMatchers",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject SSLParameters::getServerNames() const
	{
		return callObjectMethod(
			"getServerNames",
			"()Ljava/util/List;"
		);
	}
	inline jboolean SSLParameters::getUseCipherSuitesOrder() const
	{
		return callMethod<jboolean>(
			"getUseCipherSuitesOrder",
			"()Z"
		);
	}
	inline jboolean SSLParameters::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	inline void SSLParameters::setAlgorithmConstraints(JObject arg0) const
	{
		callMethod<void>(
			"setAlgorithmConstraints",
			"(Ljava/security/AlgorithmConstraints;)V",
			arg0.object()
		);
	}
	inline void SSLParameters::setApplicationProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setApplicationProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLParameters::setCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLParameters::setEnableRetransmissions(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableRetransmissions",
			"(Z)V",
			arg0
		);
	}
	inline void SSLParameters::setEndpointIdentificationAlgorithm(JString arg0) const
	{
		callMethod<void>(
			"setEndpointIdentificationAlgorithm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SSLParameters::setMaximumPacketSize(jint arg0) const
	{
		callMethod<void>(
			"setMaximumPacketSize",
			"(I)V",
			arg0
		);
	}
	inline void SSLParameters::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	inline void SSLParameters::setProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLParameters::setSNIMatchers(JObject arg0) const
	{
		callMethod<void>(
			"setSNIMatchers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	inline void SSLParameters::setServerNames(JObject arg0) const
	{
		callMethod<void>(
			"setServerNames",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void SSLParameters::setUseCipherSuitesOrder(jboolean arg0) const
	{
		callMethod<void>(
			"setUseCipherSuitesOrder",
			"(Z)V",
			arg0
		);
	}
	inline void SSLParameters::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
