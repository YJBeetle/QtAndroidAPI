#include "./MediaCryptoException.hpp"

namespace android::media
{
	// Fields
	
	MediaCryptoException::MediaCryptoException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCryptoException::MediaCryptoException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media

