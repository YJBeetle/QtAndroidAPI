#include "./SerializablePermission.hpp"

namespace java::io
{
	// Fields
	
	SerializablePermission::SerializablePermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SerializablePermission::SerializablePermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SerializablePermission::SerializablePermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::io

