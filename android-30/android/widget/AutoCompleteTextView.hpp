#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/inputmethod/CompletionInfo.def.hpp"
#include "./Filter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./AutoCompleteTextView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, android::content::res::Resources_Theme arg4)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IILandroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	inline void AutoCompleteTextView::clearListSelection() const
	{
		callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	inline void AutoCompleteTextView::dismissDropDown() const
	{
		callMethod<void>(
			"dismissDropDown",
			"()V"
		);
	}
	inline jboolean AutoCompleteTextView::enoughToFilter() const
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	inline JObject AutoCompleteTextView::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline JString AutoCompleteTextView::getCompletionHint() const
	{
		return callObjectMethod(
			"getCompletionHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AutoCompleteTextView::getDropDownAnchor() const
	{
		return callMethod<jint>(
			"getDropDownAnchor",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable AutoCompleteTextView::getDropDownBackground() const
	{
		return callObjectMethod(
			"getDropDownBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint AutoCompleteTextView::getDropDownHeight() const
	{
		return callMethod<jint>(
			"getDropDownHeight",
			"()I"
		);
	}
	inline jint AutoCompleteTextView::getDropDownHorizontalOffset() const
	{
		return callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	inline jint AutoCompleteTextView::getDropDownVerticalOffset() const
	{
		return callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	inline jint AutoCompleteTextView::getDropDownWidth() const
	{
		return callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	inline jint AutoCompleteTextView::getInputMethodMode() const
	{
		return callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	inline JObject AutoCompleteTextView::getItemClickListener() const
	{
		return callObjectMethod(
			"getItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	inline JObject AutoCompleteTextView::getItemSelectedListener() const
	{
		return callObjectMethod(
			"getItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	inline jint AutoCompleteTextView::getListSelection() const
	{
		return callMethod<jint>(
			"getListSelection",
			"()I"
		);
	}
	inline JObject AutoCompleteTextView::getOnItemClickListener() const
	{
		return callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	inline JObject AutoCompleteTextView::getOnItemSelectedListener() const
	{
		return callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	inline jint AutoCompleteTextView::getThreshold() const
	{
		return callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
	inline JObject AutoCompleteTextView::getValidator() const
	{
		return callObjectMethod(
			"getValidator",
			"()Landroid/widget/AutoCompleteTextView$Validator;"
		);
	}
	inline jboolean AutoCompleteTextView::isPerformingCompletion() const
	{
		return callMethod<jboolean>(
			"isPerformingCompletion",
			"()Z"
		);
	}
	inline jboolean AutoCompleteTextView::isPopupShowing() const
	{
		return callMethod<jboolean>(
			"isPopupShowing",
			"()Z"
		);
	}
	inline void AutoCompleteTextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0) const
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::onFilterComplete(jint arg0) const
	{
		callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	inline jboolean AutoCompleteTextView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AutoCompleteTextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AutoCompleteTextView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void AutoCompleteTextView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::performCompletion() const
	{
		callMethod<void>(
			"performCompletion",
			"()V"
		);
	}
	inline void AutoCompleteTextView::performValidation() const
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	inline void AutoCompleteTextView::refreshAutoCompleteResults() const
	{
		callMethod<void>(
			"refreshAutoCompleteResults",
			"()V"
		);
	}
	inline void AutoCompleteTextView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::setCompletionHint(JString arg0) const
	{
		callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AutoCompleteTextView::setDropDownAnchor(jint arg0) const
	{
		callMethod<void>(
			"setDropDownAnchor",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDropDownBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::setDropDownBackgroundResource(jint arg0) const
	{
		callMethod<void>(
			"setDropDownBackgroundResource",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setDropDownHeight(jint arg0) const
	{
		callMethod<void>(
			"setDropDownHeight",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setDropDownHorizontalOffset(jint arg0) const
	{
		callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setDropDownVerticalOffset(jint arg0) const
	{
		callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setDropDownWidth(jint arg0) const
	{
		callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setInputMethodMode(jint arg0) const
	{
		callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setListSelection(jint arg0) const
	{
		callMethod<void>(
			"setListSelection",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::setOnItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::setOnItemSelectedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::setText(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void AutoCompleteTextView::setThreshold(jint arg0) const
	{
		callMethod<void>(
			"setThreshold",
			"(I)V",
			arg0
		);
	}
	inline void AutoCompleteTextView::setValidator(JObject arg0) const
	{
		callMethod<void>(
			"setValidator",
			"(Landroid/widget/AutoCompleteTextView$Validator;)V",
			arg0.object()
		);
	}
	inline void AutoCompleteTextView::showDropDown() const
	{
		callMethod<void>(
			"showDropDown",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./EditText.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
