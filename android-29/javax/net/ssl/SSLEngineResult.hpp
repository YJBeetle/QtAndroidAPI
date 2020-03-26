#pragma once

#ifndef JAVAX_NET_SSL_SSLENGINERESULT
#define JAVAX_NET_SSL_SSLENGINERESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult_Status;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus;
}

namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::javax::net::ssl::SSLEngineResult_Status arg0, __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::javax::net::ssl::SSLEngineResult_Status arg0, __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4);
		
		// Methods
		jstring toString();
		jlong sequenceNumber();
		jint bytesConsumed();
		jint bytesProduced();
		QAndroidJniObject getStatus();
		QAndroidJniObject getHandshakeStatus();
	};
} // namespace __jni_impl::javax::net::ssl

#include "SSLEngineResult_Status.hpp"
#include "SSLEngineResult_HandshakeStatus.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLEngineResult::__constructor(__jni_impl::javax::net::ssl::SSLEngineResult_Status arg0, __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void SSLEngineResult::__constructor(__jni_impl::javax::net::ssl::SSLEngineResult_Status arg0, __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;IIJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jstring SSLEngineResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SSLEngineResult::sequenceNumber()
	{
		return __thiz.callMethod<jlong>(
			"sequenceNumber",
			"()J"
		);
	}
	jint SSLEngineResult::bytesConsumed()
	{
		return __thiz.callMethod<jint>(
			"bytesConsumed",
			"()I"
		);
	}
	jint SSLEngineResult::bytesProduced()
	{
		return __thiz.callMethod<jint>(
			"bytesProduced",
			"()I"
		);
	}
	QAndroidJniObject SSLEngineResult::getStatus()
	{
		return __thiz.callObjectMethod(
			"getStatus",
			"()Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult::getHandshakeStatus()
	{
		return __thiz.callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLEngineResult : public __jni_impl::javax::net::ssl::SSLEngineResult
	{
	public:
		SSLEngineResult(QAndroidJniObject obj) { __thiz = obj; }
		SSLEngineResult(__jni_impl::javax::net::ssl::SSLEngineResult_Status arg0, __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SSLEngineResult(__jni_impl::javax::net::ssl::SSLEngineResult_Status arg0, __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLENGINERESULT

