#include "../graphics/Matrix.hpp"
#include "../os/Bundle.hpp"
#include "../os/LocaleList.hpp"
#include "./ViewStructure_HtmlInfo.hpp"
#include "./ViewStructure_HtmlInfo_Builder.hpp"
#include "./autofill/AutofillId.hpp"
#include "./autofill/AutofillValue.hpp"
#include "./ViewStructure.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ViewStructure::ViewStructure(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ViewStructure::ViewStructure()
		: __JniBaseClass(
			"android.view.ViewStructure",
			"()V"
		) {}
	
	// Methods
	jint ViewStructure::addChildCount(jint arg0)
	{
		return callMethod<jint>(
			"addChildCount",
			"(I)I",
			arg0
		);
	}
	void ViewStructure::asyncCommit()
	{
		callMethod<void>(
			"asyncCommit",
			"()V"
		);
	}
	android::view::ViewStructure ViewStructure::asyncNewChild(jint arg0)
	{
		return callObjectMethod(
			"asyncNewChild",
			"(I)Landroid/view/ViewStructure;",
			arg0
		);
	}
	android::view::autofill::AutofillId ViewStructure::getAutofillId()
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint ViewStructure::getChildCount()
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	android::os::Bundle ViewStructure::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring ViewStructure::getHint()
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ViewStructure::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ViewStructure::getTextSelectionEnd()
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint ViewStructure::getTextSelectionStart()
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jboolean ViewStructure::hasExtras()
	{
		return callMethod<jboolean>(
			"hasExtras",
			"()Z"
		);
	}
	android::view::ViewStructure ViewStructure::newChild(jint arg0)
	{
		return callObjectMethod(
			"newChild",
			"(I)Landroid/view/ViewStructure;",
			arg0
		);
	}
	android::view::ViewStructure_HtmlInfo_Builder ViewStructure::newHtmlInfoBuilder(jstring arg0)
	{
		return callObjectMethod(
			"newHtmlInfoBuilder",
			"(Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0
		);
	}
	void ViewStructure::setAccessibilityFocused(jboolean arg0)
	{
		callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setActivated(jboolean arg0)
	{
		callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void ViewStructure::setAutofillHints(jarray arg0)
	{
		callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void ViewStructure::setAutofillId(android::view::autofill::AutofillId arg0)
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	void ViewStructure::setAutofillId(android::view::autofill::AutofillId arg0, jint arg1)
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewStructure::setAutofillOptions(jarray arg0)
	{
		callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ViewStructure::setAutofillType(jint arg0)
	{
		callMethod<void>(
			"setAutofillType",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setAutofillValue(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"setAutofillValue",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void ViewStructure::setCheckable(jboolean arg0)
	{
		callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setChildCount(jint arg0)
	{
		callMethod<void>(
			"setChildCount",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setClassName(jstring arg0)
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ViewStructure::setClickable(jboolean arg0)
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setContentDescription(jstring arg0)
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ViewStructure::setContextClickable(jboolean arg0)
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setDataIsSensitive(jboolean arg0)
	{
		callMethod<void>(
			"setDataIsSensitive",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
			"setDimens",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void ViewStructure::setElevation(jfloat arg0)
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void ViewStructure::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setFocusable(jboolean arg0)
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setFocused(jboolean arg0)
	{
		callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setHint(jstring arg0)
	{
		callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ViewStructure::setHtmlInfo(android::view::ViewStructure_HtmlInfo arg0)
	{
		callMethod<void>(
			"setHtmlInfo",
			"(Landroid/view/ViewStructure$HtmlInfo;)V",
			arg0.object()
		);
	}
	void ViewStructure::setId(jint arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		callMethod<void>(
			"setId",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ViewStructure::setImportantForAutofill(jint arg0)
	{
		callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setInputType(jint arg0)
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setLocaleList(android::os::LocaleList arg0)
	{
		callMethod<void>(
			"setLocaleList",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void ViewStructure::setLongClickable(jboolean arg0)
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setMaxTextEms(jint arg0)
	{
		callMethod<void>(
			"setMaxTextEms",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setMaxTextLength(jint arg0)
	{
		callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setMinTextEms(jint arg0)
	{
		callMethod<void>(
			"setMinTextEms",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setOpaque(jboolean arg0)
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setSelected(jboolean arg0)
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ViewStructure::setText(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ViewStructure::setTextIdEntry(jstring arg0)
	{
		callMethod<void>(
			"setTextIdEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ViewStructure::setTextLines(jintArray arg0, jintArray arg1)
	{
		callMethod<void>(
			"setTextLines",
			"([I[I)V",
			arg0,
			arg1
		);
	}
	void ViewStructure::setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setTextStyle",
			"(FIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ViewStructure::setTransformation(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"setTransformation",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void ViewStructure::setVisibility(jint arg0)
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setWebDomain(jstring arg0)
	{
		callMethod<void>(
			"setWebDomain",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::view

