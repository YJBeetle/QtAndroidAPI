#pragma once

#include "../graphics/Rect.def.hpp"
#include "./Gravity.def.hpp"

namespace android::view
{
	// Fields
	inline jint Gravity::AXIS_CLIP()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_CLIP"
		);
	}
	inline jint Gravity::AXIS_PULL_AFTER()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_PULL_AFTER"
		);
	}
	inline jint Gravity::AXIS_PULL_BEFORE()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_PULL_BEFORE"
		);
	}
	inline jint Gravity::AXIS_SPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_SPECIFIED"
		);
	}
	inline jint Gravity::AXIS_X_SHIFT()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_X_SHIFT"
		);
	}
	inline jint Gravity::AXIS_Y_SHIFT()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"AXIS_Y_SHIFT"
		);
	}
	inline jint Gravity::BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"BOTTOM"
		);
	}
	inline jint Gravity::CENTER()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"CENTER"
		);
	}
	inline jint Gravity::CENTER_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"CENTER_HORIZONTAL"
		);
	}
	inline jint Gravity::CENTER_VERTICAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"CENTER_VERTICAL"
		);
	}
	inline jint Gravity::CLIP_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"CLIP_HORIZONTAL"
		);
	}
	inline jint Gravity::CLIP_VERTICAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"CLIP_VERTICAL"
		);
	}
	inline jint Gravity::DISPLAY_CLIP_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"DISPLAY_CLIP_HORIZONTAL"
		);
	}
	inline jint Gravity::DISPLAY_CLIP_VERTICAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"DISPLAY_CLIP_VERTICAL"
		);
	}
	inline jint Gravity::END()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"END"
		);
	}
	inline jint Gravity::FILL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"FILL"
		);
	}
	inline jint Gravity::FILL_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"FILL_HORIZONTAL"
		);
	}
	inline jint Gravity::FILL_VERTICAL()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"FILL_VERTICAL"
		);
	}
	inline jint Gravity::HORIZONTAL_GRAVITY_MASK()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"HORIZONTAL_GRAVITY_MASK"
		);
	}
	inline jint Gravity::LEFT()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"LEFT"
		);
	}
	inline jint Gravity::NO_GRAVITY()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"NO_GRAVITY"
		);
	}
	inline jint Gravity::RELATIVE_HORIZONTAL_GRAVITY_MASK()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"RELATIVE_HORIZONTAL_GRAVITY_MASK"
		);
	}
	inline jint Gravity::RELATIVE_LAYOUT_DIRECTION()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"RELATIVE_LAYOUT_DIRECTION"
		);
	}
	inline jint Gravity::RIGHT()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"RIGHT"
		);
	}
	inline jint Gravity::START()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"START"
		);
	}
	inline jint Gravity::TOP()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"TOP"
		);
	}
	inline jint Gravity::VERTICAL_GRAVITY_MASK()
	{
		return getStaticField<jint>(
			"android.view.Gravity",
			"VERTICAL_GRAVITY_MASK"
		);
	}
	
	// Constructors
	inline Gravity::Gravity()
		: JObject(
			"android.view.Gravity",
			"()V"
		) {}
	
	// Methods
	inline void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, android::graphics::Rect arg4)
	{
		callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	inline void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, android::graphics::Rect arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;Landroid/graphics/Rect;I)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	inline void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, jint arg4, jint arg5, android::graphics::Rect arg6)
	{
		callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline void Gravity::apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, jint arg4, jint arg5, android::graphics::Rect arg6, jint arg7)
	{
		callStaticMethod<void>(
			"android.view.Gravity",
			"apply",
			"(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;I)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7
		);
	}
	inline void Gravity::applyDisplay(jint arg0, android::graphics::Rect arg1, android::graphics::Rect arg2)
	{
		callStaticMethod<void>(
			"android.view.Gravity",
			"applyDisplay",
			"(ILandroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Gravity::applyDisplay(jint arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.view.Gravity",
			"applyDisplay",
			"(ILandroid/graphics/Rect;Landroid/graphics/Rect;I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline jint Gravity::getAbsoluteGravity(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.Gravity",
			"getAbsoluteGravity",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jboolean Gravity::isHorizontal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.Gravity",
			"isHorizontal",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Gravity::isVertical(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.Gravity",
			"isVertical",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
