#pragma once

#include "../../JIntArray.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../../JString.hpp"
#include "./MediaRouteButton.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline MediaRouteButton::MediaRouteButton(android::content::Context arg0)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline MediaRouteButton::MediaRouteButton(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline MediaRouteButton::MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline MediaRouteButton::MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint MediaRouteButton::getRouteTypes() const
	{
		return callMethod<jint>(
			"getRouteTypes",
			"()I"
		);
	}
	inline void MediaRouteButton::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline void MediaRouteButton::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	inline void MediaRouteButton::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline jboolean MediaRouteButton::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	inline void MediaRouteButton::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaRouteButton::setExtendedSettingsClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void MediaRouteButton::setRouteTypes(jint arg0) const
	{
		callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouteButton::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouteButton::showDialog() const
	{
		callMethod<void>(
			"showDialog",
			"()V"
		);
	}
} // namespace android::app

// Base class headers
#include "../view/View.hpp"

