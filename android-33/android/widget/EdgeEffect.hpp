#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "./EdgeEffect.def.hpp"

namespace android::widget
{
	// Fields
	inline android::graphics::BlendMode EdgeEffect::DEFAULT_BLEND_MODE()
	{
		return getStaticObjectField(
			"android.widget.EdgeEffect",
			"DEFAULT_BLEND_MODE",
			"Landroid/graphics/BlendMode;"
		);
	}
	
	// Constructors
	inline EdgeEffect::EdgeEffect(android::content::Context arg0)
		: JObject(
			"android.widget.EdgeEffect",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline EdgeEffect::EdgeEffect(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.EdgeEffect",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean EdgeEffect::draw(android::graphics::Canvas arg0) const
	{
		return callMethod<jboolean>(
			"draw",
			"(Landroid/graphics/Canvas;)Z",
			arg0.object()
		);
	}
	inline void EdgeEffect::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline android::graphics::BlendMode EdgeEffect::getBlendMode() const
	{
		return callObjectMethod(
			"getBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline jint EdgeEffect::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jfloat EdgeEffect::getDistance() const
	{
		return callMethod<jfloat>(
			"getDistance",
			"()F"
		);
	}
	inline jint EdgeEffect::getMaxHeight() const
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	inline jboolean EdgeEffect::isFinished() const
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	inline void EdgeEffect::onAbsorb(jint arg0) const
	{
		callMethod<void>(
			"onAbsorb",
			"(I)V",
			arg0
		);
	}
	inline void EdgeEffect::onPull(jfloat arg0) const
	{
		callMethod<void>(
			"onPull",
			"(F)V",
			arg0
		);
	}
	inline void EdgeEffect::onPull(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"onPull",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline jfloat EdgeEffect::onPullDistance(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"onPullDistance",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline void EdgeEffect::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	inline void EdgeEffect::setBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void EdgeEffect::setColor(jint arg0) const
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	inline void EdgeEffect::setSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
