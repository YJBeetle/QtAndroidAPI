#include "./SSLEngineResult_HandshakeStatus.hpp"

namespace javax::net::ssl
{
	// Fields
	QAndroidJniObject SSLEngineResult_HandshakeStatus::FINISHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"FINISHED",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_TASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_TASK",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_UNWRAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_UNWRAP_AGAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP_AGAIN",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_WRAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_WRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NOT_HANDSHAKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NOT_HANDSHAKING",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	
	// QAndroidJniObject forward
	SSLEngineResult_HandshakeStatus::SSLEngineResult_HandshakeStatus(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SSLEngineResult_HandshakeStatus::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;",
			arg0
		);
	}
	jarray SSLEngineResult_HandshakeStatus::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		).object<jarray>();
	}
} // namespace javax::net::ssl

