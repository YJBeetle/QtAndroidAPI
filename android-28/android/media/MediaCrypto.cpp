#include "../../java/util/UUID.hpp"
#include "./MediaCrypto.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCrypto::MediaCrypto(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCrypto::MediaCrypto(java::util::UUID arg0, jbyteArray arg1)
		: JObject(
			"android.media.MediaCrypto",
			"(Ljava/util/UUID;[B)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean MediaCrypto::isCryptoSchemeSupported(java::util::UUID arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCrypto",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.object()
		);
	}
	void MediaCrypto::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean MediaCrypto::requiresSecureDecoderComponent(jstring arg0)
	{
		return callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void MediaCrypto::setMediaDrmSession(jbyteArray arg0)
	{
		callMethod<void>(
			"setMediaDrmSession",
			"([B)V",
			arg0
		);
	}
} // namespace android::media

