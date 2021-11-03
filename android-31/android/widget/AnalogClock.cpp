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
	
	// QJniObject forward
	AnalogClock::AnalogClock(QJniObject obj) : android::view::View(obj) {}
	
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
	android::graphics::BlendMode AnalogClock::getDialTintBlendMode()
	{
		return callObjectMethod(
			"getDialTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getDialTintList()
	{
		return callObjectMethod(
			"getDialTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::BlendMode AnalogClock::getHourHandTintBlendMode()
	{
		return callObjectMethod(
			"getHourHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getHourHandTintList()
	{
		return callObjectMethod(
			"getHourHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::BlendMode AnalogClock::getMinuteHandTintBlendMode()
	{
		return callObjectMethod(
			"getMinuteHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getMinuteHandTintList()
	{
		return callObjectMethod(
			"getMinuteHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::BlendMode AnalogClock::getSecondHandTintBlendMode()
	{
		return callObjectMethod(
			"getSecondHandTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList AnalogClock::getSecondHandTintList()
	{
		return callObjectMethod(
			"getSecondHandTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	JString AnalogClock::getTimeZone()
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		);
	}
	void AnalogClock::onVisibilityAggregated(jboolean arg0)
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void AnalogClock::setDial(android::graphics::drawable::Icon arg0)
	{
		callMethod<void>(
			"setDial",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setDialTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setDialTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setDialTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setDialTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setHourHand(android::graphics::drawable::Icon arg0)
	{
		callMethod<void>(
			"setHourHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setHourHandTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setHourHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setHourHandTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setHourHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setMinuteHand(android::graphics::drawable::Icon arg0)
	{
		callMethod<void>(
			"setMinuteHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setMinuteHandTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setMinuteHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setMinuteHandTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setMinuteHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setSecondHand(android::graphics::drawable::Icon arg0)
	{
		callMethod<void>(
			"setSecondHand",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void AnalogClock::setSecondHandTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setSecondHandTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void AnalogClock::setSecondHandTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setSecondHandTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void AnalogClock::setTimeZone(JString arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

