#include "./RuntimePermission.hpp"

namespace java::lang
{
	// Fields
	
	RuntimePermission::RuntimePermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RuntimePermission::RuntimePermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RuntimePermission::RuntimePermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

