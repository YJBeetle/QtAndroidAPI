#pragma once

#include "../content/Context.def.hpp"
#include "../view/inputmethod/ExtractedText.def.hpp"
#include "./ExtractEditText.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// Constructors
	inline ExtractEditText::ExtractEditText(android::content::Context arg0)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ExtractEditText::ExtractEditText(android::content::Context arg0, JObject arg1)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ExtractEditText::ExtractEditText(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ExtractEditText::ExtractEditText(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void ExtractEditText::finishInternalChanges() const
	{
		callMethod<void>(
			"finishInternalChanges",
			"()V"
		);
	}
	inline jboolean ExtractEditText::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	inline jboolean ExtractEditText::hasVerticalScrollBar() const
	{
		return callMethod<jboolean>(
			"hasVerticalScrollBar",
			"()Z"
		);
	}
	inline jboolean ExtractEditText::hasWindowFocus() const
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	inline jboolean ExtractEditText::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	inline jboolean ExtractEditText::isInputMethodTarget() const
	{
		return callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	inline jboolean ExtractEditText::onTextContextMenuItem(jint arg0) const
	{
		return callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	inline jboolean ExtractEditText::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	inline void ExtractEditText::setExtractedText(android::view::inputmethod::ExtractedText arg0) const
	{
		callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.object()
		);
	}
	inline void ExtractEditText::startInternalChanges() const
	{
		callMethod<void>(
			"startInternalChanges",
			"()V"
		);
	}
} // namespace android::inputmethodservice

// Base class headers
#include "../view/View.hpp"
#include "../widget/TextView.hpp"
#include "../widget/EditText.hpp"

