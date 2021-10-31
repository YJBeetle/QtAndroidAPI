#include "./MediaDrmException.hpp"

namespace android::media
{
	// Fields
	
	MediaDrmException::MediaDrmException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDrmException::MediaDrmException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media

