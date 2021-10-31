#include "../../java/util/UUID.hpp"
#include "./MediaCrypto.hpp"

namespace android::media
{
	// Fields
	
	MediaCrypto::MediaCrypto(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCrypto::MediaCrypto(java::util::UUID arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCrypto",
			"(Ljava/util/UUID;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean MediaCrypto::isCryptoSchemeSupported(java::util::UUID arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaCrypto",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.__jniObject().object()
		);
	}
	void MediaCrypto::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean MediaCrypto::requiresSecureDecoderComponent(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void MediaCrypto::setMediaDrmSession(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setMediaDrmSession",
			"([B)V",
			arg0
		);
	}
} // namespace android::media

