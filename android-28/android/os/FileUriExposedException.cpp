#include "../../JString.hpp"
#include "./FileUriExposedException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	FileUriExposedException::FileUriExposedException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	FileUriExposedException::FileUriExposedException(JString arg0)
		: java::lang::RuntimeException(
			"android.os.FileUriExposedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

