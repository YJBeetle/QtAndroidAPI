#include "./FileUriExposedException.hpp"

namespace android::os
{
	// Fields
	
	FileUriExposedException::FileUriExposedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileUriExposedException::FileUriExposedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileUriExposedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::os

