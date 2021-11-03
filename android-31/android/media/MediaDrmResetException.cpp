#include "../../JString.hpp"
#include "./MediaDrmResetException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaDrmResetException::MediaDrmResetException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	MediaDrmResetException::MediaDrmResetException(JString arg0)
		: java::lang::IllegalStateException(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

