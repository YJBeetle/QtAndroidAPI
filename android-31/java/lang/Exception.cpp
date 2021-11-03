#include "./Exception.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Exception::Exception(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Exception::Exception()
		: JObject(
			"java.lang.Exception",
			"()V"
		) {}
	Exception::Exception(jstring arg0)
		: JObject(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Exception::Exception(jthrowable arg0)
		: JObject(
			"java.lang.Exception",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	Exception::Exception(jstring arg0, jthrowable arg1)
		: JObject(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

