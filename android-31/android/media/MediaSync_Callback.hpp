#pragma once

#include "./MediaSync.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaSync_Callback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaSync_Callback::MediaSync_Callback()
		: JObject(
			"android.media.MediaSync$Callback",
			"()V"
		) {}
	
	// Methods
	inline void MediaSync_Callback::onAudioBufferConsumed(android::media::MediaSync arg0, java::nio::ByteBuffer arg1, jint arg2) const
	{
		callMethod<void>(
			"onAudioBufferConsumed",
			"(Landroid/media/MediaSync;Ljava/nio/ByteBuffer;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::media

// Base class headers

