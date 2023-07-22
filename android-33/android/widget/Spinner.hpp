#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/PointerIcon.def.hpp"
#include "../../JString.hpp"
#include "./Spinner.def.hpp"

namespace android::widget
{
	// Fields
	inline jint Spinner::MODE_DIALOG()
	{
		return getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DIALOG"
		);
	}
	inline jint Spinner::MODE_DROPDOWN()
	{
		return getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DROPDOWN"
		);
	}
	
	// Constructors
	inline Spinner::Spinner(android::content::Context arg0)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Spinner::Spinner(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Spinner::Spinner(android::content::Context arg0, jint arg1)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	inline Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	inline Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4, android::content::res::Resources_Theme arg5)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IIILandroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
	inline JString Spinner::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Spinner::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline jint Spinner::getDropDownHorizontalOffset() const
	{
		return callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	inline jint Spinner::getDropDownVerticalOffset() const
	{
		return callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	inline jint Spinner::getDropDownWidth() const
	{
		return callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	inline jint Spinner::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable Spinner::getPopupBackground() const
	{
		return callObjectMethod(
			"getPopupBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::content::Context Spinner::getPopupContext() const
	{
		return callObjectMethod(
			"getPopupContext",
			"()Landroid/content/Context;"
		);
	}
	inline JString Spinner::getPrompt() const
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void Spinner::onClick(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	inline android::view::PointerIcon Spinner::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline void Spinner::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline JObject Spinner::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jboolean Spinner::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Spinner::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	inline void Spinner::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void Spinner::setDropDownHorizontalOffset(jint arg0) const
	{
		callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	inline void Spinner::setDropDownVerticalOffset(jint arg0) const
	{
		callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	inline void Spinner::setDropDownWidth(jint arg0) const
	{
		callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	inline void Spinner::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void Spinner::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void Spinner::setOnItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	inline void Spinner::setPopupBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setPopupBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Spinner::setPopupBackgroundResource(jint arg0) const
	{
		callMethod<void>(
			"setPopupBackgroundResource",
			"(I)V",
			arg0
		);
	}
	inline void Spinner::setPrompt(JString arg0) const
	{
		callMethod<void>(
			"setPrompt",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Spinner::setPromptId(jint arg0) const
	{
		callMethod<void>(
			"setPromptId",
			"(I)V",
			arg0
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
