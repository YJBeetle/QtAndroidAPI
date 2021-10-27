#include "./Notification_Builder.hpp"
#include "./Notification_BigTextStyle.hpp"

namespace android::app
{
	// Fields
	
	Notification_BigTextStyle::Notification_BigTextStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_BigTextStyle::Notification_BigTextStyle()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigTextStyle",
			"()V"
		);
	}
	Notification_BigTextStyle::Notification_BigTextStyle(android::app::Notification_Builder &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigTextStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_BigTextStyle::bigText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"bigText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_BigTextStyle::bigText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"bigText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Notification_BigTextStyle::setBigContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_BigTextStyle::setBigContentTitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Notification_BigTextStyle::setSummaryText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_BigTextStyle::setSummaryText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::app

