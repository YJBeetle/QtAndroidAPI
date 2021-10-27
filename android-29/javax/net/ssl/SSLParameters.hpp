#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jarray arg0);
		void __constructor(jarray arg0, jarray arg1);
		
		// Methods
		QAndroidJniObject getAlgorithmConstraints();
		jarray getApplicationProtocols();
		jarray getCipherSuites();
		jboolean getEnableRetransmissions();
		jstring getEndpointIdentificationAlgorithm();
		jint getMaximumPacketSize();
		jboolean getNeedClientAuth();
		jarray getProtocols();
		QAndroidJniObject getSNIMatchers();
		QAndroidJniObject getServerNames();
		jboolean getUseCipherSuitesOrder();
		jboolean getWantClientAuth();
		void setAlgorithmConstraints(__jni_impl::__JniBaseClass arg0);
		void setApplicationProtocols(jarray arg0);
		void setCipherSuites(jarray arg0);
		void setEnableRetransmissions(jboolean arg0);
		void setEndpointIdentificationAlgorithm(jstring arg0);
		void setEndpointIdentificationAlgorithm(const QString &arg0);
		void setMaximumPacketSize(jint arg0);
		void setNeedClientAuth(jboolean arg0);
		void setProtocols(jarray arg0);
		void setSNIMatchers(__jni_impl::__JniBaseClass arg0);
		void setServerNames(__jni_impl::__JniBaseClass arg0);
		void setUseCipherSuitesOrder(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"()V"
		);
	}
	void SSLParameters::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLParameters::__constructor(jarray arg0, jarray arg1)
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
	void SSLParameters::setAlgorithmConstraints(__jni_impl::__JniBaseClass arg0)
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
	void SSLParameters::setSNIMatchers(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSNIMatchers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLParameters::setServerNames(__jni_impl::__JniBaseClass arg0)
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
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLParameters : public __jni_impl::javax::net::ssl::SSLParameters
	{
	public:
		SSLParameters(QAndroidJniObject obj) { __thiz = obj; }
		SSLParameters()
		{
			__constructor();
		}
		SSLParameters(jarray arg0)
		{
			__constructor(
				arg0);
		}
		SSLParameters(jarray arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::net::ssl

