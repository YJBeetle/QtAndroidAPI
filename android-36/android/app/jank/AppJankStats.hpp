#pragma once

#include "./RelativeFrameTimeHistogram.def.hpp"
#include "../../../JString.hpp"
#include "./AppJankStats.def.hpp"

namespace android::app::jank
{
	// Fields
	inline JString AppJankStats::WIDGET_CATEGORY_ANIMATION()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_ANIMATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_CATEGORY_KEYBOARD()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_KEYBOARD",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_CATEGORY_MEDIA()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_MEDIA",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_CATEGORY_NAVIGATION()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_NAVIGATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_CATEGORY_OTHER()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_OTHER",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_CATEGORY_SCROLL()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_SCROLL",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_CATEGORY_UNSPECIFIED()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_CATEGORY_UNSPECIFIED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_ANIMATING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_ANIMATING",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_DRAGGING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_DRAGGING",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_FLINGING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_FLINGING",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_NONE()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_NONE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_PLAYBACK()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_PREDICTIVE_BACK()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_PREDICTIVE_BACK",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_SCROLLING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_SCROLLING",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_SWIPING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_SWIPING",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_TAPPING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_TAPPING",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_UNSPECIFIED()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_UNSPECIFIED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::WIDGET_STATE_ZOOMING()
	{
		return getStaticObjectField(
			"android.app.jank.AppJankStats",
			"WIDGET_STATE_ZOOMING",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline AppJankStats::AppJankStats(jint arg0, JString arg1, JString arg2, JString arg3, JString arg4, jlong arg5, jlong arg6, android::app::jank::RelativeFrameTimeHistogram arg7)
		: JObject(
			"android.app.jank.AppJankStats",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJLandroid/app/jank/RelativeFrameTimeHistogram;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5,
			arg6,
			arg7.object()
		) {}
	
	// Methods
	inline jlong AppJankStats::getJankyFrameCount() const
	{
		return callMethod<jlong>(
			"getJankyFrameCount",
			"()J"
		);
	}
	inline JString AppJankStats::getNavigationComponent() const
	{
		return callObjectMethod(
			"getNavigationComponent",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::jank::RelativeFrameTimeHistogram AppJankStats::getRelativeFrameTimeHistogram() const
	{
		return callObjectMethod(
			"getRelativeFrameTimeHistogram",
			"()Landroid/app/jank/RelativeFrameTimeHistogram;"
		);
	}
	inline jlong AppJankStats::getTotalFrameCount() const
	{
		return callMethod<jlong>(
			"getTotalFrameCount",
			"()J"
		);
	}
	inline jint AppJankStats::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline JString AppJankStats::getWidgetCategory() const
	{
		return callObjectMethod(
			"getWidgetCategory",
			"()Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::getWidgetId() const
	{
		return callObjectMethod(
			"getWidgetId",
			"()Ljava/lang/String;"
		);
	}
	inline JString AppJankStats::getWidgetState() const
	{
		return callObjectMethod(
			"getWidgetState",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::jank

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::jank;
#endif
