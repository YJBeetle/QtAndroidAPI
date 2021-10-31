#include "./LinkPermission.hpp"

namespace java::nio::file
{
	// Fields
	
	LinkPermission::LinkPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkPermission::LinkPermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LinkPermission::LinkPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::nio::file

