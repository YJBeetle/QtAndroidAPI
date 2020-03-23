#pragma once

#ifndef ANDROID_MEDIA_MEDIASYNC_CALLBACK
#define ANDROID_MEDIA_MEDIASYNC_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaSync;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::media
{
	class MediaSync_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAudioBufferConsumed(__jni_impl::android::media::MediaSync arg0, __jni_impl::java::nio::ByteBuffer arg1, jint arg2);
	};
} // namespace __jni_impl::android::media

#include "MediaSync.hpp"
#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaSync_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSync$Callback",
			"()V");
	}
	
	// Methods
	void MediaSync_Callback::onAudioBufferConsumed(__jni_impl::android::media::MediaSync arg0, __jni_impl::java::nio::ByteBuffer arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAudioBufferConsumed",
			"(Landroid/media/MediaSync;Ljava/nio/ByteBuffer;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSync_Callback : public __jni_impl::android::media::MediaSync_Callback
	{
	public:
		MediaSync_Callback(QAndroidJniObject obj) { __thiz = obj; }
		MediaSync_Callback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASYNC_CALLBACK

