#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../graphics/Matrix.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../view/ViewStructure_HtmlInfo.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./AssistStructure_ViewNode.hpp"

namespace android::app::assist
{
	// Fields
	jint AssistStructure_ViewNode::TEXT_COLOR_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_COLOR_UNDEFINED"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_BOLD()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_BOLD"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_ITALIC()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_ITALIC"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_STRIKE_THRU()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_STRIKE_THRU"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_UNDERLINE()
	{
		return getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_UNDERLINE"
		);
	}
	
	// QJniObject forward
	AssistStructure_ViewNode::AssistStructure_ViewNode(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jfloat AssistStructure_ViewNode::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	JArray AssistStructure_ViewNode::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	android::view::autofill::AutofillId AssistStructure_ViewNode::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	JArray AssistStructure_ViewNode::getAutofillOptions() const
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		);
	}
	jint AssistStructure_ViewNode::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue AssistStructure_ViewNode::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::app::assist::AssistStructure_ViewNode AssistStructure_ViewNode::getChildAt(jint arg0) const
	{
		return callObjectMethod(
			"getChildAt",
			"(I)Landroid/app/assist/AssistStructure$ViewNode;",
			arg0
		);
	}
	jint AssistStructure_ViewNode::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jfloat AssistStructure_ViewNode::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	android::os::Bundle AssistStructure_ViewNode::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint AssistStructure_ViewNode::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getHint() const
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getHintIdEntry() const
	{
		return callObjectMethod(
			"getHintIdEntry",
			"()Ljava/lang/String;"
		);
	}
	android::view::ViewStructure_HtmlInfo AssistStructure_ViewNode::getHtmlInfo() const
	{
		return callObjectMethod(
			"getHtmlInfo",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
	jint AssistStructure_ViewNode::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getIdEntry() const
	{
		return callObjectMethod(
			"getIdEntry",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getIdPackage() const
	{
		return callObjectMethod(
			"getIdPackage",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getIdType() const
	{
		return callObjectMethod(
			"getIdType",
			"()Ljava/lang/String;"
		);
	}
	jint AssistStructure_ViewNode::getImportantForAutofill() const
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	android::os::LocaleList AssistStructure_ViewNode::getLocaleList() const
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextEms() const
	{
		return callMethod<jint>(
			"getMaxTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextLength() const
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMinTextEms() const
	{
		return callMethod<jint>(
			"getMinTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollX() const
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollY() const
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AssistStructure_ViewNode::getTextBackgroundColor() const
	{
		return callMethod<jint>(
			"getTextBackgroundColor",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextColor() const
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getTextIdEntry() const
	{
		return callObjectMethod(
			"getTextIdEntry",
			"()Ljava/lang/String;"
		);
	}
	JIntArray AssistStructure_ViewNode::getTextLineBaselines() const
	{
		return callObjectMethod(
			"getTextLineBaselines",
			"()[I"
		);
	}
	JIntArray AssistStructure_ViewNode::getTextLineCharOffsets() const
	{
		return callObjectMethod(
			"getTextLineCharOffsets",
			"()[I"
		);
	}
	jint AssistStructure_ViewNode::getTextSelectionEnd() const
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextSelectionStart() const
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jfloat AssistStructure_ViewNode::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint AssistStructure_ViewNode::getTextStyle() const
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	android::graphics::Matrix AssistStructure_ViewNode::getTransformation() const
	{
		return callObjectMethod(
			"getTransformation",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint AssistStructure_ViewNode::getVisibility() const
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getWebDomain() const
	{
		return callObjectMethod(
			"getWebDomain",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getWebScheme() const
	{
		return callObjectMethod(
			"getWebScheme",
			"()Ljava/lang/String;"
		);
	}
	jint AssistStructure_ViewNode::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean AssistStructure_ViewNode::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isActivated() const
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isAssistBlocked() const
	{
		return callMethod<jboolean>(
			"isAssistBlocked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isCheckable() const
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isClickable() const
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isContextClickable() const
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isLongClickable() const
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace android::app::assist

