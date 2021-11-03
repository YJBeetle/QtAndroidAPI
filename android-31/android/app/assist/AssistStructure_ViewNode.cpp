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
	jfloat AssistStructure_ViewNode::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	JArray AssistStructure_ViewNode::getAutofillHints()
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	android::view::autofill::AutofillId AssistStructure_ViewNode::getAutofillId()
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	JArray AssistStructure_ViewNode::getAutofillOptions()
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		);
	}
	jint AssistStructure_ViewNode::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue AssistStructure_ViewNode::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::app::assist::AssistStructure_ViewNode AssistStructure_ViewNode::getChildAt(jint arg0)
	{
		return callObjectMethod(
			"getChildAt",
			"(I)Landroid/app/assist/AssistStructure$ViewNode;",
			arg0
		);
	}
	jint AssistStructure_ViewNode::getChildCount()
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jfloat AssistStructure_ViewNode::getElevation()
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	android::os::Bundle AssistStructure_ViewNode::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint AssistStructure_ViewNode::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getHint()
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getHintIdEntry()
	{
		return callObjectMethod(
			"getHintIdEntry",
			"()Ljava/lang/String;"
		);
	}
	android::view::ViewStructure_HtmlInfo AssistStructure_ViewNode::getHtmlInfo()
	{
		return callObjectMethod(
			"getHtmlInfo",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
	jint AssistStructure_ViewNode::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getIdEntry()
	{
		return callObjectMethod(
			"getIdEntry",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getIdPackage()
	{
		return callObjectMethod(
			"getIdPackage",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getIdType()
	{
		return callObjectMethod(
			"getIdType",
			"()Ljava/lang/String;"
		);
	}
	jint AssistStructure_ViewNode::getImportantForAutofill()
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getLeft()
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	android::os::LocaleList AssistStructure_ViewNode::getLocaleList()
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextEms()
	{
		return callMethod<jint>(
			"getMaxTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextLength()
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMinTextEms()
	{
		return callMethod<jint>(
			"getMinTextEms",
			"()I"
		);
	}
	JArray AssistStructure_ViewNode::getReceiveContentMimeTypes()
	{
		return callObjectMethod(
			"getReceiveContentMimeTypes",
			"()[Ljava/lang/String;"
		);
	}
	jint AssistStructure_ViewNode::getScrollX()
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollY()
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AssistStructure_ViewNode::getTextBackgroundColor()
	{
		return callMethod<jint>(
			"getTextBackgroundColor",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextColor()
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getTextIdEntry()
	{
		return callObjectMethod(
			"getTextIdEntry",
			"()Ljava/lang/String;"
		);
	}
	JIntArray AssistStructure_ViewNode::getTextLineBaselines()
	{
		return callObjectMethod(
			"getTextLineBaselines",
			"()[I"
		);
	}
	JIntArray AssistStructure_ViewNode::getTextLineCharOffsets()
	{
		return callObjectMethod(
			"getTextLineCharOffsets",
			"()[I"
		);
	}
	jint AssistStructure_ViewNode::getTextSelectionEnd()
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextSelectionStart()
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jfloat AssistStructure_ViewNode::getTextSize()
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint AssistStructure_ViewNode::getTextStyle()
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTop()
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	android::graphics::Matrix AssistStructure_ViewNode::getTransformation()
	{
		return callObjectMethod(
			"getTransformation",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint AssistStructure_ViewNode::getVisibility()
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	JString AssistStructure_ViewNode::getWebDomain()
	{
		return callObjectMethod(
			"getWebDomain",
			"()Ljava/lang/String;"
		);
	}
	JString AssistStructure_ViewNode::getWebScheme()
	{
		return callObjectMethod(
			"getWebScheme",
			"()Ljava/lang/String;"
		);
	}
	jint AssistStructure_ViewNode::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean AssistStructure_ViewNode::isAccessibilityFocused()
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isActivated()
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isAssistBlocked()
	{
		return callMethod<jboolean>(
			"isAssistBlocked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isCheckable()
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isClickable()
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isContextClickable()
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocusable()
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isLongClickable()
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isSelected()
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace android::app::assist

