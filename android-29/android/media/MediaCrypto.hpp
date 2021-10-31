#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class UUID;
}

namespace android::media
{
	class MediaCrypto : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCrypto(QAndroidJniObject obj);
		// Constructors
		MediaCrypto(java::util::UUID arg0, jbyteArray arg1);
		MediaCrypto() = default;
		
		// Methods
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0);
		void release();
		jboolean requiresSecureDecoderComponent(jstring arg0);
		void setMediaDrmSession(jbyteArray arg0);
	};
} // namespace android::media

