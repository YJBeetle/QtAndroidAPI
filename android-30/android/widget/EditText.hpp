#pragma once

#include "../content/Context.def.hpp"
#include "../text/TextUtils_TruncateAt.def.hpp"
#include "./TextView_BufferType.def.hpp"
#include "../../JString.hpp"
#include "./EditText.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline EditText::EditText(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline EditText::EditText(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline EditText::EditText(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline EditText::EditText(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void EditText::extendSelection(jint arg0) const
	{
		callMethod<void>(
			"extendSelection",
			"(I)V",
			arg0
		);
	}
	inline JString EditText::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean EditText::getFreezesText() const
	{
		return callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	inline JObject EditText::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Landroid/text/Editable;"
		);
	}
	inline void EditText::selectAll() const
	{
		callMethod<void>(
			"selectAll",
			"()V"
		);
	}
	inline void EditText::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.object()
		);
	}
	inline void EditText::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	inline void EditText::setSelection(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void EditText::setText(JString arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"

