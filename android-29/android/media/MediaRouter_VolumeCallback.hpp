#pragma once

#ifndef ANDROID_MEDIA_MEDIAROUTER_VOLUMECALLBACK
#define ANDROID_MEDIA_MEDIAROUTER_VOLUMECALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaRouter_RouteInfo;
}

namespace __jni_impl::android::media
{
	class MediaRouter_VolumeCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onVolumeSetRequest(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1);
		void onVolumeUpdateRequest(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "MediaRouter_RouteInfo.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaRouter_VolumeCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRouter$VolumeCallback",
			"()V");
	}
	
	// Methods
	void MediaRouter_VolumeCallback::onVolumeSetRequest(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onVolumeSetRequest",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaRouter_VolumeCallback::onVolumeUpdateRequest(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onVolumeUpdateRequest",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRouter_VolumeCallback : public __jni_impl::android::media::MediaRouter_VolumeCallback
	{
	public:
		MediaRouter_VolumeCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouter_VolumeCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAROUTER_VOLUMECALLBACK

