#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "./AnalogClock.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AnalogClock::AnalogClock(android::content::Context arg0)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::graphics::BlendMode AnalogClock::getDialTintBlendMode() const
	{
		return callObjectMethod(
			"getDialTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList AnalogClock::getDialTintList() const
	{
		return callObjectMethod(
			"getDialTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::BlendMode AnalogClock::getHourHandTintBlendMode() const
	{
		return callObjectMethod(
			"getHourHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList AnalogClock::getHourHandTintList() const
	{
		return callObjectMethod(
			"getHourHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::BlendMode AnalogClock::getMinuteHandTintBlendMode() const
	{
		return callObjectMethod(
			"getMinuteHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList AnalogClock::getMinuteHandTintList() const
	{
		return callObjectMethod(
			"getMinuteHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::BlendMode AnalogClock::getSecondHandTintBlendMode() const
	{
		return callObjectMethod(
			"getSecondHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList AnalogClock::getSecondHandTintList() const
	{
		return callObjectMethod(
			"getSecondHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline JString AnalogClock::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		);
	}
	inline void AnalogClock::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	inline void AnalogClock::setDial(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setDial",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setDialTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setDialTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setDialTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setDialTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setHourHand(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setHourHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setHourHandTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setHourHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setHourHandTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setHourHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setMinuteHand(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setMinuteHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setMinuteHandTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setMinuteHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setMinuteHandTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setMinuteHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setSecondHand(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setSecondHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setSecondHandTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setSecondHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setSecondHandTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setSecondHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AnalogClock::setTimeZone(JString arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
