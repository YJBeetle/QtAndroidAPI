#include "./SSLEngineResult_HandshakeStatus.hpp"

namespace javax::net::ssl
{
	// Fields
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::FINISHED()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"FINISHED",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_TASK()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_TASK",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_UNWRAP()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_UNWRAP_AGAIN()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP_AGAIN",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NEED_WRAP()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_WRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::NOT_HANDSHAKING()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NOT_HANDSHAKING",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	
	// QAndroidJniObject forward
	SSLEngineResult_HandshakeStatus::SSLEngineResult_HandshakeStatus(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngineResult_HandshakeStatus::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;",
			arg0
		);
	}
	jarray SSLEngineResult_HandshakeStatus::values()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		).object<jarray>();
	}
} // namespace javax::net::ssl

