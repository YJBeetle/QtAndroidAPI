#include "./MediaDrmResetException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaDrmResetException::MediaDrmResetException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	MediaDrmResetException::MediaDrmResetException(jstring arg0)
		: java::lang::IllegalStateException(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media

