#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap_Config;
}

namespace __jni_impl::android::media
{
	class MediaMetadataRetriever_BitmapParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getActualConfig();
		QAndroidJniObject getPreferredConfig();
		void setPreferredConfig(__jni_impl::android::graphics::Bitmap_Config arg0);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap_Config.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaMetadataRetriever_BitmapParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadataRetriever$BitmapParams",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaMetadataRetriever_BitmapParams::getActualConfig()
	{
		return __thiz.callObjectMethod(
			"getActualConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject MediaMetadataRetriever_BitmapParams::getPreferredConfig()
	{
		return __thiz.callObjectMethod(
			"getPreferredConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	void MediaMetadataRetriever_BitmapParams::setPreferredConfig(__jni_impl::android::graphics::Bitmap_Config arg0)
	{
		__thiz.callMethod<void>(
			"setPreferredConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaMetadataRetriever_BitmapParams : public __jni_impl::android::media::MediaMetadataRetriever_BitmapParams
	{
	public:
		MediaMetadataRetriever_BitmapParams(QAndroidJniObject obj) { __thiz = obj; }
		MediaMetadataRetriever_BitmapParams()
		{
			__constructor();
		}
	};
} // namespace android::media

