#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../graphics/Matrix.hpp"
#include "../os/Bundle.hpp"
#include "../os/LocaleList.hpp"
#include "./ViewStructure_HtmlInfo.hpp"
#include "./ViewStructure_HtmlInfo_Builder.hpp"
#include "./autofill/AutofillId.hpp"
#include "./autofill/AutofillValue.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ViewStructure.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewStructure::ViewStructure(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ViewStructure::ViewStructure()
		: JObject(
			"android.view.ViewStructure",
			"()V"
		) {}
	
	// Methods
	jint ViewStructure::addChildCount(jint arg0) const
	{
		return callMethod<jint>(
			"addChildCount",
			"(I)I",
			arg0
		);
	}
	void ViewStructure::asyncCommit() const
	{
		callMethod<void>(
			"asyncCommit",
			"()V"
		);
	}
	android::view::ViewStructure ViewStructure::asyncNewChild(jint arg0) const
	{
		return callObjectMethod(
			"asyncNewChild",
			"(I)Landroid/view/ViewStructure;",
			arg0
		);
	}
	android::view::autofill::AutofillId ViewStructure::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint ViewStructure::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	android::os::Bundle ViewStructure::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString ViewStructure::getHint() const
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString ViewStructure::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint ViewStructure::getTextSelectionEnd() const
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint ViewStructure::getTextSelectionStart() const
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jboolean ViewStructure::hasExtras() const
	{
		return callMethod<jboolean>(
			"hasExtras",
			"()Z"
		);
	}
	android::view::ViewStructure ViewStructure::newChild(jint arg0) const
	{
		return callObjectMethod(
			"newChild",
			"(I)Landroid/view/ViewStructure;",
			arg0
		);
	}
	android::view::ViewStructure_HtmlInfo_Builder ViewStructure::newHtmlInfoBuilder(JString arg0) const
	{
		return callObjectMethod(
			"newHtmlInfoBuilder",
			"(Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setAccessibilityFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setActivated(jboolean arg0) const
	{
		callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void ViewStructure::setAutofillHints(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void ViewStructure::setAutofillId(android::view::autofill::AutofillId arg0) const
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	void ViewStructure::setAutofillId(android::view::autofill::AutofillId arg0, jint arg1) const
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewStructure::setAutofillOptions(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	void ViewStructure::setAutofillType(jint arg0) const
	{
		callMethod<void>(
			"setAutofillType",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setAutofillValue(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"setAutofillValue",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void ViewStructure::setCheckable(jboolean arg0) const
	{
		callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setChildCount(jint arg0) const
	{
		callMethod<void>(
			"setChildCount",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setClassName(JString arg0) const
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setContextClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setDataIsSensitive(jboolean arg0) const
	{
		callMethod<void>(
			"setDataIsSensitive",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	void ViewStructure::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void ViewStructure::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setHint(JString arg0) const
	{
		callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setHintIdEntry(JString arg0) const
	{
		callMethod<void>(
			"setHintIdEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setHtmlInfo(android::view::ViewStructure_HtmlInfo arg0) const
	{
		callMethod<void>(
			"setHtmlInfo",
			"(Landroid/view/ViewStructure$HtmlInfo;)V",
			arg0.object()
		);
	}
	void ViewStructure::setId(jint arg0, JString arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"setId",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	void ViewStructure::setImportantForAutofill(jint arg0) const
	{
		callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setLocaleList(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setLocaleList",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void ViewStructure::setLongClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setMaxTextEms(jint arg0) const
	{
		callMethod<void>(
			"setMaxTextEms",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setMaxTextLength(jint arg0) const
	{
		callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setMinTextEms(jint arg0) const
	{
		callMethod<void>(
			"setMinTextEms",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setOpaque(jboolean arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void ViewStructure::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setText(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void ViewStructure::setTextIdEntry(JString arg0) const
	{
		callMethod<void>(
			"setTextIdEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ViewStructure::setTextLines(JIntArray arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"setTextLines",
			"([I[I)V",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	void ViewStructure::setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3) const
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
	void ViewStructure::setTransformation(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setTransformation",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void ViewStructure::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void ViewStructure::setWebDomain(JString arg0) const
	{
		callMethod<void>(
			"setWebDomain",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::view

