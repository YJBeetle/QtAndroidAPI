#include "../../../java/io/InputStream.hpp"
#include "../../../java/net/Socket.hpp"
#include "../SocketFactory.hpp"
#include "./SSLSocketFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLSocketFactory::SSLSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLSocketFactory::SSLSocketFactory()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLSocketFactory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SSLSocketFactory::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLSocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	QAndroidJniObject SSLSocketFactory::createSocket(java::net::Socket arg0, java::io::InputStream arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/io/InputStream;Z)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject SSLSocketFactory::createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SSLSocketFactory::createSocket(java::net::Socket arg0, const QString &arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	jarray SSLSocketFactory::getDefaultCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLSocketFactory::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace javax::net::ssl

