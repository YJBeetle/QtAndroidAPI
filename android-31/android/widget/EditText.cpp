#include "../content/Context.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "./TextView_BufferType.hpp"
#include "../../JString.hpp"
#include "./EditText.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	EditText::EditText(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	EditText::EditText(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	EditText::EditText(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	EditText::EditText(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void EditText::extendSelection(jint arg0) const
	{
		callMethod<void>(
			"extendSelection",
			"(I)V",
			arg0
		);
	}
	JString EditText::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean EditText::getFreezesText() const
	{
		return callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	JObject EditText::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Landroid/text/Editable;"
		);
	}
	void EditText::selectAll() const
	{
		callMethod<void>(
			"selectAll",
			"()V"
		);
	}
	void EditText::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.object()
		);
	}
	void EditText::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void EditText::setSelection(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void EditText::setText(JString arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::widget

