#include "./MalformedJsonException.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	MalformedJsonException::MalformedJsonException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	MalformedJsonException::MalformedJsonException(jstring arg0)
		: java::io::IOException(
			"android.util.MalformedJsonException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

