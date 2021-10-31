#include "./Notification_Builder.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Notification_BigPictureStyle.hpp"

namespace android::app
{
	// Fields
	
	Notification_BigPictureStyle::Notification_BigPictureStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_BigPictureStyle::Notification_BigPictureStyle()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigPictureStyle",
			"()V"
		);
	}
	Notification_BigPictureStyle::Notification_BigPictureStyle(android::app::Notification_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigPictureStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_BigPictureStyle::bigLargeIcon(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BigPictureStyle::bigLargeIcon(android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BigPictureStyle::bigPicture(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BigPictureStyle::setBigContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_BigPictureStyle::setSummaryText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0
		);
	}
} // namespace android::app

