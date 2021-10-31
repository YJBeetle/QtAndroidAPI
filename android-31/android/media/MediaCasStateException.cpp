#include "./MediaCasStateException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCasStateException::MediaCasStateException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaCasStateException::getDiagnosticInfo()
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

