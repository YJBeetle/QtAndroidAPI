#include "./SSLEngineResult_Status.hpp"

namespace javax::net::ssl
{
	// Fields
	javax::net::ssl::SSLEngineResult_Status SSLEngineResult_Status::BUFFER_OVERFLOW()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"BUFFER_OVERFLOW",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	javax::net::ssl::SSLEngineResult_Status SSLEngineResult_Status::BUFFER_UNDERFLOW()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"BUFFER_UNDERFLOW",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	javax::net::ssl::SSLEngineResult_Status SSLEngineResult_Status::CLOSED()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"CLOSED",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	javax::net::ssl::SSLEngineResult_Status SSLEngineResult_Status::OK()
	{
		return getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"OK",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	
	// QAndroidJniObject forward
	SSLEngineResult_Status::SSLEngineResult_Status(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	javax::net::ssl::SSLEngineResult_Status SSLEngineResult_Status::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;",
			arg0
		);
	}
	jarray SSLEngineResult_Status::values()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$Status;"
		).object<jarray>();
	}
} // namespace javax::net::ssl

