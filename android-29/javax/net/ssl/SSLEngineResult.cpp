#include "./SSLEngineResult_HandshakeStatus.hpp"
#include "./SSLEngineResult_Status.hpp"
#include "./SSLEngineResult.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLEngineResult::SSLEngineResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SSLEngineResult::SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	SSLEngineResult::SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4)
		: __JniBaseClass(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;IIJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint SSLEngineResult::bytesConsumed()
	{
		return callMethod<jint>(
			"bytesConsumed",
			"()I"
		);
	}
	jint SSLEngineResult::bytesProduced()
	{
		return callMethod<jint>(
			"bytesProduced",
			"()I"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult::getHandshakeStatus()
	{
		return callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	javax::net::ssl::SSLEngineResult_Status SSLEngineResult::getStatus()
	{
		return callObjectMethod(
			"getStatus",
			"()Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	jlong SSLEngineResult::sequenceNumber()
	{
		return callMethod<jlong>(
			"sequenceNumber",
			"()J"
		);
	}
	jstring SSLEngineResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::net::ssl

