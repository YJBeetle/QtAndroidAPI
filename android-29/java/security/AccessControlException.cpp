#include "./Permission.hpp"
#include "./AccessControlException.hpp"

namespace java::security
{
	// Fields
	
	AccessControlException::AccessControlException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessControlException::AccessControlException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AccessControlException::AccessControlException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	AccessControlException::AccessControlException(jstring &arg0, java::security::Permission &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	AccessControlException::AccessControlException(const QString &arg0, java::security::Permission &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AccessControlException::getPermission()
	{
		return __thiz.callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
} // namespace java::security

