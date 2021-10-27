#include "./MediaPlayer_NoDrmSchemeException.hpp"

namespace android::media
{
	// Fields
	
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

