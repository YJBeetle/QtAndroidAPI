#include "./SSLPermission.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLPermission::SSLPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLPermission::SSLPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SSLPermission::SSLPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SSLPermission::SSLPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SSLPermission::SSLPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::net::ssl

