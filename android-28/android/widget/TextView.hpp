#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::text
{
	class Editable_Factory;
}
namespace android::text
{
	class Layout;
}
namespace android::text
{
	class PrecomputedText_Params;
}
namespace android::text
{
	class Spannable_Factory;
}
namespace android::text
{
	class TextPaint;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}
namespace android::view
{
	class DragEvent;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class PointerIcon;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::view::inputmethod
{
	class CompletionInfo;
}
namespace android::view::inputmethod
{
	class CorrectionInfo;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}
namespace android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace android::widget
{
	class Scroller;
}
namespace android::widget
{
	class TextView_BufferType;
}
namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class Locale;
}

namespace android::widget
{
	class TextView : public android::view::View
	{
	public:
		// Fields
		static jint AUTO_SIZE_TEXT_TYPE_NONE();
		static jint AUTO_SIZE_TEXT_TYPE_UNIFORM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		TextView(QAndroidJniObject obj);
		
		// Constructors
		TextView(android::content::Context arg0);
		TextView(android::content::Context arg0, __JniBaseClass arg1);
		TextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		TextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, android::os::Bundle arg2);
		void addTextChangedListener(__JniBaseClass arg0);
		void append(jstring arg0);
		void append(jstring arg0, jint arg1, jint arg2);
		void autofill(android::view::autofill::AutofillValue arg0);
		void beginBatchEdit();
		jboolean bringPointIntoView(jint arg0);
		void cancelLongPress();
		void clearComposingText();
		void computeScroll();
		void debug(jint arg0);
		jboolean didTouchFocusSelect();
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void endBatchEdit();
		jboolean extractText(android::view::inputmethod::ExtractedTextRequest arg0, android::view::inputmethod::ExtractedText arg1);
		void findViewsWithText(java::util::ArrayList arg0, jstring arg1, jint arg2);
		jstring getAccessibilityClassName();
		jint getAutoLinkMask();
		jint getAutoSizeMaxTextSize();
		jint getAutoSizeMinTextSize();
		jint getAutoSizeStepGranularity();
		jintArray getAutoSizeTextAvailableSizes();
		jint getAutoSizeTextType();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		jint getBaseline();
		jint getBreakStrategy();
		jint getCompoundDrawablePadding();
		android::content::res::ColorStateList getCompoundDrawableTintList();
		android::graphics::PorterDuff_Mode getCompoundDrawableTintMode();
		jarray getCompoundDrawables();
		jarray getCompoundDrawablesRelative();
		jint getCompoundPaddingBottom();
		jint getCompoundPaddingEnd();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jint getCompoundPaddingStart();
		jint getCompoundPaddingTop();
		jint getCurrentHintTextColor();
		jint getCurrentTextColor();
		__JniBaseClass getCustomInsertionActionModeCallback();
		__JniBaseClass getCustomSelectionActionModeCallback();
		__JniBaseClass getEditableText();
		android::text::TextUtils_TruncateAt getEllipsize();
		jstring getError();
		jint getExtendedPaddingBottom();
		jint getExtendedPaddingTop();
		jarray getFilters();
		jint getFirstBaselineToTopHeight();
		void getFocusedRect(android::graphics::Rect arg0);
		jstring getFontFeatureSettings();
		jstring getFontVariationSettings();
		jboolean getFreezesText();
		jint getGravity();
		jint getHighlightColor();
		jstring getHint();
		android::content::res::ColorStateList getHintTextColors();
		jint getHyphenationFrequency();
		jint getImeActionId();
		jstring getImeActionLabel();
		android::os::LocaleList getImeHintLocales();
		jint getImeOptions();
		jboolean getIncludeFontPadding();
		android::os::Bundle getInputExtras(jboolean arg0);
		jint getInputType();
		jint getJustificationMode();
		__JniBaseClass getKeyListener();
		jint getLastBaselineToBottomHeight();
		android::text::Layout getLayout();
		jfloat getLetterSpacing();
		jint getLineBounds(jint arg0, android::graphics::Rect arg1);
		jint getLineCount();
		jint getLineHeight();
		jfloat getLineSpacingExtra();
		jfloat getLineSpacingMultiplier();
		android::content::res::ColorStateList getLinkTextColors();
		jboolean getLinksClickable();
		jint getMarqueeRepeatLimit();
		jint getMaxEms();
		jint getMaxHeight();
		jint getMaxLines();
		jint getMaxWidth();
		jint getMinEms();
		jint getMinHeight();
		jint getMinLines();
		jint getMinWidth();
		__JniBaseClass getMovementMethod();
		jint getOffsetForPosition(jfloat arg0, jfloat arg1);
		android::text::TextPaint getPaint();
		jint getPaintFlags();
		jstring getPrivateImeOptions();
		jint getSelectionEnd();
		jint getSelectionStart();
		jint getShadowColor();
		jfloat getShadowDx();
		jfloat getShadowDy();
		jfloat getShadowRadius();
		jboolean getShowSoftInputOnFocus();
		jstring getText();
		__JniBaseClass getTextClassifier();
		android::content::res::ColorStateList getTextColors();
		java::util::Locale getTextLocale();
		android::os::LocaleList getTextLocales();
		android::text::PrecomputedText_Params getTextMetricsParams();
		jfloat getTextScaleX();
		jfloat getTextSize();
		jint getTotalPaddingBottom();
		jint getTotalPaddingEnd();
		jint getTotalPaddingLeft();
		jint getTotalPaddingRight();
		jint getTotalPaddingStart();
		jint getTotalPaddingTop();
		__JniBaseClass getTransformationMethod();
		android::graphics::Typeface getTypeface();
		jarray getUrls();
		jboolean hasOverlappingRendering();
		jboolean hasSelection();
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isAllCaps();
		jboolean isCursorVisible();
		jboolean isElegantTextHeight();
		jboolean isFallbackLineSpacing();
		jboolean isInputMethodTarget();
		jboolean isSuggestionsEnabled();
		jboolean isTextSelectable();
		void jumpDrawablesToCurrentState();
		jint length();
		jboolean moveCursorToVisibleOffset();
		void onBeginBatchEdit();
		jboolean onCheckIsTextEditor();
		void onCommitCompletion(android::view::inputmethod::CompletionInfo arg0);
		void onCommitCorrection(android::view::inputmethod::CorrectionInfo arg0);
		__JniBaseClass onCreateInputConnection(android::view::inputmethod::EditorInfo arg0);
		jboolean onDragEvent(android::view::DragEvent arg0);
		void onEditorAction(jint arg0);
		void onEndBatchEdit();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean onPreDraw();
		jboolean onPrivateIMECommand(jstring arg0, android::os::Bundle arg1);
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		void onProvideStructure(android::view::ViewStructure arg0);
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		__JniBaseClass onSaveInstanceState();
		void onScreenStateChanged(jint arg0);
		jboolean onTextContextMenuItem(jint arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean performLongClick();
		void removeTextChangedListener(__JniBaseClass arg0);
		void sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0);
		void setAllCaps(jboolean arg0);
		void setAutoLinkMask(jint arg0);
		void setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3);
		void setAutoSizeTextTypeUniformWithPresetSizes(jintArray arg0, jint arg1);
		void setAutoSizeTextTypeWithDefaults(jint arg0);
		void setBreakStrategy(jint arg0);
		void setCompoundDrawablePadding(jint arg0);
		void setCompoundDrawableTintList(android::content::res::ColorStateList arg0);
		void setCompoundDrawableTintMode(android::graphics::PorterDuff_Mode arg0);
		void setCompoundDrawables(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelative(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelativeWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCompoundDrawablesWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCursorVisible(jboolean arg0);
		void setCustomInsertionActionModeCallback(__JniBaseClass arg0);
		void setCustomSelectionActionModeCallback(__JniBaseClass arg0);
		void setEditableFactory(android::text::Editable_Factory arg0);
		void setElegantTextHeight(jboolean arg0);
		void setEllipsize(android::text::TextUtils_TruncateAt arg0);
		void setEms(jint arg0);
		void setEnabled(jboolean arg0);
		void setError(jstring arg0);
		void setError(jstring arg0, android::graphics::drawable::Drawable arg1);
		void setExtractedText(android::view::inputmethod::ExtractedText arg0);
		void setFallbackLineSpacing(jboolean arg0);
		void setFilters(jarray arg0);
		void setFirstBaselineToTopHeight(jint arg0);
		void setFontFeatureSettings(jstring arg0);
		jboolean setFontVariationSettings(jstring arg0);
		void setFreezesText(jboolean arg0);
		void setGravity(jint arg0);
		void setHeight(jint arg0);
		void setHighlightColor(jint arg0);
		void setHint(jint arg0);
		void setHint(jstring arg0);
		void setHintTextColor(android::content::res::ColorStateList arg0);
		void setHintTextColor(jint arg0);
		void setHorizontallyScrolling(jboolean arg0);
		void setHyphenationFrequency(jint arg0);
		void setImeActionLabel(jstring arg0, jint arg1);
		void setImeHintLocales(android::os::LocaleList arg0);
		void setImeOptions(jint arg0);
		void setIncludeFontPadding(jboolean arg0);
		void setInputExtras(jint arg0);
		void setInputType(jint arg0);
		void setJustificationMode(jint arg0);
		void setKeyListener(__JniBaseClass arg0);
		void setLastBaselineToBottomHeight(jint arg0);
		void setLetterSpacing(jfloat arg0);
		void setLineHeight(jint arg0);
		void setLineSpacing(jfloat arg0, jfloat arg1);
		void setLines(jint arg0);
		void setLinkTextColor(android::content::res::ColorStateList arg0);
		void setLinkTextColor(jint arg0);
		void setLinksClickable(jboolean arg0);
		void setMarqueeRepeatLimit(jint arg0);
		void setMaxEms(jint arg0);
		void setMaxHeight(jint arg0);
		void setMaxLines(jint arg0);
		void setMaxWidth(jint arg0);
		void setMinEms(jint arg0);
		void setMinHeight(jint arg0);
		void setMinLines(jint arg0);
		void setMinWidth(jint arg0);
		void setMovementMethod(__JniBaseClass arg0);
		void setOnEditorActionListener(__JniBaseClass arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaintFlags(jint arg0);
		void setPrivateImeOptions(jstring arg0);
		void setRawInputType(jint arg0);
		void setScroller(android::widget::Scroller arg0);
		void setSelectAllOnFocus(jboolean arg0);
		void setSelected(jboolean arg0);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		void setShowSoftInputOnFocus(jboolean arg0);
		void setSingleLine();
		void setSingleLine(jboolean arg0);
		void setSpannableFactory(android::text::Spannable_Factory arg0);
		void setText(jint arg0);
		void setText(jstring arg0);
		void setText(jint arg0, android::widget::TextView_BufferType arg1);
		void setText(jstring arg0, android::widget::TextView_BufferType arg1);
		void setText(jcharArray arg0, jint arg1, jint arg2);
		void setTextAppearance(jint arg0);
		void setTextAppearance(android::content::Context arg0, jint arg1);
		void setTextClassifier(__JniBaseClass arg0);
		void setTextColor(android::content::res::ColorStateList arg0);
		void setTextColor(jint arg0);
		void setTextIsSelectable(jboolean arg0);
		void setTextKeepState(jstring arg0);
		void setTextKeepState(jstring arg0, android::widget::TextView_BufferType arg1);
		void setTextLocale(java::util::Locale arg0);
		void setTextLocales(android::os::LocaleList arg0);
		void setTextMetricsParams(android::text::PrecomputedText_Params arg0);
		void setTextScaleX(jfloat arg0);
		void setTextSize(jfloat arg0);
		void setTextSize(jint arg0, jfloat arg1);
		void setTransformationMethod(__JniBaseClass arg0);
		void setTypeface(android::graphics::Typeface arg0);
		void setTypeface(android::graphics::Typeface arg0, jint arg1);
		void setWidth(jint arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
	};
} // namespace android::widget
