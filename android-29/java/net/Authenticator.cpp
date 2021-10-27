#include "./Authenticator_RequestorType.hpp"
#include "./InetAddress.hpp"
#include "./PasswordAuthentication.hpp"
#include "./URL.hpp"
#include "./Authenticator.hpp"

namespace java::net
{
	// Fields
	
	Authenticator::Authenticator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Authenticator::Authenticator()
	{
		__thiz = QAndroidJniObject(
			"java.net.Authenticator",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Authenticator::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"getDefault",
			"()Ljava/net/Authenticator;"
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, const QString &arg2, const QString &arg3, const QString &arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(const QString &arg0, java::net::InetAddress arg1, jint arg2, const QString &arg3, const QString &arg4, const QString &arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(const QString &arg0, java::net::InetAddress arg1, jint arg2, const QString &arg3, const QString &arg4, const QString &arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(java::net::Authenticator arg0, jstring arg1, java::net::InetAddress arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(java::net::Authenticator arg0, const QString &arg1, java::net::InetAddress arg2, jint arg3, const QString &arg4, const QString &arg5, const QString &arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			arg7.__jniObject().object(),
			arg8.__jniObject().object()
		);
	}
	void Authenticator::setDefault(java::net::Authenticator arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.Authenticator",
			"setDefault",
			"(Ljava/net/Authenticator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthenticationInstance(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return __thiz.callObjectMethod(
			"requestPasswordAuthenticationInstance",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthenticationInstance(const QString &arg0, java::net::InetAddress arg1, jint arg2, const QString &arg3, const QString &arg4, const QString &arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return __thiz.callObjectMethod(
			"requestPasswordAuthenticationInstance",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
} // namespace java::net

