#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "./Spinner.hpp"

namespace android::widget
{
	// Fields
	jint Spinner::MODE_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DIALOG"
		);
	}
	jint Spinner::MODE_DROPDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DROPDOWN"
		);
	}
	
	Spinner::Spinner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Spinner::Spinner(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Spinner::Spinner(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Spinner::Spinner(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Spinner::Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Spinner::Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	Spinner::Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	Spinner::Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4, android::content::res::Resources_Theme arg5)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IIILandroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	jstring Spinner::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Spinner::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint Spinner::getDropDownHorizontalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint Spinner::getDropDownVerticalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint Spinner::getDropDownWidth()
	{
		return __thiz.callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	jint Spinner::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	QAndroidJniObject Spinner::getPopupBackground()
	{
		return __thiz.callObjectMethod(
			"getPopupBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Spinner::getPopupContext()
	{
		return __thiz.callObjectMethod(
			"getPopupContext",
			"()Landroid/content/Context;"
		);
	}
	jstring Spinner::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Spinner::onClick(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Spinner::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Spinner::onRestoreInstanceState(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Spinner::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean Spinner::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Spinner::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void Spinner::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::setDropDownHorizontalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void Spinner::setDropDownVerticalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void Spinner::setDropDownWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void Spinner::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void Spinner::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Spinner::setOnItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::setPopupBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setPopupBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Spinner::setPopupBackgroundResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPopupBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void Spinner::setPrompt(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPrompt",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Spinner::setPromptId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPromptId",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

