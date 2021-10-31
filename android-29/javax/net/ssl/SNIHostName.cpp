#include "./SNIMatcher.hpp"
#include "./SNIHostName.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SNIHostName::SNIHostName(QAndroidJniObject obj) : javax::net::ssl::SNIServerName(obj) {}
	
	// Constructors
	SNIHostName::SNIHostName(jbyteArray arg0)
		: javax::net::ssl::SNIServerName(
			"javax.net.ssl.SNIHostName",
			"([B)V",
			arg0
		) {}
	SNIHostName::SNIHostName(jstring arg0)
		: javax::net::ssl::SNIServerName(
			"javax.net.ssl.SNIHostName",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject SNIHostName::createSNIMatcher(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SNIHostName",
			"createSNIMatcher",
			"(Ljava/lang/String;)Ljavax/net/ssl/SNIMatcher;",
			arg0
		);
	}
	jboolean SNIHostName::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SNIHostName::getAsciiName()
	{
		return callObjectMethod(
			"getAsciiName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SNIHostName::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SNIHostName::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::net::ssl

