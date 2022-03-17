#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "./EdgeEffect.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline EdgeEffect::EdgeEffect(android::content::Context arg0)
		: JObject(
			"android.widget.EdgeEffect",
			"(Landroid/content/Context;)V",
			arg0.object()
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
	inline jint EdgeEffect::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
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
	inline void EdgeEffect::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
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
