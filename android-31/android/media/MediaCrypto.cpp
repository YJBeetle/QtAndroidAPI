#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./MediaCrypto.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCrypto::MediaCrypto(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCrypto::MediaCrypto(java::util::UUID arg0, JByteArray arg1)
		: JObject(
			"android.media.MediaCrypto",
			"(Ljava/util/UUID;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
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
	jboolean MediaCrypto::requiresSecureDecoderComponent(JString arg0)
	{
		return callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void MediaCrypto::setMediaDrmSession(JByteArray arg0)
	{
		callMethod<void>(
			"setMediaDrmSession",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::media

