#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLEngineResult_HandshakeStatus.def.hpp"

namespace javax::net::ssl
{
	// Fields
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::FINISHED()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"FINISHED",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_TASK()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_TASK",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_UNWRAP()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_UNWRAP_AGAIN()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP_AGAIN",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_WRAP()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_WRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NOT_HANDSHAKING()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NOT_HANDSHAKING",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	
	// Constructors
	
	// Methods
	inline javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;",
			arg0.object<jstring>()
		);
	}
	inline JArray SSLEngineResult_HandshakeStatus::values()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/lang/Enum.hpp"

