#include "./MediaCryptoException.hpp"

namespace android::media
{
	// Fields
	
	MediaCryptoException::MediaCryptoException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCryptoException::MediaCryptoException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MediaCryptoException::MediaCryptoException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

