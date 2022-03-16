#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../../JString.hpp"
#include "./AnalogClock.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	AnalogClock::AnalogClock(android::content::Context arg0)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::graphics::BlendMode AnalogClock::getDialTintBlendMode() const
	{
		return callObjectMethod(
			"getDialTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getDialTintList() const
	{
		return callObjectMethod(
			"getDialTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::BlendMode AnalogClock::getHourHandTintBlendMode() const
	{
		return callObjectMethod(
			"getHourHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getHourHandTintList() const
	{
		return callObjectMethod(
			"getHourHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::BlendMode AnalogClock::getMinuteHandTintBlendMode() const
	{
		return callObjectMethod(
			"getMinuteHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getMinuteHandTintList() const
	{
		return callObjectMethod(
			"getMinuteHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::BlendMode AnalogClock::getSecondHandTintBlendMode() const
	{
		return callObjectMethod(
			"getSecondHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getSecondHandTintList() const
	{
		return callObjectMethod(
			"getSecondHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	JString AnalogClock::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		);
	}
	void AnalogClock::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void AnalogClock::setDial(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setDial",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setDialTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setDialTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setDialTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setDialTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setHourHand(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setHourHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setHourHandTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setHourHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setHourHandTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setHourHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setMinuteHand(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setMinuteHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setMinuteHandTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setMinuteHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setMinuteHandTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setMinuteHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setSecondHand(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setSecondHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setSecondHandTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setSecondHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setSecondHandTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setSecondHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setTimeZone(JString arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

