#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../../JString.hpp"
#include "./Spinner.hpp"

namespace android::widget
{
	// Fields
	jint Spinner::MODE_DIALOG()
	{
		return getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DIALOG"
		);
	}
	jint Spinner::MODE_DROPDOWN()
	{
		return getStaticField<jint>(
			"android.widget.Spinner",
			"MODE_DROPDOWN"
		);
	}
	
	// QJniObject forward
	Spinner::Spinner(QJniObject obj) : android::widget::AbsSpinner(obj) {}
	
	// Constructors
	Spinner::Spinner(android::content::Context arg0)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Spinner::Spinner(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Spinner::Spinner(android::content::Context arg0, jint arg1)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4)
		: android::widget::AbsSpinner(
			"android.widget.Spinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	Spinner::Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4, android::content::res::Resources_Theme arg5)
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
	JString Spinner::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint Spinner::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint Spinner::getDropDownHorizontalOffset()
	{
		return callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint Spinner::getDropDownVerticalOffset()
	{
		return callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint Spinner::getDropDownWidth()
	{
		return callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	jint Spinner::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Spinner::getPopupBackground()
	{
		return callObjectMethod(
			"getPopupBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::Context Spinner::getPopupContext()
	{
		return callObjectMethod(
			"getPopupContext",
			"()Landroid/content/Context;"
		);
	}
	JString Spinner::getPrompt()
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	void Spinner::onClick(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	android::view::PointerIcon Spinner::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void Spinner::onRestoreInstanceState(JObject arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject Spinner::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean Spinner::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Spinner::performClick()
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void Spinner::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void Spinner::setDropDownHorizontalOffset(jint arg0)
	{
		callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void Spinner::setDropDownVerticalOffset(jint arg0)
	{
		callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void Spinner::setDropDownWidth(jint arg0)
	{
		callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void Spinner::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void Spinner::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Spinner::setOnItemClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	void Spinner::setPopupBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setPopupBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Spinner::setPopupBackgroundResource(jint arg0)
	{
		callMethod<void>(
			"setPopupBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void Spinner::setPrompt(JString arg0)
	{
		callMethod<void>(
			"setPrompt",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Spinner::setPromptId(jint arg0)
	{
		callMethod<void>(
			"setPromptId",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

