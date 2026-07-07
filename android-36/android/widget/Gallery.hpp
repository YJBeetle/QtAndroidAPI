#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/animation/Transformation.def.hpp"
#include "../../JString.hpp"
#include "./Gallery.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Gallery::Gallery(android::content::Context arg0)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Gallery::Gallery(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Gallery::Gallery(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Gallery::Gallery(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSpinner(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean Gallery::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline void Gallery::dispatchSetSelected(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0
		);
	}
	inline android::view::ViewGroup_LayoutParams Gallery::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.object()
		);
	}
	inline JString Gallery::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean Gallery::onDown(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Gallery::onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline jboolean Gallery::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Gallery::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void Gallery::onLongPress(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline jboolean Gallery::onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void Gallery::onShowPress(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline jboolean Gallery::onSingleTapUp(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Gallery::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Gallery::setAnimationDuration(jint arg0) const
	{
		callMethod<void>(
			"setAnimationDuration",
			"(I)V",
			arg0
		);
	}
	inline void Gallery::setCallbackDuringFling(jboolean arg0) const
	{
		callMethod<void>(
			"setCallbackDuringFling",
			"(Z)V",
			arg0
		);
	}
	inline void Gallery::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void Gallery::setSpacing(jint arg0) const
	{
		callMethod<void>(
			"setSpacing",
			"(I)V",
			arg0
		);
	}
	inline void Gallery::setUnselectedAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setUnselectedAlpha",
			"(F)V",
			arg0
		);
	}
	inline jboolean Gallery::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	inline jboolean Gallery::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Gallery::showContextMenuForChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean Gallery::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsSpinner.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
