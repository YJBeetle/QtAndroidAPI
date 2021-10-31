#include "./MediaDrmResetException.hpp"

namespace android::media
{
	// Fields
	
	MediaDrmResetException::MediaDrmResetException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDrmResetException::MediaDrmResetException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media

