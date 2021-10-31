#include "./SecurityPermission.hpp"

namespace java::security
{
	// Fields
	
	SecurityPermission::SecurityPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecurityPermission::SecurityPermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SecurityPermission::SecurityPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security

