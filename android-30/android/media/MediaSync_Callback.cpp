#include "./MediaSync.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaSync_Callback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSync_Callback::MediaSync_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSync_Callback::MediaSync_Callback()
		: JObject(
			"android.media.MediaSync$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaSync_Callback::onAudioBufferConsumed(android::media::MediaSync arg0, java::nio::ByteBuffer arg1, jint arg2) const
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

