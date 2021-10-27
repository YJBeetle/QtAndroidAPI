#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::media
{
	class MediaDescription;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class MediaDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setIconBitmap(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject setIconUri(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setMediaId(jstring arg0);
		QAndroidJniObject setMediaId(const QString &arg0);
		QAndroidJniObject setMediaUri(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setSubtitle(jstring arg0);
		QAndroidJniObject setSubtitle(const QString &arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"
#include "MediaDescription.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaDescription_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDescription$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaDescription_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/MediaDescription;"
		);
	}
	QAndroidJniObject MediaDescription_Builder::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	QAndroidJniObject MediaDescription_Builder::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setIconBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setIconBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/media/MediaDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setIconUri(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setMediaId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setMediaId",
			"(Ljava/lang/String;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	QAndroidJniObject MediaDescription_Builder::setMediaId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setMediaId",
			"(Ljava/lang/String;)Landroid/media/MediaDescription$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setMediaUri(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setMediaUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setSubtitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	QAndroidJniObject MediaDescription_Builder::setSubtitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	QAndroidJniObject MediaDescription_Builder::setTitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDescription_Builder : public __jni_impl::android::media::MediaDescription_Builder
	{
	public:
		MediaDescription_Builder(QAndroidJniObject obj) { __thiz = obj; }
		MediaDescription_Builder()
		{
			__constructor();
		}
	};
} // namespace android::media

