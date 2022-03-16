#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./IOException.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	IOException::IOException()
		: java::lang::Exception(
			"java.io.IOException",
			"()V"
		) {}
	IOException::IOException(JString arg0)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IOException::IOException(JThrowable arg0)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	IOException::IOException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::io

