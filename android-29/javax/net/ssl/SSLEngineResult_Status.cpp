#include "./SSLEngineResult_Status.hpp"

namespace javax::net::ssl
{
	// Fields
	QAndroidJniObject SSLEngineResult_Status::BUFFER_OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"BUFFER_OVERFLOW",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult_Status::BUFFER_UNDERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"BUFFER_UNDERFLOW",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult_Status::CLOSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"CLOSED",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult_Status::OK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"OK",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	
	// QAndroidJniObject forward
	SSLEngineResult_Status::SSLEngineResult_Status(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SSLEngineResult_Status::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;",
			arg0
		);
	}
	jarray SSLEngineResult_Status::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$Status;"
		).object<jarray>();
	}
} // namespace javax::net::ssl

