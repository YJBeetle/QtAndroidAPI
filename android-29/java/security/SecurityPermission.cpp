#include "./SecurityPermission.hpp"

namespace java::security
{
	// Fields
	
	SecurityPermission::SecurityPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecurityPermission::SecurityPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SecurityPermission::SecurityPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SecurityPermission::SecurityPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SecurityPermission::SecurityPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::security

