#pragma once

#include "../../JArray.hpp"
#include "./Activity.def.hpp"
#include "./PendingIntent.def.hpp"
#include "./PictureInPictureParams.def.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./ActivityOptions.def.hpp"

namespace android::app
{
	// Fields
	inline JString ActivityOptions::EXTRA_USAGE_TIME_REPORT()
	{
		return getStaticObjectField(
			"android.app.ActivityOptions",
			"EXTRA_USAGE_TIME_REPORT",
			"Ljava/lang/String;"
		);
	}
	inline JString ActivityOptions::EXTRA_USAGE_TIME_REPORT_PACKAGES()
	{
		return getStaticObjectField(
			"android.app.ActivityOptions",
			"EXTRA_USAGE_TIME_REPORT_PACKAGES",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::ActivityOptions ActivityOptions::makeBasic()
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeBasic",
			"()Landroid/app/ActivityOptions;"
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeClipRevealAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeClipRevealAnimation",
			"(Landroid/view/View;IIII)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeCustomAnimation(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeCustomAnimation",
			"(Landroid/content/Context;II)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeCustomAnimation(android::content::Context arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeCustomAnimation",
			"(Landroid/content/Context;III)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeLaunchIntoPip(android::app::PictureInPictureParams arg0)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeLaunchIntoPip",
			"(Landroid/app/PictureInPictureParams;)Landroid/app/ActivityOptions;",
			arg0.object()
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeScaleUpAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeScaleUpAnimation",
			"(Landroid/view/View;IIII)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeSceneTransitionAnimation(android::app::Activity arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;[Landroid/util/Pair;)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeSceneTransitionAnimation(android::app::Activity arg0, android::view::View arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeSceneTransitionAnimation",
			"(Landroid/app/Activity;Landroid/view/View;Ljava/lang/String;)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeTaskLaunchBehind()
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeTaskLaunchBehind",
			"()Landroid/app/ActivityOptions;"
		);
	}
	inline android::app::ActivityOptions ActivityOptions::makeThumbnailScaleUpAnimation(android::view::View arg0, android::graphics::Bitmap arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.ActivityOptions",
			"makeThumbnailScaleUpAnimation",
			"(Landroid/view/View;Landroid/graphics/Bitmap;II)Landroid/app/ActivityOptions;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline android::graphics::Rect ActivityOptions::getLaunchBounds() const
	{
		return callObjectMethod(
			"getLaunchBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint ActivityOptions::getLaunchDisplayId() const
	{
		return callMethod<jint>(
			"getLaunchDisplayId",
			"()I"
		);
	}
	inline jboolean ActivityOptions::getLockTaskMode() const
	{
		return callMethod<jboolean>(
			"getLockTaskMode",
			"()Z"
		);
	}
	inline jint ActivityOptions::getSplashScreenStyle() const
	{
		return callMethod<jint>(
			"getSplashScreenStyle",
			"()I"
		);
	}
	inline jboolean ActivityOptions::isPendingIntentBackgroundActivityLaunchAllowed() const
	{
		return callMethod<jboolean>(
			"isPendingIntentBackgroundActivityLaunchAllowed",
			"()Z"
		);
	}
	inline void ActivityOptions::requestUsageTimeReport(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"requestUsageTimeReport",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline android::app::ActivityOptions ActivityOptions::setAppVerificationBundle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setAppVerificationBundle",
			"(Landroid/os/Bundle;)Landroid/app/ActivityOptions;",
			arg0.object()
		);
	}
	inline android::app::ActivityOptions ActivityOptions::setLaunchBounds(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setLaunchBounds",
			"(Landroid/graphics/Rect;)Landroid/app/ActivityOptions;",
			arg0.object()
		);
	}
	inline android::app::ActivityOptions ActivityOptions::setLaunchDisplayId(jint arg0) const
	{
		return callObjectMethod(
			"setLaunchDisplayId",
			"(I)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	inline android::app::ActivityOptions ActivityOptions::setLockTaskEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setLockTaskEnabled",
			"(Z)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	inline void ActivityOptions::setPendingIntentBackgroundActivityLaunchAllowed(jboolean arg0) const
	{
		callMethod<void>(
			"setPendingIntentBackgroundActivityLaunchAllowed",
			"(Z)V",
			arg0
		);
	}
	inline android::app::ActivityOptions ActivityOptions::setSplashScreenStyle(jint arg0) const
	{
		return callObjectMethod(
			"setSplashScreenStyle",
			"(I)Landroid/app/ActivityOptions;",
			arg0
		);
	}
	inline android::os::Bundle ActivityOptions::toBundle() const
	{
		return callObjectMethod(
			"toBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString ActivityOptions::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ActivityOptions::update(android::app::ActivityOptions arg0) const
	{
		callMethod<void>(
			"update",
			"(Landroid/app/ActivityOptions;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
