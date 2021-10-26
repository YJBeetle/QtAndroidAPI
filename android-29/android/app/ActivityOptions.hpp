#pragma once

#ifndef ANDROID_APP_ACTIVITYOPTIONS
#define ANDROID_APP_ACTIVITYOPTIONS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::app
{
	class ActivityOptions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_USAGE_TIME_REPORT();
		static jstring EXTRA_USAGE_TIME_REPORT_PACKAGES();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void update(__jni_impl::android::app::ActivityOptions arg0);
		static QAndroidJniObject makeCustomAnimation(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		static QAndroidJniObject makeScaleUpAnimation(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject makeClipRevealAnimation(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject makeThumbnailScaleUpAnimation(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2, jint arg3);
		static QAndroidJniObject makeSceneTransitionAnimation(__jni_impl::android::app::Activity arg0, jarray arg1);
		static QAndroidJniObject makeSceneTransitionAnimation(__jni_impl::android::app::Activity arg0, __jni_impl::android::view::View arg1, jstring arg2);
		static QAndroidJniObject makeSceneTransitionAnimation(__jni_impl::android::app::Activity arg0, __jni_impl::android::view::View arg1, const QString &arg2);
		static QAndroidJniObject makeTaskLaunchBehind();
		static QAndroidJniObject makeBasic();
		QAndroidJniObject setLaunchBounds(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getLaunchBounds();
		jboolean getLockTaskMode();
		QAndroidJniObject setLockTaskEnabled(jboolean arg0);
		jint getLaunchDisplayId();
		QAndroidJniObject setLaunchDisplayId(jint arg0);
		QAndroidJniObject toBundle();
		void requestUsageTimeReport(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setAppVerificationBundle(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../graphics/Bitmap.hpp"
#include "Activity.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Bundle.hpp"
#include "PendingIntent.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void ActivityOptions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityOptions",
			"(V)V");
	}
	
	// Methods
	jstring ActivityOptions::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ActivityOptions::update(__jni_impl::android::app::ActivityOptions arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Landroid/app/ActivityOptions;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityOptions::makeCustomAnimation(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
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
	QAndroidJniObject ActivityOptions::makeScaleUpAnimation(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	QAndroidJniObject ActivityOptions::makeClipRevealAnimation(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	QAndroidJniObject ActivityOptions::makeThumbnailScaleUpAnimation(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2, jint arg3)
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
	QAndroidJniObject ActivityOptions::makeSceneTransitionAnimation(__jni_impl::android::app::Activity arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;[Landroid/util/Pair;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ActivityOptions::makeSceneTransitionAnimation(__jni_impl::android::app::Activity arg0, __jni_impl::android::view::View arg1, jstring arg2)
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
	QAndroidJniObject ActivityOptions::makeSceneTransitionAnimation(__jni_impl::android::app::Activity arg0, __jni_impl::android::view::View arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;Landroid/view/View;Ljava/lang/String;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	QAndroidJniObject ActivityOptions::makeBasic()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeBasic",
			"()Landroid/app/ActivityOptions;"
		);
	}
	QAndroidJniObject ActivityOptions::setLaunchBounds(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"setLaunchBounds",
			"(Landroid/graphics/Rect;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityOptions::getLaunchBounds()
	{
		return __thiz.callObjectMethod(
			"getLaunchBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean ActivityOptions::getLockTaskMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLockTaskMode",
			"()Z"
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
	jint ActivityOptions::getLaunchDisplayId()
	{
		return __thiz.callMethod<jint>(
			"getLaunchDisplayId",
			"()I"
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
	QAndroidJniObject ActivityOptions::toBundle()
	{
		return __thiz.callObjectMethod(
			"toBundle",
			"()Landroid/os/Bundle;"
		);
	}
	void ActivityOptions::requestUsageTimeReport(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"requestUsageTimeReport",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityOptions::setAppVerificationBundle(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setAppVerificationBundle",
			"(Landroid/os/Bundle;)Landroid/app/ActivityOptions;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityOptions : public __jni_impl::android::app::ActivityOptions
	{
	public:
		ActivityOptions(QAndroidJniObject obj) { __thiz = obj; }
		ActivityOptions()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYOPTIONS

