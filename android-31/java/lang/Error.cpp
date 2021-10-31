#include "./Error.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Error::Error(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Error::Error()
		: __JniBaseClass(
			"java.lang.Error",
			"()V"
		) {}
	Error::Error(jstring arg0)
		: __JniBaseClass(
			"java.lang.Error",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Error::Error(jthrowable arg0)
		: __JniBaseClass(
			"java.lang.Error",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	Error::Error(jstring arg0, jthrowable arg1)
		: __JniBaseClass(
			"java.lang.Error",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

