#include "./MediaCryptoException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCryptoException::MediaCryptoException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	MediaCryptoException::MediaCryptoException(jstring arg0)
		: java::lang::Exception(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media

