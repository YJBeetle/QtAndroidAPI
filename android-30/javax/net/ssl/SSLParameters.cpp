#include "./SSLParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLParameters::SSLParameters(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SSLParameters::SSLParameters()
		: JObject(
			"javax.net.ssl.SSLParameters",
			"()V"
		) {}
	SSLParameters::SSLParameters(jarray arg0)
		: JObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;)V",
			arg0
		) {}
	SSLParameters::SSLParameters(jarray arg0, jarray arg1)
		: JObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	JObject SSLParameters::getAlgorithmConstraints()
	{
		return callObjectMethod(
			"getAlgorithmConstraints",
			"()Ljava/security/AlgorithmConstraints;"
		);
	}
	jarray SSLParameters::getApplicationProtocols()
	{
		return callObjectMethod(
			"getApplicationProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLParameters::getCipherSuites()
	{
		return callObjectMethod(
			"getCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean SSLParameters::getEnableRetransmissions()
	{
		return callMethod<jboolean>(
			"getEnableRetransmissions",
			"()Z"
		);
	}
	jstring SSLParameters::getEndpointIdentificationAlgorithm()
	{
		return callObjectMethod(
			"getEndpointIdentificationAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SSLParameters::getMaximumPacketSize()
	{
		return callMethod<jint>(
			"getMaximumPacketSize",
			"()I"
		);
	}
	jboolean SSLParameters::getNeedClientAuth()
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	jarray SSLParameters::getProtocols()
	{
		return callObjectMethod(
			"getProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	JObject SSLParameters::getSNIMatchers()
	{
		return callObjectMethod(
			"getSNIMatchers",
			"()Ljava/util/Collection;"
		);
	}
	JObject SSLParameters::getServerNames()
	{
		return callObjectMethod(
			"getServerNames",
			"()Ljava/util/List;"
		);
	}
	jboolean SSLParameters::getUseCipherSuitesOrder()
	{
		return callMethod<jboolean>(
			"getUseCipherSuitesOrder",
			"()Z"
		);
	}
	jboolean SSLParameters::getWantClientAuth()
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLParameters::setAlgorithmConstraints(JObject arg0)
	{
		callMethod<void>(
			"setAlgorithmConstraints",
			"(Ljava/security/AlgorithmConstraints;)V",
			arg0.object()
		);
	}
	void SSLParameters::setApplicationProtocols(jarray arg0)
	{
		callMethod<void>(
			"setApplicationProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setCipherSuites(jarray arg0)
	{
		callMethod<void>(
			"setCipherSuites",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setEnableRetransmissions(jboolean arg0)
	{
		callMethod<void>(
			"setEnableRetransmissions",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setEndpointIdentificationAlgorithm(jstring arg0)
	{
		callMethod<void>(
			"setEndpointIdentificationAlgorithm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setMaximumPacketSize(jint arg0)
	{
		callMethod<void>(
			"setMaximumPacketSize",
			"(I)V",
			arg0
		);
	}
	void SSLParameters::setNeedClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setProtocols(jarray arg0)
	{
		callMethod<void>(
			"setProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setSNIMatchers(JObject arg0)
	{
		callMethod<void>(
			"setSNIMatchers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void SSLParameters::setServerNames(JObject arg0)
	{
		callMethod<void>(
			"setServerNames",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void SSLParameters::setUseCipherSuitesOrder(jboolean arg0)
	{
		callMethod<void>(
			"setUseCipherSuitesOrder",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setWantClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl

