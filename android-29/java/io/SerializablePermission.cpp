#include "./SerializablePermission.hpp"

namespace java::io
{
	// Fields
	
	SerializablePermission::SerializablePermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SerializablePermission::SerializablePermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SerializablePermission::SerializablePermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SerializablePermission::SerializablePermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SerializablePermission::SerializablePermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::io

