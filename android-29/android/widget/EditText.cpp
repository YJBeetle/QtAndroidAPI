#include "../content/Context.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "./TextView_BufferType.hpp"
#include "./EditText.hpp"

namespace android::widget
{
	// Fields
	
	EditText::EditText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EditText::EditText(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	EditText::EditText(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	EditText::EditText(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	EditText::EditText(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void EditText::extendSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"extendSelection",
			"(I)V",
			arg0
		);
	}
	jstring EditText::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean EditText::getFreezesText()
	{
		return __thiz.callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	QAndroidJniObject EditText::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Landroid/text/Editable;"
		);
	}
	void EditText::selectAll()
	{
		__thiz.callMethod<void>(
			"selectAll",
			"()V"
		);
	}
	void EditText::setEllipsize(android::text::TextUtils_TruncateAt arg0)
	{
		__thiz.callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.__jniObject().object()
		);
	}
	void EditText::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void EditText::setSelection(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void EditText::setText(jstring arg0, android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void EditText::setText(const QString &arg0, android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::widget

