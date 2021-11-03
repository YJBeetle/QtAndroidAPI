#include "./Error.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Error::Error(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Error::Error()
		: JObject(
			"java.lang.Error",
			"()V"
		) {}
	Error::Error(jstring arg0)
		: JObject(
			"java.lang.Error",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Error::Error(jthrowable arg0)
		: JObject(
			"java.lang.Error",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	Error::Error(jstring arg0, jthrowable arg1)
		: JObject(
			"java.lang.Error",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

