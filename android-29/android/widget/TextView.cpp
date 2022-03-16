#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Typeface.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/LocaleList.hpp"
#include "../text/Editable_Factory.hpp"
#include "../text/Layout.hpp"
#include "../text/PrecomputedText_Params.hpp"
#include "../text/Spannable_Factory.hpp"
#include "../text/TextPaint.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "../view/DragEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/View.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "../view/inputmethod/CorrectionInfo.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../view/inputmethod/ExtractedTextRequest.hpp"
#include "./Scroller.hpp"
#include "./TextView_BufferType.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../../java/util/Locale.hpp"
#include "./TextView.hpp"

namespace android::widget
{
	// Fields
	jint TextView::AUTO_SIZE_TEXT_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_NONE"
		);
	}
	jint TextView::AUTO_SIZE_TEXT_TYPE_UNIFORM()
	{
		return getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_UNIFORM"
		);
	}
	
	// Constructors
	TextView::TextView(android::content::Context arg0)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TextView::TextView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TextView::TextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TextView::TextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void TextView::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void TextView::addTextChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	void TextView::append(JString arg0) const
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextView::append(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void TextView::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void TextView::beginBatchEdit() const
	{
		callMethod<void>(
			"beginBatchEdit",
			"()V"
		);
	}
	jboolean TextView::bringPointIntoView(jint arg0) const
	{
		return callMethod<jboolean>(
			"bringPointIntoView",
			"(I)Z",
			arg0
		);
	}
	void TextView::cancelLongPress() const
	{
		callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	void TextView::clearComposingText() const
	{
		callMethod<void>(
			"clearComposingText",
			"()V"
		);
	}
	void TextView::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	void TextView::debug(jint arg0) const
	{
		callMethod<void>(
			"debug",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::didTouchFocusSelect() const
	{
		return callMethod<jboolean>(
			"didTouchFocusSelect",
			"()Z"
		);
	}
	void TextView::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::endBatchEdit() const
	{
		callMethod<void>(
			"endBatchEdit",
			"()V"
		);
	}
	jboolean TextView::extractText(android::view::inputmethod::ExtractedTextRequest arg0, android::view::inputmethod::ExtractedText arg1) const
	{
		return callMethod<jboolean>(
			"extractText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;Landroid/view/inputmethod/ExtractedText;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void TextView::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	JString TextView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TextView::getAutoLinkMask() const
	{
		return callMethod<jint>(
			"getAutoLinkMask",
			"()I"
		);
	}
	jint TextView::getAutoSizeMaxTextSize() const
	{
		return callMethod<jint>(
			"getAutoSizeMaxTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeMinTextSize() const
	{
		return callMethod<jint>(
			"getAutoSizeMinTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeStepGranularity() const
	{
		return callMethod<jint>(
			"getAutoSizeStepGranularity",
			"()I"
		);
	}
	JIntArray TextView::getAutoSizeTextAvailableSizes() const
	{
		return callObjectMethod(
			"getAutoSizeTextAvailableSizes",
			"()[I"
		);
	}
	jint TextView::getAutoSizeTextType() const
	{
		return callMethod<jint>(
			"getAutoSizeTextType",
			"()I"
		);
	}
	jint TextView::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue TextView::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint TextView::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint TextView::getBreakStrategy() const
	{
		return callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint TextView::getCompoundDrawablePadding() const
	{
		return callMethod<jint>(
			"getCompoundDrawablePadding",
			"()I"
		);
	}
	android::graphics::BlendMode TextView::getCompoundDrawableTintBlendMode() const
	{
		return callObjectMethod(
			"getCompoundDrawableTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList TextView::getCompoundDrawableTintList() const
	{
		return callObjectMethod(
			"getCompoundDrawableTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode TextView::getCompoundDrawableTintMode() const
	{
		return callObjectMethod(
			"getCompoundDrawableTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	JArray TextView::getCompoundDrawables() const
	{
		return callObjectMethod(
			"getCompoundDrawables",
			"()[Landroid/graphics/drawable/Drawable;"
		);
	}
	JArray TextView::getCompoundDrawablesRelative() const
	{
		return callObjectMethod(
			"getCompoundDrawablesRelative",
			"()[Landroid/graphics/drawable/Drawable;"
		);
	}
	jint TextView::getCompoundPaddingBottom() const
	{
		return callMethod<jint>(
			"getCompoundPaddingBottom",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingEnd() const
	{
		return callMethod<jint>(
			"getCompoundPaddingEnd",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingLeft() const
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingRight() const
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingStart() const
	{
		return callMethod<jint>(
			"getCompoundPaddingStart",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingTop() const
	{
		return callMethod<jint>(
			"getCompoundPaddingTop",
			"()I"
		);
	}
	jint TextView::getCurrentHintTextColor() const
	{
		return callMethod<jint>(
			"getCurrentHintTextColor",
			"()I"
		);
	}
	jint TextView::getCurrentTextColor() const
	{
		return callMethod<jint>(
			"getCurrentTextColor",
			"()I"
		);
	}
	JObject TextView::getCustomInsertionActionModeCallback() const
	{
		return callObjectMethod(
			"getCustomInsertionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	JObject TextView::getCustomSelectionActionModeCallback() const
	{
		return callObjectMethod(
			"getCustomSelectionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	JObject TextView::getEditableText() const
	{
		return callObjectMethod(
			"getEditableText",
			"()Landroid/text/Editable;"
		);
	}
	android::text::TextUtils_TruncateAt TextView::getEllipsize() const
	{
		return callObjectMethod(
			"getEllipsize",
			"()Landroid/text/TextUtils$TruncateAt;"
		);
	}
	JString TextView::getError() const
	{
		return callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TextView::getExtendedPaddingBottom() const
	{
		return callMethod<jint>(
			"getExtendedPaddingBottom",
			"()I"
		);
	}
	jint TextView::getExtendedPaddingTop() const
	{
		return callMethod<jint>(
			"getExtendedPaddingTop",
			"()I"
		);
	}
	JArray TextView::getFilters() const
	{
		return callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		);
	}
	jint TextView::getFirstBaselineToTopHeight() const
	{
		return callMethod<jint>(
			"getFirstBaselineToTopHeight",
			"()I"
		);
	}
	void TextView::getFocusedRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	JString TextView::getFontFeatureSettings() const
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		);
	}
	JString TextView::getFontVariationSettings() const
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		);
	}
	jboolean TextView::getFreezesText() const
	{
		return callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	jint TextView::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint TextView::getHighlightColor() const
	{
		return callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	JString TextView::getHint() const
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::content::res::ColorStateList TextView::getHintTextColors() const
	{
		return callObjectMethod(
			"getHintTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextView::getHyphenationFrequency() const
	{
		return callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	jint TextView::getImeActionId() const
	{
		return callMethod<jint>(
			"getImeActionId",
			"()I"
		);
	}
	JString TextView::getImeActionLabel() const
	{
		return callObjectMethod(
			"getImeActionLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::LocaleList TextView::getImeHintLocales() const
	{
		return callObjectMethod(
			"getImeHintLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextView::getImeOptions() const
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jboolean TextView::getIncludeFontPadding() const
	{
		return callMethod<jboolean>(
			"getIncludeFontPadding",
			"()Z"
		);
	}
	android::os::Bundle TextView::getInputExtras(jboolean arg0) const
	{
		return callObjectMethod(
			"getInputExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	jint TextView::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint TextView::getJustificationMode() const
	{
		return callMethod<jint>(
			"getJustificationMode",
			"()I"
		);
	}
	JObject TextView::getKeyListener() const
	{
		return callObjectMethod(
			"getKeyListener",
			"()Landroid/text/method/KeyListener;"
		);
	}
	jint TextView::getLastBaselineToBottomHeight() const
	{
		return callMethod<jint>(
			"getLastBaselineToBottomHeight",
			"()I"
		);
	}
	android::text::Layout TextView::getLayout() const
	{
		return callObjectMethod(
			"getLayout",
			"()Landroid/text/Layout;"
		);
	}
	jfloat TextView::getLetterSpacing() const
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	jint TextView::getLineBounds(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.object()
		);
	}
	jint TextView::getLineCount() const
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint TextView::getLineHeight() const
	{
		return callMethod<jint>(
			"getLineHeight",
			"()I"
		);
	}
	jfloat TextView::getLineSpacingExtra() const
	{
		return callMethod<jfloat>(
			"getLineSpacingExtra",
			"()F"
		);
	}
	jfloat TextView::getLineSpacingMultiplier() const
	{
		return callMethod<jfloat>(
			"getLineSpacingMultiplier",
			"()F"
		);
	}
	android::content::res::ColorStateList TextView::getLinkTextColors() const
	{
		return callObjectMethod(
			"getLinkTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jboolean TextView::getLinksClickable() const
	{
		return callMethod<jboolean>(
			"getLinksClickable",
			"()Z"
		);
	}
	jint TextView::getMarqueeRepeatLimit() const
	{
		return callMethod<jint>(
			"getMarqueeRepeatLimit",
			"()I"
		);
	}
	jint TextView::getMaxEms() const
	{
		return callMethod<jint>(
			"getMaxEms",
			"()I"
		);
	}
	jint TextView::getMaxHeight() const
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint TextView::getMaxLines() const
	{
		return callMethod<jint>(
			"getMaxLines",
			"()I"
		);
	}
	jint TextView::getMaxWidth() const
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jint TextView::getMinEms() const
	{
		return callMethod<jint>(
			"getMinEms",
			"()I"
		);
	}
	jint TextView::getMinHeight() const
	{
		return callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	jint TextView::getMinLines() const
	{
		return callMethod<jint>(
			"getMinLines",
			"()I"
		);
	}
	jint TextView::getMinWidth() const
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	JObject TextView::getMovementMethod() const
	{
		return callObjectMethod(
			"getMovementMethod",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jint TextView::getOffsetForPosition(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jint>(
			"getOffsetForPosition",
			"(FF)I",
			arg0,
			arg1
		);
	}
	android::text::TextPaint TextView::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint TextView::getPaintFlags() const
	{
		return callMethod<jint>(
			"getPaintFlags",
			"()I"
		);
	}
	JString TextView::getPrivateImeOptions() const
	{
		return callObjectMethod(
			"getPrivateImeOptions",
			"()Ljava/lang/String;"
		);
	}
	jint TextView::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint TextView::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jint TextView::getShadowColor() const
	{
		return callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	jfloat TextView::getShadowDx() const
	{
		return callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	jfloat TextView::getShadowDy() const
	{
		return callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	jfloat TextView::getShadowRadius() const
	{
		return callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	jboolean TextView::getShowSoftInputOnFocus() const
	{
		return callMethod<jboolean>(
			"getShowSoftInputOnFocus",
			"()Z"
		);
	}
	JString TextView::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject TextView::getTextClassifier() const
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	android::content::res::ColorStateList TextView::getTextColors() const
	{
		return callObjectMethod(
			"getTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextCursorDrawable() const
	{
		return callObjectMethod(
			"getTextCursorDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	JObject TextView::getTextDirectionHeuristic() const
	{
		return callObjectMethod(
			"getTextDirectionHeuristic",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	java::util::Locale TextView::getTextLocale() const
	{
		return callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::os::LocaleList TextView::getTextLocales() const
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	android::text::PrecomputedText_Params TextView::getTextMetricsParams() const
	{
		return callObjectMethod(
			"getTextMetricsParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	jfloat TextView::getTextScaleX() const
	{
		return callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextSelectHandle() const
	{
		return callObjectMethod(
			"getTextSelectHandle",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextSelectHandleLeft() const
	{
		return callObjectMethod(
			"getTextSelectHandleLeft",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextSelectHandleRight() const
	{
		return callObjectMethod(
			"getTextSelectHandleRight",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jfloat TextView::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint TextView::getTotalPaddingBottom() const
	{
		return callMethod<jint>(
			"getTotalPaddingBottom",
			"()I"
		);
	}
	jint TextView::getTotalPaddingEnd() const
	{
		return callMethod<jint>(
			"getTotalPaddingEnd",
			"()I"
		);
	}
	jint TextView::getTotalPaddingLeft() const
	{
		return callMethod<jint>(
			"getTotalPaddingLeft",
			"()I"
		);
	}
	jint TextView::getTotalPaddingRight() const
	{
		return callMethod<jint>(
			"getTotalPaddingRight",
			"()I"
		);
	}
	jint TextView::getTotalPaddingStart() const
	{
		return callMethod<jint>(
			"getTotalPaddingStart",
			"()I"
		);
	}
	jint TextView::getTotalPaddingTop() const
	{
		return callMethod<jint>(
			"getTotalPaddingTop",
			"()I"
		);
	}
	JObject TextView::getTransformationMethod() const
	{
		return callObjectMethod(
			"getTransformationMethod",
			"()Landroid/text/method/TransformationMethod;"
		);
	}
	android::graphics::Typeface TextView::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	JArray TextView::getUrls() const
	{
		return callObjectMethod(
			"getUrls",
			"()[Landroid/text/style/URLSpan;"
		);
	}
	jboolean TextView::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean TextView::hasSelection() const
	{
		return callMethod<jboolean>(
			"hasSelection",
			"()Z"
		);
	}
	void TextView::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean TextView::isAllCaps() const
	{
		return callMethod<jboolean>(
			"isAllCaps",
			"()Z"
		);
	}
	jboolean TextView::isCursorVisible() const
	{
		return callMethod<jboolean>(
			"isCursorVisible",
			"()Z"
		);
	}
	jboolean TextView::isElegantTextHeight() const
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jboolean TextView::isFallbackLineSpacing() const
	{
		return callMethod<jboolean>(
			"isFallbackLineSpacing",
			"()Z"
		);
	}
	jboolean TextView::isHorizontallyScrollable() const
	{
		return callMethod<jboolean>(
			"isHorizontallyScrollable",
			"()Z"
		);
	}
	jboolean TextView::isInputMethodTarget() const
	{
		return callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	jboolean TextView::isSingleLine() const
	{
		return callMethod<jboolean>(
			"isSingleLine",
			"()Z"
		);
	}
	jboolean TextView::isSuggestionsEnabled() const
	{
		return callMethod<jboolean>(
			"isSuggestionsEnabled",
			"()Z"
		);
	}
	jboolean TextView::isTextSelectable() const
	{
		return callMethod<jboolean>(
			"isTextSelectable",
			"()Z"
		);
	}
	void TextView::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jint TextView::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean TextView::moveCursorToVisibleOffset() const
	{
		return callMethod<jboolean>(
			"moveCursorToVisibleOffset",
			"()Z"
		);
	}
	void TextView::onBeginBatchEdit() const
	{
		callMethod<void>(
			"onBeginBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onCheckIsTextEditor() const
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	void TextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0) const
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	void TextView::onCommitCorrection(android::view::inputmethod::CorrectionInfo arg0) const
	{
		callMethod<void>(
			"onCommitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)V",
			arg0.object()
		);
	}
	JObject TextView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	jboolean TextView::onDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void TextView::onEditorAction(jint arg0) const
	{
		callMethod<void>(
			"onEditorAction",
			"(I)V",
			arg0
		);
	}
	void TextView::onEndBatchEdit() const
	{
		callMethod<void>(
			"onEndBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TextView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean TextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onPreDraw() const
	{
		return callMethod<jboolean>(
			"onPreDraw",
			"()Z"
		);
	}
	jboolean TextView::onPrivateIMECommand(JString arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::view::PointerIcon TextView::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void TextView::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void TextView::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	JObject TextView::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void TextView::onScreenStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::onTextContextMenuItem(jint arg0) const
	{
		return callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	jboolean TextView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TextView::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void TextView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void TextView::removeTextChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	void TextView::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void TextView::setAllCaps(jboolean arg0) const
	{
		callMethod<void>(
			"setAllCaps",
			"(Z)V",
			arg0
		);
	}
	void TextView::setAutoLinkMask(jint arg0) const
	{
		callMethod<void>(
			"setAutoLinkMask",
			"(I)V",
			arg0
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setAutoSizeTextTypeUniformWithConfiguration",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithPresetSizes(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"setAutoSizeTextTypeUniformWithPresetSizes",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void TextView::setAutoSizeTextTypeWithDefaults(jint arg0) const
	{
		callMethod<void>(
			"setAutoSizeTextTypeWithDefaults",
			"(I)V",
			arg0
		);
	}
	void TextView::setBreakStrategy(jint arg0) const
	{
		callMethod<void>(
			"setBreakStrategy",
			"(I)V",
			arg0
		);
	}
	void TextView::setCompoundDrawablePadding(jint arg0) const
	{
		callMethod<void>(
			"setCompoundDrawablePadding",
			"(I)V",
			arg0
		);
	}
	void TextView::setCompoundDrawableTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setCompoundDrawableTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void TextView::setCompoundDrawableTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setCompoundDrawableTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setCompoundDrawableTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setCompoundDrawableTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void TextView::setCompoundDrawables(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
	{
		callMethod<void>(
			"setCompoundDrawables",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesRelative(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
	{
		callMethod<void>(
			"setCompoundDrawablesRelative",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
	{
		callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
	{
		callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCursorVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setCursorVisible",
			"(Z)V",
			arg0
		);
	}
	void TextView::setCustomInsertionActionModeCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCustomInsertionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.object()
		);
	}
	void TextView::setCustomSelectionActionModeCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCustomSelectionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.object()
		);
	}
	void TextView::setEditableFactory(android::text::Editable_Factory arg0) const
	{
		callMethod<void>(
			"setEditableFactory",
			"(Landroid/text/Editable$Factory;)V",
			arg0.object()
		);
	}
	void TextView::setElegantTextHeight(jboolean arg0) const
	{
		callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	void TextView::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.object()
		);
	}
	void TextView::setEms(jint arg0) const
	{
		callMethod<void>(
			"setEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TextView::setError(JString arg0) const
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextView::setError(JString arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TextView::setExtractedText(android::view::inputmethod::ExtractedText arg0) const
	{
		callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.object()
		);
	}
	void TextView::setFallbackLineSpacing(jboolean arg0) const
	{
		callMethod<void>(
			"setFallbackLineSpacing",
			"(Z)V",
			arg0
		);
	}
	void TextView::setFilters(JArray arg0) const
	{
		callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0.object<jarray>()
		);
	}
	void TextView::setFirstBaselineToTopHeight(jint arg0) const
	{
		callMethod<void>(
			"setFirstBaselineToTopHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setFontFeatureSettings(JString arg0) const
	{
		callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean TextView::setFontVariationSettings(JString arg0) const
	{
		return callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void TextView::setFreezesText(jboolean arg0) const
	{
		callMethod<void>(
			"setFreezesText",
			"(Z)V",
			arg0
		);
	}
	void TextView::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void TextView::setHeight(jint arg0) const
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setHighlightColor(jint arg0) const
	{
		callMethod<void>(
			"setHighlightColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(jint arg0) const
	{
		callMethod<void>(
			"setHint",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(JString arg0) const
	{
		callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextView::setHintTextColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setHintTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setHintTextColor(jint arg0) const
	{
		callMethod<void>(
			"setHintTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setHorizontallyScrolling(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontallyScrolling",
			"(Z)V",
			arg0
		);
	}
	void TextView::setHyphenationFrequency(jint arg0) const
	{
		callMethod<void>(
			"setHyphenationFrequency",
			"(I)V",
			arg0
		);
	}
	void TextView::setImeActionLabel(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void TextView::setImeHintLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setImeHintLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void TextView::setImeOptions(jint arg0) const
	{
		callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	void TextView::setIncludeFontPadding(jboolean arg0) const
	{
		callMethod<void>(
			"setIncludeFontPadding",
			"(Z)V",
			arg0
		);
	}
	void TextView::setInputExtras(jint arg0) const
	{
		callMethod<void>(
			"setInputExtras",
			"(I)V",
			arg0
		);
	}
	void TextView::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setJustificationMode(jint arg0) const
	{
		callMethod<void>(
			"setJustificationMode",
			"(I)V",
			arg0
		);
	}
	void TextView::setKeyListener(JObject arg0) const
	{
		callMethod<void>(
			"setKeyListener",
			"(Landroid/text/method/KeyListener;)V",
			arg0.object()
		);
	}
	void TextView::setLastBaselineToBottomHeight(jint arg0) const
	{
		callMethod<void>(
			"setLastBaselineToBottomHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLetterSpacing(jfloat arg0) const
	{
		callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	void TextView::setLineHeight(jint arg0) const
	{
		callMethod<void>(
			"setLineHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLineSpacing(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLineSpacing",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::setLines(jint arg0) const
	{
		callMethod<void>(
			"setLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinkTextColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setLinkTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setLinkTextColor(jint arg0) const
	{
		callMethod<void>(
			"setLinkTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinksClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLinksClickable",
			"(Z)V",
			arg0
		);
	}
	void TextView::setMarqueeRepeatLimit(jint arg0) const
	{
		callMethod<void>(
			"setMarqueeRepeatLimit",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxEms(jint arg0) const
	{
		callMethod<void>(
			"setMaxEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxHeight(jint arg0) const
	{
		callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxLines(jint arg0) const
	{
		callMethod<void>(
			"setMaxLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxWidth(jint arg0) const
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinEms(jint arg0) const
	{
		callMethod<void>(
			"setMinEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinHeight(jint arg0) const
	{
		callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinLines(jint arg0) const
	{
		callMethod<void>(
			"setMinLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinWidth(jint arg0) const
	{
		callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setMovementMethod(JObject arg0) const
	{
		callMethod<void>(
			"setMovementMethod",
			"(Landroid/text/method/MovementMethod;)V",
			arg0.object()
		);
	}
	void TextView::setOnEditorActionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnEditorActionListener",
			"(Landroid/widget/TextView$OnEditorActionListener;)V",
			arg0.object()
		);
	}
	void TextView::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setPaddingRelative",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setPaintFlags(jint arg0) const
	{
		callMethod<void>(
			"setPaintFlags",
			"(I)V",
			arg0
		);
	}
	void TextView::setPrivateImeOptions(JString arg0) const
	{
		callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TextView::setRawInputType(jint arg0) const
	{
		callMethod<void>(
			"setRawInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setScroller(android::widget::Scroller arg0) const
	{
		callMethod<void>(
			"setScroller",
			"(Landroid/widget/Scroller;)V",
			arg0.object()
		);
	}
	void TextView::setSelectAllOnFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setSelectAllOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void TextView::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3) const
	{
		callMethod<void>(
			"setShadowLayer",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setShowSoftInputOnFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setShowSoftInputOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSingleLine() const
	{
		callMethod<void>(
			"setSingleLine",
			"()V"
		);
	}
	void TextView::setSingleLine(jboolean arg0) const
	{
		callMethod<void>(
			"setSingleLine",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSpannableFactory(android::text::Spannable_Factory arg0) const
	{
		callMethod<void>(
			"setSpannableFactory",
			"(Landroid/text/Spannable$Factory;)V",
			arg0.object()
		);
	}
	void TextView::setText(jint arg0) const
	{
		callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void TextView::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextView::setText(jint arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setText",
			"(ILandroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.object()
		);
	}
	void TextView::setText(JString arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TextView::setText(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setText",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void TextView::setTextAppearance(jint arg0) const
	{
		callMethod<void>(
			"setTextAppearance",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void TextView::setTextClassifier(JObject arg0) const
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
	void TextView::setTextColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setTextColor(jint arg0) const
	{
		callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextCursorDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTextCursorDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextCursorDrawable(jint arg0) const
	{
		callMethod<void>(
			"setTextCursorDrawable",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextIsSelectable(jboolean arg0) const
	{
		callMethod<void>(
			"setTextIsSelectable",
			"(Z)V",
			arg0
		);
	}
	void TextView::setTextKeepState(JString arg0) const
	{
		callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextView::setTextKeepState(JString arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TextView::setTextLocale(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void TextView::setTextLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void TextView::setTextMetricsParams(android::text::PrecomputedText_Params arg0) const
	{
		callMethod<void>(
			"setTextMetricsParams",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.object()
		);
	}
	void TextView::setTextScaleX(jfloat arg0) const
	{
		callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	void TextView::setTextSelectHandle(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTextSelectHandle",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextSelectHandle(jint arg0) const
	{
		callMethod<void>(
			"setTextSelectHandle",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleLeft(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTextSelectHandleLeft",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextSelectHandleLeft(jint arg0) const
	{
		callMethod<void>(
			"setTextSelectHandleLeft",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleRight(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTextSelectHandleRight",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextSelectHandleRight(jint arg0) const
	{
		callMethod<void>(
			"setTextSelectHandleRight",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSize(jfloat arg0) const
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	void TextView::setTextSize(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setTextSize",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void TextView::setTransformationMethod(JObject arg0) const
	{
		callMethod<void>(
			"setTransformationMethod",
			"(Landroid/text/method/TransformationMethod;)V",
			arg0.object()
		);
	}
	void TextView::setTypeface(android::graphics::Typeface arg0) const
	{
		callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
	void TextView::setTypeface(android::graphics::Typeface arg0, jint arg1) const
	{
		callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.object(),
			arg1
		);
	}
	void TextView::setWidth(jint arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean TextView::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
} // namespace android::widget

