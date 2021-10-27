#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class Authenticator_RequestorType;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class PasswordAuthentication;
}
namespace java::net
{
	class URL;
}

namespace java::net
{
	class Authenticator : public __JniBaseClass
	{
	public:
		// Fields
		
		Authenticator(QAndroidJniObject obj);
		// Constructors
		Authenticator();
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		static QAndroidJniObject requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		static QAndroidJniObject requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5);
		static QAndroidJniObject requestPasswordAuthentication(const QString &arg0, java::net::InetAddress arg1, jint arg2, const QString &arg3, const QString &arg4, const QString &arg5);
		static QAndroidJniObject requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
		static QAndroidJniObject requestPasswordAuthentication(const QString &arg0, java::net::InetAddress arg1, jint arg2, const QString &arg3, const QString &arg4, const QString &arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
		static QAndroidJniObject requestPasswordAuthentication(java::net::Authenticator arg0, jstring arg1, java::net::InetAddress arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8);
		static QAndroidJniObject requestPasswordAuthentication(java::net::Authenticator arg0, const QString &arg1, java::net::InetAddress arg2, jint arg3, const QString &arg4, const QString &arg5, const QString &arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8);
		static void setDefault(java::net::Authenticator arg0);
		QAndroidJniObject requestPasswordAuthenticationInstance(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
		QAndroidJniObject requestPasswordAuthenticationInstance(const QString &arg0, java::net::InetAddress arg1, jint arg2, const QString &arg3, const QString &arg4, const QString &arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
	};
} // namespace java::net

