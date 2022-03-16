#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./MediaCrypto.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaCrypto::MediaCrypto(java::util::UUID arg0, JByteArray arg1)
		: JObject(
			"android.media.MediaCrypto",
			"(Ljava/util/UUID;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean MediaCrypto::isCryptoSchemeSupported(java::util::UUID arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCrypto",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.object()
		);
	}
	inline void MediaCrypto::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jboolean MediaCrypto::requiresSecureDecoderComponent(JString arg0) const
	{
		return callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void MediaCrypto::setMediaDrmSession(JByteArray arg0) const
	{
		callMethod<void>(
			"setMediaDrmSession",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::media

// Base class headers

