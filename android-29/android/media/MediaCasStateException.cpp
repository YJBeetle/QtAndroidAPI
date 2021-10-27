#include "./MediaCasStateException.hpp"

namespace android::media
{
	// Fields
	
	MediaCasStateException::MediaCasStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MediaCasStateException::getDiagnosticInfo()
	{
		return __thiz.callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

