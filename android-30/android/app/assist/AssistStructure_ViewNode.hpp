#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../graphics/Matrix.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../view/ViewStructure_HtmlInfo.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../view/autofill/AutofillValue.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./AssistStructure_ViewNode.def.hpp"

namespace android::app::assist
{
	// Fields
	inline jint AssistStructure_ViewNode::TEXT_COLOR_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_COLOR_UNDEFINED"
		);
	}
	inline jint AssistStructure_ViewNode::TEXT_STYLE_BOLD()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_BOLD"
		);
	}
	inline jint AssistStructure_ViewNode::TEXT_STYLE_ITALIC()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_ITALIC"
		);
	}
	inline jint AssistStructure_ViewNode::TEXT_STYLE_STRIKE_THRU()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_STRIKE_THRU"
		);
	}
	inline jint AssistStructure_ViewNode::TEXT_STYLE_UNDERLINE()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_UNDERLINE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jfloat AssistStructure_ViewNode::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	inline JArray AssistStructure_ViewNode::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	inline android::view::autofill::AutofillId AssistStructure_ViewNode::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline JArray AssistStructure_ViewNode::getAutofillOptions() const
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline jint AssistStructure_ViewNode::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue AssistStructure_ViewNode::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline android::app::assist::AssistStructure_ViewNode AssistStructure_ViewNode::getChildAt(jint arg0) const
	{
		return callObjectMethod(
			"getChildAt",
			"(I)Landroid/app/assist/AssistStructure$ViewNode;",
			arg0
		);
	}
	inline jint AssistStructure_ViewNode::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	inline JString AssistStructure_ViewNode::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssistStructure_ViewNode::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jfloat AssistStructure_ViewNode::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	inline android::os::Bundle AssistStructure_ViewNode::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint AssistStructure_ViewNode::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JString AssistStructure_ViewNode::getHint() const
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssistStructure_ViewNode::getHintIdEntry() const
	{
		return callObjectMethod(
			"getHintIdEntry",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::ViewStructure_HtmlInfo AssistStructure_ViewNode::getHtmlInfo() const
	{
		return callObjectMethod(
			"getHtmlInfo",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
	inline jint AssistStructure_ViewNode::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString AssistStructure_ViewNode::getIdEntry() const
	{
		return callObjectMethod(
			"getIdEntry",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssistStructure_ViewNode::getIdPackage() const
	{
		return callObjectMethod(
			"getIdPackage",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssistStructure_ViewNode::getIdType() const
	{
		return callObjectMethod(
			"getIdType",
			"()Ljava/lang/String;"
		);
	}
	inline jint AssistStructure_ViewNode::getImportantForAutofill() const
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	inline android::os::LocaleList AssistStructure_ViewNode::getLocaleList() const
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint AssistStructure_ViewNode::getMaxTextEms() const
	{
		return callMethod<jint>(
			"getMaxTextEms",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getMaxTextLength() const
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getMinTextEms() const
	{
		return callMethod<jint>(
			"getMinTextEms",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getScrollX() const
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getScrollY() const
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	inline JString AssistStructure_ViewNode::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AssistStructure_ViewNode::getTextBackgroundColor() const
	{
		return callMethod<jint>(
			"getTextBackgroundColor",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getTextColor() const
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	inline JString AssistStructure_ViewNode::getTextIdEntry() const
	{
		return callObjectMethod(
			"getTextIdEntry",
			"()Ljava/lang/String;"
		);
	}
	inline JIntArray AssistStructure_ViewNode::getTextLineBaselines() const
	{
		return callObjectMethod(
			"getTextLineBaselines",
			"()[I"
		);
	}
	inline JIntArray AssistStructure_ViewNode::getTextLineCharOffsets() const
	{
		return callObjectMethod(
			"getTextLineCharOffsets",
			"()[I"
		);
	}
	inline jint AssistStructure_ViewNode::getTextSelectionEnd() const
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getTextSelectionStart() const
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	inline jfloat AssistStructure_ViewNode::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	inline jint AssistStructure_ViewNode::getTextStyle() const
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	inline jint AssistStructure_ViewNode::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	inline android::graphics::Matrix AssistStructure_ViewNode::getTransformation() const
	{
		return callObjectMethod(
			"getTransformation",
			"()Landroid/graphics/Matrix;"
		);
	}
	inline jint AssistStructure_ViewNode::getVisibility() const
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	inline JString AssistStructure_ViewNode::getWebDomain() const
	{
		return callObjectMethod(
			"getWebDomain",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssistStructure_ViewNode::getWebScheme() const
	{
		return callObjectMethod(
			"getWebScheme",
			"()Ljava/lang/String;"
		);
	}
	inline jint AssistStructure_ViewNode::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean AssistStructure_ViewNode::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isActivated() const
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isAssistBlocked() const
	{
		return callMethod<jboolean>(
			"isAssistBlocked",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isCheckable() const
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isClickable() const
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isContextClickable() const
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isLongClickable() const
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline jboolean AssistStructure_ViewNode::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace android::app::assist

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::assist;
#endif
