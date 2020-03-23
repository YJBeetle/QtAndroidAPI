#pragma once

#ifndef JAVAX_NET_SSL_SSLPARAMETERS
#define JAVAX_NET_SSL_SSLPARAMETERS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0, jarray arg1);
		void __constructor(jarray arg0);
		void __constructor();
		
		// Methods
		void setCipherSuites(jarray arg0);
		void setProtocols(jarray arg0);
		jboolean getNeedClientAuth();
		void setNeedClientAuth(jboolean arg0);
		jboolean getWantClientAuth();
		void setWantClientAuth(jboolean arg0);
		QAndroidJniObject getCipherSuites();
		QAndroidJniObject getProtocols();
		QAndroidJniObject getAlgorithmConstraints();
		void setAlgorithmConstraints(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getEndpointIdentificationAlgorithm();
		void setEndpointIdentificationAlgorithm(jstring arg0);
		void setServerNames(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getServerNames();
		void setSNIMatchers(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getSNIMatchers();
		void setUseCipherSuitesOrder(jboolean arg0);
		jboolean getUseCipherSuitesOrder();
		void setEnableRetransmissions(jboolean arg0);
		jboolean getEnableRetransmissions();
		void setMaximumPacketSize(jint arg0);
		jint getMaximumPacketSize();
		QAndroidJniObject getApplicationProtocols();
		void setApplicationProtocols(jarray arg0);
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLParameters::__constructor(jarray arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void SSLParameters::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void SSLParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLParameters",
			"()V");
	}
	
	// Methods
	void SSLParameters::setCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setCipherSuites",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void SSLParameters::setProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setProtocols",
			"([Ljava/lang/String;)V",
			arg0);
	}
	jboolean SSLParameters::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z");
	}
	void SSLParameters::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0);
	}
	jboolean SSLParameters::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z");
	}
	void SSLParameters::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject SSLParameters::getCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getCipherSuites",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLParameters::getProtocols()
	{
		return __thiz.callObjectMethod(
			"getProtocols",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLParameters::getAlgorithmConstraints()
	{
		return __thiz.callObjectMethod(
			"getAlgorithmConstraints",
			"()Ljava/security/AlgorithmConstraints;");
	}
	void SSLParameters::setAlgorithmConstraints(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAlgorithmConstraints",
			"(Ljava/security/AlgorithmConstraints;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLParameters::getEndpointIdentificationAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getEndpointIdentificationAlgorithm",
			"()Ljava/lang/String;");
	}
	void SSLParameters::setEndpointIdentificationAlgorithm(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEndpointIdentificationAlgorithm",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SSLParameters::setServerNames(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setServerNames",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLParameters::getServerNames()
	{
		return __thiz.callObjectMethod(
			"getServerNames",
			"()Ljava/util/List;");
	}
	void SSLParameters::setSNIMatchers(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSNIMatchers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLParameters::getSNIMatchers()
	{
		return __thiz.callObjectMethod(
			"getSNIMatchers",
			"()Ljava/util/Collection;");
	}
	void SSLParameters::setUseCipherSuitesOrder(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseCipherSuitesOrder",
			"(Z)V",
			arg0);
	}
	jboolean SSLParameters::getUseCipherSuitesOrder()
	{
		return __thiz.callMethod<jboolean>(
			"getUseCipherSuitesOrder",
			"()Z");
	}
	void SSLParameters::setEnableRetransmissions(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableRetransmissions",
			"(Z)V",
			arg0);
	}
	jboolean SSLParameters::getEnableRetransmissions()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableRetransmissions",
			"()Z");
	}
	void SSLParameters::setMaximumPacketSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumPacketSize",
			"(I)V",
			arg0);
	}
	jint SSLParameters::getMaximumPacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaximumPacketSize",
			"()I");
	}
	QAndroidJniObject SSLParameters::getApplicationProtocols()
	{
		return __thiz.callObjectMethod(
			"getApplicationProtocols",
			"()[Ljava/lang/String;");
	}
	void SSLParameters::setApplicationProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setApplicationProtocols",
			"([Ljava/lang/String;)V",
			arg0);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLParameters : public __jni_impl::javax::net::ssl::SSLParameters
	{
	public:
		SSLParameters(QAndroidJniObject obj) { __thiz = obj; }
		SSLParameters(jarray arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SSLParameters(jarray arg0)
		{
			__constructor(
				arg0);
		}
		SSLParameters()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLPARAMETERS

