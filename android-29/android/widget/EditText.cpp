#include "../content/Context.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "./TextView_BufferType.hpp"
#include "./EditText.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	EditText::EditText(QAndroidJniObject obj) : android::widget::TextView(obj) {}
	
	// Constructors
	EditText::EditText(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	EditText::EditText(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	EditText::EditText(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	EditText::EditText(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void EditText::extendSelection(jint arg0)
	{
		callMethod<void>(
			"extendSelection",
			"(I)V",
			arg0
		);
	}
	jstring EditText::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean EditText::getFreezesText()
	{
		return callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	QAndroidJniObject EditText::getText()
	{
		return callObjectMethod(
			"getText",
			"()Landroid/text/Editable;"
		);
	}
	void EditText::selectAll()
	{
		callMethod<void>(
			"selectAll",
			"()V"
		);
	}
	void EditText::setEllipsize(android::text::TextUtils_TruncateAt arg0)
	{
		callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.object()
		);
	}
	void EditText::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void EditText::setSelection(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void EditText::setText(jstring arg0, android::widget::TextView_BufferType arg1)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::widget
