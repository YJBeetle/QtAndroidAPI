#include "./Activity.hpp"
#include "./PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "./ActivityOptions.hpp"

namespace android::app
{
	// Fields
	jstring ActivityOptions::EXTRA_USAGE_TIME_REPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityOptions",
			"EXTRA_USAGE_TIME_REPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityOptions::EXTRA_USAGE_TIME_REPORT_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityOptions",
			"EXTRA_USAGE_TIME_REPORT_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ActivityOptions::ActivityOptions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ActivityOptions::makeBasic()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeBasic",
			"()Landroid/app/ActivityOptions;"
		);
	}
	QAndroidJniObject ActivityOptions::makeClipRevealAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeClipRevealAnimation",
			"(Landroid/view/View;IIII)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject ActivityOptions::makeCustomAnimation(android::content::Context arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeCustomAnimation",
			"(Landroid/content/Context;II)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ActivityOptions::makeScaleUpAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeScaleUpAnimation",
			"(Landroid/view/View;IIII)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject ActivityOptions::makeSceneTransitionAnimation(android::app::Activity arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;[Landroid/util/Pair;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ActivityOptions::makeSceneTransitionAnimation(android::app::Activity arg0, android::view::View arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;Landroid/view/View;Ljava/lang/String;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ActivityOptions::makeTaskLaunchBehind()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeTaskLaunchBehind",
			"()Landroid/app/ActivityOptions;"
		);
	}
	QAndroidJniObject ActivityOptions::makeThumbnailScaleUpAnimation(android::view::View arg0, android::graphics::Bitmap arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeThumbnailScaleUpAnimation",
			"(Landroid/view/View;Landroid/graphics/Bitmap;II)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject ActivityOptions::getLaunchBounds()
	{
		return __thiz.callObjectMethod(
			"getLaunchBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jint ActivityOptions::getLaunchDisplayId()
	{
		return __thiz.callMethod<jint>(
			"getLaunchDisplayId",
			"()I"
		);
	}
	jboolean ActivityOptions::getLockTaskMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLockTaskMode",
			"()Z"
		);
	}
	void ActivityOptions::requestUsageTimeReport(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"requestUsageTimeReport",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityOptions::setAppVerificationBundle(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setAppVerificationBundle",
			"(Landroid/os/Bundle;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityOptions::setLaunchBounds(android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"setLaunchBounds",
			"(Landroid/graphics/Rect;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityOptions::setLaunchDisplayId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setLaunchDisplayId",
			"(I)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	QAndroidJniObject ActivityOptions::setLockTaskEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLockTaskEnabled",
			"(Z)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	QAndroidJniObject ActivityOptions::toBundle()
	{
		return __thiz.callObjectMethod(
			"toBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jstring ActivityOptions::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ActivityOptions::update(android::app::ActivityOptions arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Landroid/app/ActivityOptions;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

