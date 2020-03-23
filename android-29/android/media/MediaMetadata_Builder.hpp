#pragma once

#ifndef ANDROID_MEDIA_MEDIAMETADATA_BUILDER
#define ANDROID_MEDIA_MEDIAMETADATA_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaMetadata;
}
namespace __jni_impl::android::media
{
	class Rating;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::media
{
	class MediaMetadata_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::MediaMetadata arg0);
		
		// Methods
		QAndroidJniObject putLong(jstring arg0, jlong arg1);
		QAndroidJniObject build();
		QAndroidJniObject putString(jstring arg0, jstring arg1);
		QAndroidJniObject putText(jstring arg0, jstring arg1);
		QAndroidJniObject putRating(jstring arg0, __jni_impl::android::media::Rating arg1);
		QAndroidJniObject putBitmap(jstring arg0, __jni_impl::android::graphics::Bitmap arg1);
	};
} // namespace __jni_impl::android::media

#include "MediaMetadata.hpp"
#include "Rating.hpp"
#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaMetadata_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadata$Builder",
			"()V");
	}
	void MediaMetadata_Builder::__constructor(__jni_impl::android::media::MediaMetadata arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadata$Builder",
			"(Landroid/media/MediaMetadata;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject MediaMetadata_Builder::putLong(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(Ljava/lang/String;J)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadata_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/MediaMetadata;");
	}
	QAndroidJniObject MediaMetadata_Builder::putString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadata_Builder::putText(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putText",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadata_Builder::putRating(jstring arg0, __jni_impl::android::media::Rating arg1)
	{
		return __thiz.callObjectMethod(
			"putRating",
			"(Ljava/lang/String;Landroid/media/Rating;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject MediaMetadata_Builder::putBitmap(jstring arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"putBitmap",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaMetadata_Builder : public __jni_impl::android::media::MediaMetadata_Builder
	{
	public:
		MediaMetadata_Builder(QAndroidJniObject obj) { __thiz = obj; }
		MediaMetadata_Builder()
		{
			__constructor();
		}
		MediaMetadata_Builder(__jni_impl::android::media::MediaMetadata arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAMETADATA_BUILDER

