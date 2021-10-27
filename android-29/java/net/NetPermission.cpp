#include "./NetPermission.hpp"

namespace java::net
{
	// Fields
	
	NetPermission::NetPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetPermission::NetPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NetPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NetPermission::NetPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NetPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	NetPermission::NetPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.NetPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	NetPermission::NetPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.NetPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

