#include "./Exception.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Exception::Exception(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Exception::Exception()
		: __JniBaseClass(
			"java.lang.Exception",
			"()V"
		) {}
	Exception::Exception(jstring arg0)
		: __JniBaseClass(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Exception::Exception(jthrowable arg0)
		: __JniBaseClass(
			"java.lang.Exception",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	Exception::Exception(jstring arg0, jthrowable arg1)
		: __JniBaseClass(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

