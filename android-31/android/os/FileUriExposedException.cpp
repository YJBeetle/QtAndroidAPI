#include "./FileUriExposedException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	FileUriExposedException::FileUriExposedException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	FileUriExposedException::FileUriExposedException(jstring arg0)
		: java::lang::RuntimeException(
			"android.os.FileUriExposedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os

