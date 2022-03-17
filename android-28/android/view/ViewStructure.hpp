#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../graphics/Matrix.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/LocaleList.def.hpp"
#include "./ViewStructure_HtmlInfo.def.hpp"
#include "./ViewStructure_HtmlInfo_Builder.def.hpp"
#include "./autofill/AutofillId.def.hpp"
#include "./autofill/AutofillValue.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ViewStructure.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ViewStructure::ViewStructure()
		: JObject(
			"android.view.ViewStructure",
			"()V"
		) {}
	
	// Methods
	inline jint ViewStructure::addChildCount(jint arg0) const
	{
		return callMethod<jint>(
			"addChildCount",
			"(I)I",
			arg0
		);
	}
	inline void ViewStructure::asyncCommit() const
	{
		callMethod<void>(
			"asyncCommit",
			"()V"
		);
	}
	inline android::view::ViewStructure ViewStructure::asyncNewChild(jint arg0) const
	{
		return callObjectMethod(
			"asyncNewChild",
			"(I)Landroid/view/ViewStructure;",
			arg0
		);
	}
	inline android::view::autofill::AutofillId ViewStructure::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline jint ViewStructure::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	inline android::os::Bundle ViewStructure::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString ViewStructure::getHint() const
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ViewStructure::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint ViewStructure::getTextSelectionEnd() const
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	inline jint ViewStructure::getTextSelectionStart() const
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	inline jboolean ViewStructure::hasExtras() const
	{
		return callMethod<jboolean>(
			"hasExtras",
			"()Z"
		);
	}
	inline android::view::ViewStructure ViewStructure::newChild(jint arg0) const
	{
		return callObjectMethod(
			"newChild",
			"(I)Landroid/view/ViewStructure;",
			arg0
		);
	}
	inline android::view::ViewStructure_HtmlInfo_Builder ViewStructure::newHtmlInfoBuilder(JString arg0) const
	{
		return callObjectMethod(
			"newHtmlInfoBuilder",
			"(Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline void ViewStructure::setAccessibilityFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setActivated(jboolean arg0) const
	{
		callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	inline void ViewStructure::setAutofillHints(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void ViewStructure::setAutofillId(android::view::autofill::AutofillId arg0) const
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	inline void ViewStructure::setAutofillId(android::view::autofill::AutofillId arg0, jint arg1) const
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ViewStructure::setAutofillOptions(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	inline void ViewStructure::setAutofillType(jint arg0) const
	{
		callMethod<void>(
			"setAutofillType",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setAutofillValue(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"setAutofillValue",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void ViewStructure::setCheckable(jboolean arg0) const
	{
		callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setChildCount(jint arg0) const
	{
		callMethod<void>(
			"setChildCount",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setClassName(JString arg0) const
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ViewStructure::setClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ViewStructure::setContextClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setDataIsSensitive(jboolean arg0) const
	{
		callMethod<void>(
			"setDataIsSensitive",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline void ViewStructure::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	inline void ViewStructure::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setHint(JString arg0) const
	{
		callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ViewStructure::setHtmlInfo(android::view::ViewStructure_HtmlInfo arg0) const
	{
		callMethod<void>(
			"setHtmlInfo",
			"(Landroid/view/ViewStructure$HtmlInfo;)V",
			arg0.object()
		);
	}
	inline void ViewStructure::setId(jint arg0, JString arg1, JString arg2, JString arg3) const
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
	inline void ViewStructure::setImportantForAutofill(jint arg0) const
	{
		callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setLocaleList(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setLocaleList",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	inline void ViewStructure::setLongClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setMaxTextEms(jint arg0) const
	{
		callMethod<void>(
			"setMaxTextEms",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setMaxTextLength(jint arg0) const
	{
		callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setMinTextEms(jint arg0) const
	{
		callMethod<void>(
			"setMinTextEms",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setOpaque(jboolean arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	inline void ViewStructure::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ViewStructure::setText(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void ViewStructure::setTextIdEntry(JString arg0) const
	{
		callMethod<void>(
			"setTextIdEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ViewStructure::setTextLines(JIntArray arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"setTextLines",
			"([I[I)V",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	inline void ViewStructure::setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void ViewStructure::setTransformation(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setTransformation",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void ViewStructure::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	inline void ViewStructure::setWebDomain(JString arg0) const
	{
		callMethod<void>(
			"setWebDomain",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
