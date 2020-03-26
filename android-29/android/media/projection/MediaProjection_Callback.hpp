#pragma once

#ifndef ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_CALLBACK
#define ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_CALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::projection
{
	class MediaProjection_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onStop();
	};
} // namespace __jni_impl::android::media::projection


namespace __jni_impl::android::media::projection
{
	// Fields
	
	// Constructors
	void MediaProjection_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.projection.MediaProjection$Callback",
			"()V");
	}
	
	// Methods
	void MediaProjection_Callback::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace __jni_impl::android::media::projection

namespace android::media::projection
{
	class MediaProjection_Callback : public __jni_impl::android::media::projection::MediaProjection_Callback
	{
	public:
		MediaProjection_Callback(QAndroidJniObject obj) { __thiz = obj; }
		MediaProjection_Callback()
		{
			__constructor();
		}
	};
} // namespace android::media::projection

#endif // ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_CALLBACK

