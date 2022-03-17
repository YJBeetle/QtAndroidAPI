#pragma once

#include "../../../JString.hpp"
#include "./SSLEngineResult_HandshakeStatus.def.hpp"
#include "./SSLEngineResult_Status.def.hpp"
#include "./SSLEngineResult.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLEngineResult::SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3)
		: JObject(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline SSLEngineResult::SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4)
		: JObject(
			"javax.net.ssl.SSLEngineResult",
			"(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;IIJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline jint SSLEngineResult::bytesConsumed() const
	{
		return callMethod<jint>(
			"bytesConsumed",
			"()I"
		);
	}
	inline jint SSLEngineResult::bytesProduced() const
	{
		return callMethod<jint>(
			"bytesProduced",
			"()I"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult::getHandshakeStatus() const
	{
		return callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_Status SSLEngineResult::getStatus() const
	{
		return callObjectMethod(
			"getStatus",
			"()Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	inline jlong SSLEngineResult::sequenceNumber() const
	{
		return callMethod<jlong>(
			"sequenceNumber",
			"()J"
		);
	}
	inline JString SSLEngineResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

// Base class headers

