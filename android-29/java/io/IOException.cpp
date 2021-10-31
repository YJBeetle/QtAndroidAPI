#include "./IOException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	IOException::IOException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	IOException::IOException()
		: java::lang::Exception(
			"java.io.IOException",
			"()V"
		) {}
	IOException::IOException(jstring arg0)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IOException::IOException(jthrowable arg0)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	IOException::IOException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::io

