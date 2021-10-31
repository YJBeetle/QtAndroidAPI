#include "./SNIMatcher.hpp"
#include "./SNIHostName.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SNIHostName::SNIHostName(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SNIHostName::SNIHostName(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIHostName",
			"([B)V",
			arg0
		);
	}
	SNIHostName::SNIHostName(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIHostName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
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
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SNIHostName::getAsciiName()
	{
		return __thiz.callObjectMethod(
			"getAsciiName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SNIHostName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SNIHostName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::net::ssl

