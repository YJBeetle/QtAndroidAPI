#pragma once

#ifndef JAVAX_NET_SSL_SSLENGINE
#define JAVAX_NET_SSL_SSLENGINE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLParameters;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLEngine : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject wrap(jarray arg0, __jni_impl::java::nio::ByteBuffer arg1);
		QAndroidJniObject wrap(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1);
		QAndroidJniObject wrap(jarray arg0, jint arg1, jint arg2, __jni_impl::java::nio::ByteBuffer arg3);
		QAndroidJniObject unwrap(__jni_impl::java::nio::ByteBuffer arg0, jarray arg1, jint arg2, jint arg3);
		QAndroidJniObject unwrap(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1);
		QAndroidJniObject unwrap(__jni_impl::java::nio::ByteBuffer arg0, jarray arg1);
		QAndroidJniObject getSession();
		QAndroidJniObject getEnabledCipherSuites();
		QAndroidJniObject getEnabledProtocols();
		jboolean getNeedClientAuth();
		void setNeedClientAuth(jboolean arg0);
		jboolean getWantClientAuth();
		void setWantClientAuth(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		QAndroidJniObject getPeerHost();
		jint getPeerPort();
		QAndroidJniObject getDelegatedTask();
		void closeInbound();
		jboolean isInboundDone();
		void closeOutbound();
		jboolean isOutboundDone();
		QAndroidJniObject getSupportedCipherSuites();
		QAndroidJniObject getSupportedProtocols();
		QAndroidJniObject getHandshakeSession();
		void beginHandshake();
		QAndroidJniObject getHandshakeStatus();
		void setUseClientMode(jboolean arg0);
		jboolean getUseClientMode();
		void setEnableSessionCreation(jboolean arg0);
		jboolean getEnableSessionCreation();
		QAndroidJniObject getSSLParameters();
		void setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0);
		QAndroidJniObject getApplicationProtocol();
		QAndroidJniObject getHandshakeApplicationProtocol();
		void setHandshakeApplicationProtocolSelector(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getHandshakeApplicationProtocolSelector();
	};
} // namespace __jni_impl::javax::net::ssl

#include "SSLEngineResult.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "SSLEngineResult_HandshakeStatus.hpp"
#include "SSLParameters.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLEngine::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngine",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SSLEngine::wrap(jarray arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject SSLEngine::wrap(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject SSLEngine::wrap(jarray arg0, jint arg1, jint arg2, __jni_impl::java::nio::ByteBuffer arg3)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	QAndroidJniObject SSLEngine::unwrap(__jni_impl::java::nio::ByteBuffer arg0, jarray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SSLEngine::unwrap(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject SSLEngine::unwrap(__jni_impl::java::nio::ByteBuffer arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SSLEngine::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;");
	}
	QAndroidJniObject SSLEngine::getEnabledCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLEngine::getEnabledProtocols()
	{
		return __thiz.callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;");
	}
	jboolean SSLEngine::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z");
	}
	void SSLEngine::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0);
	}
	jboolean SSLEngine::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z");
	}
	void SSLEngine::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0);
	}
	void SSLEngine::setEnabledCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void SSLEngine::setEnabledProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject SSLEngine::getPeerHost()
	{
		return __thiz.callObjectMethod(
			"getPeerHost",
			"()Ljava/lang/String;");
	}
	jint SSLEngine::getPeerPort()
	{
		return __thiz.callMethod<jint>(
			"getPeerPort",
			"()I");
	}
	QAndroidJniObject SSLEngine::getDelegatedTask()
	{
		return __thiz.callObjectMethod(
			"getDelegatedTask",
			"()Ljava/lang/Runnable;");
	}
	void SSLEngine::closeInbound()
	{
		__thiz.callMethod<void>(
			"closeInbound",
			"()V");
	}
	jboolean SSLEngine::isInboundDone()
	{
		return __thiz.callMethod<jboolean>(
			"isInboundDone",
			"()Z");
	}
	void SSLEngine::closeOutbound()
	{
		__thiz.callMethod<void>(
			"closeOutbound",
			"()V");
	}
	jboolean SSLEngine::isOutboundDone()
	{
		return __thiz.callMethod<jboolean>(
			"isOutboundDone",
			"()Z");
	}
	QAndroidJniObject SSLEngine::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLEngine::getSupportedProtocols()
	{
		return __thiz.callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject SSLEngine::getHandshakeSession()
	{
		return __thiz.callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;");
	}
	void SSLEngine::beginHandshake()
	{
		__thiz.callMethod<void>(
			"beginHandshake",
			"()V");
	}
	QAndroidJniObject SSLEngine::getHandshakeStatus()
	{
		return __thiz.callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;");
	}
	void SSLEngine::setUseClientMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0);
	}
	jboolean SSLEngine::getUseClientMode()
	{
		return __thiz.callMethod<jboolean>(
			"getUseClientMode",
			"()Z");
	}
	void SSLEngine::setEnableSessionCreation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0);
	}
	jboolean SSLEngine::getEnableSessionCreation()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z");
	}
	QAndroidJniObject SSLEngine::getSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;");
	}
	void SSLEngine::setSSLParameters(__jni_impl::javax::net::ssl::SSLParameters arg0)
	{
		__thiz.callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLEngine::getApplicationProtocol()
	{
		return __thiz.callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SSLEngine::getHandshakeApplicationProtocol()
	{
		return __thiz.callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;");
	}
	void SSLEngine::setHandshakeApplicationProtocolSelector(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLEngine::getHandshakeApplicationProtocolSelector()
	{
		return __thiz.callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;");
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLEngine : public __jni_impl::javax::net::ssl::SSLEngine
	{
	public:
		SSLEngine(QAndroidJniObject obj) { __thiz = obj; }
		SSLEngine()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLENGINE

