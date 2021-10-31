#include "./MediaDrmException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaDrmException::MediaDrmException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	MediaDrmException::MediaDrmException(jstring arg0)
		: java::lang::Exception(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media

