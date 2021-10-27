#include "./MediaDrmException.hpp"

namespace android::media
{
	// Fields
	
	MediaDrmException::MediaDrmException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDrmException::MediaDrmException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MediaDrmException::MediaDrmException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

