#include "./SSLParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLParameters::SSLParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLParameters::SSLParameters()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"()V"
		);
	}
	SSLParameters::SSLParameters(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	SSLParameters::SSLParameters(jarray &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject SSLParameters::getAlgorithmConstraints()
	{
		return __thiz.callObjectMethod(
			"getAlgorithmConstraints",
			"()Ljava/security/AlgorithmConstraints;"
		);
	}
	jarray SSLParameters::getApplicationProtocols()
	{
		return __thiz.callObjectMethod(
			"getApplicationProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLParameters::getCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean SSLParameters::getEnableRetransmissions()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableRetransmissions",
			"()Z"
		);
	}
	jstring SSLParameters::getEndpointIdentificationAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getEndpointIdentificationAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SSLParameters::getMaximumPacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaximumPacketSize",
			"()I"
		);
	}
	jboolean SSLParameters::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	jarray SSLParameters::getProtocols()
	{
		return __thiz.callObjectMethod(
			"getProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject SSLParameters::getSNIMatchers()
	{
		return __thiz.callObjectMethod(
			"getSNIMatchers",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject SSLParameters::getServerNames()
	{
		return __thiz.callObjectMethod(
			"getServerNames",
			"()Ljava/util/List;"
		);
	}
	jboolean SSLParameters::getUseCipherSuitesOrder()
	{
		return __thiz.callMethod<jboolean>(
			"getUseCipherSuitesOrder",
			"()Z"
		);
	}
	jboolean SSLParameters::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLParameters::setAlgorithmConstraints(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAlgorithmConstraints",
			"(Ljava/security/AlgorithmConstraints;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLParameters::setApplicationProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setApplicationProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setCipherSuites",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setEnableRetransmissions(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableRetransmissions",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setEndpointIdentificationAlgorithm(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEndpointIdentificationAlgorithm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setEndpointIdentificationAlgorithm(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEndpointIdentificationAlgorithm",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SSLParameters::setMaximumPacketSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumPacketSize",
			"(I)V",
			arg0
		);
	}
	void SSLParameters::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::setSNIMatchers(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSNIMatchers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLParameters::setServerNames(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setServerNames",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLParameters::setUseCipherSuitesOrder(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseCipherSuitesOrder",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl

