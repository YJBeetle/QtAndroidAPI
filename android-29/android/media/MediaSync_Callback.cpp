#include "./MediaSync.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaSync_Callback.hpp"

namespace android::media
{
	// Fields
	
	MediaSync_Callback::MediaSync_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSync_Callback::MediaSync_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSync$Callback",
			"()V"
		);
	}
	
	// Methods
	void MediaSync_Callback::onAudioBufferConsumed(android::media::MediaSync arg0, java::nio::ByteBuffer arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAudioBufferConsumed",
			"(Landroid/media/MediaSync;Ljava/nio/ByteBuffer;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::media

