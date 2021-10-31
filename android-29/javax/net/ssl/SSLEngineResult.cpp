#include "./SSLEngineResult_HandshakeStatus.hpp"
#include "./SSLEngineResult_Status.hpp"
#include "./SSLEngineResult.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLEngineResult::SSLEngineResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLEngineResult::SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	SSLEngineResult::SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;IIJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
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
	QAndroidJniObject SSLEngineResult::getHandshakeStatus()
	{
		return __thiz.callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult::getStatus()
	{
		return __thiz.callObjectMethod(
			"getStatus",
			"()Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	jlong SSLEngineResult::sequenceNumber()
	{
		return __thiz.callMethod<jlong>(
			"sequenceNumber",
			"()J"
		);
	}
	jstring SSLEngineResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::net::ssl

