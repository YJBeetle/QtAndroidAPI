#pragma once

#include "./Notification_ProgressStyle_Point.def.hpp"
#include "./Notification_ProgressStyle_Segment.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "./Notification_ProgressStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_ProgressStyle::Notification_ProgressStyle()
		: android::app::Notification_Style(
			"android.app.Notification$ProgressStyle",
			"()V"
		) {}
	
	// Methods
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::addProgressPoint(android::app::Notification_ProgressStyle_Point arg0) const
	{
		return callObjectMethod(
			"addProgressPoint",
			"(Landroid/app/Notification$ProgressStyle$Point;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::addProgressSegment(android::app::Notification_ProgressStyle_Segment arg0) const
	{
		return callObjectMethod(
			"addProgressSegment",
			"(Landroid/app/Notification$ProgressStyle$Segment;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline jint Notification_ProgressStyle::getProgress() const
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon Notification_ProgressStyle::getProgressEndIcon() const
	{
		return callObjectMethod(
			"getProgressEndIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline jint Notification_ProgressStyle::getProgressMax() const
	{
		return callMethod<jint>(
			"getProgressMax",
			"()I"
		);
	}
	inline JObject Notification_ProgressStyle::getProgressPoints() const
	{
		return callObjectMethod(
			"getProgressPoints",
			"()Ljava/util/List;"
		);
	}
	inline JObject Notification_ProgressStyle::getProgressSegments() const
	{
		return callObjectMethod(
			"getProgressSegments",
			"()Ljava/util/List;"
		);
	}
	inline android::graphics::drawable::Icon Notification_ProgressStyle::getProgressStartIcon() const
	{
		return callObjectMethod(
			"getProgressStartIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline android::graphics::drawable::Icon Notification_ProgressStyle::getProgressTrackerIcon() const
	{
		return callObjectMethod(
			"getProgressTrackerIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline jboolean Notification_ProgressStyle::isProgressIndeterminate() const
	{
		return callMethod<jboolean>(
			"isProgressIndeterminate",
			"()Z"
		);
	}
	inline jboolean Notification_ProgressStyle::isStyledByProgress() const
	{
		return callMethod<jboolean>(
			"isStyledByProgress",
			"()Z"
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgress(jint arg0) const
	{
		return callObjectMethod(
			"setProgress",
			"(I)Landroid/app/Notification$ProgressStyle;",
			arg0
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgressEndIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setProgressEndIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgressIndeterminate(jboolean arg0) const
	{
		return callObjectMethod(
			"setProgressIndeterminate",
			"(Z)Landroid/app/Notification$ProgressStyle;",
			arg0
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgressPoints(JObject arg0) const
	{
		return callObjectMethod(
			"setProgressPoints",
			"(Ljava/util/List;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgressSegments(JObject arg0) const
	{
		return callObjectMethod(
			"setProgressSegments",
			"(Ljava/util/List;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgressStartIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setProgressStartIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setProgressTrackerIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setProgressTrackerIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$ProgressStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_ProgressStyle Notification_ProgressStyle::setStyledByProgress(jboolean arg0) const
	{
		return callObjectMethod(
			"setStyledByProgress",
			"(Z)Landroid/app/Notification$ProgressStyle;",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
