#pragma once

#ifndef ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER
#define ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::media::projection
{
	class MediaProjection;
}

namespace __jni_impl::android::media::projection
{
	class MediaProjectionManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createScreenCaptureIntent();
		QAndroidJniObject getMediaProjection(jint arg0, __jni_impl::android::content::Intent arg1);
	};
} // namespace __jni_impl::android::media::projection

#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "MediaProjection.hpp"

namespace __jni_impl::android::media::projection
{
	// Fields
	
	// Constructors
	void MediaProjectionManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.projection.MediaProjectionManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaProjectionManager::createScreenCaptureIntent()
	{
		return __thiz.callObjectMethod(
			"createScreenCaptureIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject MediaProjectionManager::getMediaProjection(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"getMediaProjection",
			"(ILandroid/content/Intent;)Landroid/media/projection/MediaProjection;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::projection

namespace android::media::projection
{
	class MediaProjectionManager : public __jni_impl::android::media::projection::MediaProjectionManager
	{
	public:
		MediaProjectionManager(QAndroidJniObject obj) { __thiz = obj; }
		MediaProjectionManager()
		{
			__constructor();
		}
	};
} // namespace android::media::projection

#endif // ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER

