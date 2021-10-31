#include "./Base64DataException.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	Base64DataException::Base64DataException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	Base64DataException::Base64DataException(jstring arg0)
		: java::io::IOException(
			"android.util.Base64DataException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

