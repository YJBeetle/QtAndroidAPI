#include "../graphics/Bitmap.hpp"
#include "./MediaDescription.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./MediaDescription_Builder.hpp"

namespace android::media
{
	// Fields
	
	MediaDescription_Builder::MediaDescription_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDescription_Builder::MediaDescription_Builder()
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
	QAndroidJniObject MediaDescription_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setIconBitmap(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setIconBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/media/MediaDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDescription_Builder::setIconUri(android::net::Uri arg0)
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
	QAndroidJniObject MediaDescription_Builder::setMediaUri(android::net::Uri arg0)
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
} // namespace android::media

