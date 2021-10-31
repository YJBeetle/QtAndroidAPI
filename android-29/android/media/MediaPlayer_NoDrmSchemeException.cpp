#include "./MediaPlayer_NoDrmSchemeException.hpp"

namespace android::media
{
	// Fields
	
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media

