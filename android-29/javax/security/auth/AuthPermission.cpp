#include "./AuthPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	AuthPermission::AuthPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AuthPermission::AuthPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AuthPermission::AuthPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	AuthPermission::AuthPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	AuthPermission::AuthPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::security::auth

