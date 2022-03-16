#include "../../JString.hpp"
#include "./Base64DataException.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	Base64DataException::Base64DataException(JString arg0)
		: java::io::IOException(
			"android.util.Base64DataException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::util

