#pragma once

#ifndef ANDROID_WIDGET_TEXTVIEW
#define ANDROID_WIDGET_TEXTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::text
{
	class Editable_Factory;
}
namespace __jni_impl::android::text
{
	class Layout;
}
namespace __jni_impl::android::text
{
	class PrecomputedText_Params;
}
namespace __jni_impl::android::text
{
	class Spannable_Factory;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::view::inputmethod
{
	class CompletionInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class CorrectionInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace __jni_impl::android::widget
{
	class Scroller;
}
namespace __jni_impl::android::widget
{
	class TextView_BufferType;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::widget
{
	class TextView : public __jni_impl::android::view::View
	{
	public:
		// Fields
		static jint AUTO_SIZE_TEXT_TYPE_NONE();
		static jint AUTO_SIZE_TEXT_TYPE_UNIFORM();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void addTextChangedListener(__jni_impl::__JniBaseClass arg0);
		void append(jstring arg0);
		void append(const QString &arg0);
		void append(jstring arg0, jint arg1, jint arg2);
		void append(const QString &arg0, jint arg1, jint arg2);
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		void beginBatchEdit();
		jboolean bringPointIntoView(jint arg0);
		void cancelLongPress();
		void clearComposingText();
		void computeScroll();
		void debug(jint arg0);
		jboolean didTouchFocusSelect();
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void endBatchEdit();
		jboolean extractText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1);
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2);
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, const QString &arg1, jint arg2);
		jstring getAccessibilityClassName();
		jint getAutoLinkMask();
		jint getAutoSizeMaxTextSize();
		jint getAutoSizeMinTextSize();
		jint getAutoSizeStepGranularity();
		jintArray getAutoSizeTextAvailableSizes();
		jint getAutoSizeTextType();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		jint getBaseline();
		jint getBreakStrategy();
		jint getCompoundDrawablePadding();
		QAndroidJniObject getCompoundDrawableTintBlendMode();
		QAndroidJniObject getCompoundDrawableTintList();
		QAndroidJniObject getCompoundDrawableTintMode();
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
		QAndroidJniObject getCustomInsertionActionModeCallback();
		QAndroidJniObject getCustomSelectionActionModeCallback();
		QAndroidJniObject getEditableText();
		QAndroidJniObject getEllipsize();
		jstring getError();
		jint getExtendedPaddingBottom();
		jint getExtendedPaddingTop();
		jarray getFilters();
		jint getFirstBaselineToTopHeight();
		void getFocusedRect(__jni_impl::android::graphics::Rect arg0);
		jstring getFontFeatureSettings();
		jstring getFontVariationSettings();
		jboolean getFreezesText();
		jint getGravity();
		jint getHighlightColor();
		jstring getHint();
		QAndroidJniObject getHintTextColors();
		jint getHyphenationFrequency();
		jint getImeActionId();
		jstring getImeActionLabel();
		QAndroidJniObject getImeHintLocales();
		jint getImeOptions();
		jboolean getIncludeFontPadding();
		QAndroidJniObject getInputExtras(jboolean arg0);
		jint getInputType();
		jint getJustificationMode();
		QAndroidJniObject getKeyListener();
		jint getLastBaselineToBottomHeight();
		QAndroidJniObject getLayout();
		jfloat getLetterSpacing();
		jint getLineBounds(jint arg0, __jni_impl::android::graphics::Rect arg1);
		jint getLineCount();
		jint getLineHeight();
		jfloat getLineSpacingExtra();
		jfloat getLineSpacingMultiplier();
		QAndroidJniObject getLinkTextColors();
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
		QAndroidJniObject getMovementMethod();
		jint getOffsetForPosition(jfloat arg0, jfloat arg1);
		QAndroidJniObject getPaint();
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
		QAndroidJniObject getTextClassifier();
		QAndroidJniObject getTextColors();
		QAndroidJniObject getTextCursorDrawable();
		QAndroidJniObject getTextDirectionHeuristic();
		QAndroidJniObject getTextLocale();
		QAndroidJniObject getTextLocales();
		QAndroidJniObject getTextMetricsParams();
		jfloat getTextScaleX();
		QAndroidJniObject getTextSelectHandle();
		QAndroidJniObject getTextSelectHandleLeft();
		QAndroidJniObject getTextSelectHandleRight();
		jfloat getTextSize();
		jint getTotalPaddingBottom();
		jint getTotalPaddingEnd();
		jint getTotalPaddingLeft();
		jint getTotalPaddingRight();
		jint getTotalPaddingStart();
		jint getTotalPaddingTop();
		QAndroidJniObject getTransformationMethod();
		QAndroidJniObject getTypeface();
		jarray getUrls();
		jboolean hasOverlappingRendering();
		jboolean hasSelection();
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		jboolean isAllCaps();
		jboolean isCursorVisible();
		jboolean isElegantTextHeight();
		jboolean isFallbackLineSpacing();
		jboolean isHorizontallyScrollable();
		jboolean isInputMethodTarget();
		jboolean isSingleLine();
		jboolean isSuggestionsEnabled();
		jboolean isTextSelectable();
		void jumpDrawablesToCurrentState();
		jint length();
		jboolean moveCursorToVisibleOffset();
		void onBeginBatchEdit();
		jboolean onCheckIsTextEditor();
		void onCommitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0);
		void onCommitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0);
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		jboolean onDragEvent(__jni_impl::android::view::DragEvent arg0);
		void onEditorAction(jint arg0);
		void onEndBatchEdit();
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onPreDraw();
		jboolean onPrivateIMECommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		jboolean onPrivateIMECommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		QAndroidJniObject onSaveInstanceState();
		void onScreenStateChanged(jint arg0);
		jboolean onTextContextMenuItem(jint arg0);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean performLongClick();
		void removeTextChangedListener(__jni_impl::__JniBaseClass arg0);
		void sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void setAllCaps(jboolean arg0);
		void setAutoLinkMask(jint arg0);
		void setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3);
		void setAutoSizeTextTypeUniformWithPresetSizes(jintArray arg0, jint arg1);
		void setAutoSizeTextTypeWithDefaults(jint arg0);
		void setBreakStrategy(jint arg0);
		void setCompoundDrawablePadding(jint arg0);
		void setCompoundDrawableTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setCompoundDrawableTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setCompoundDrawableTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setCompoundDrawables(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelative(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelativeWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCompoundDrawablesWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCursorVisible(jboolean arg0);
		void setCustomInsertionActionModeCallback(__jni_impl::__JniBaseClass arg0);
		void setCustomSelectionActionModeCallback(__jni_impl::__JniBaseClass arg0);
		void setEditableFactory(__jni_impl::android::text::Editable_Factory arg0);
		void setElegantTextHeight(jboolean arg0);
		void setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0);
		void setEms(jint arg0);
		void setEnabled(jboolean arg0);
		void setError(jstring arg0);
		void setError(const QString &arg0);
		void setError(jstring arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setError(const QString &arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setExtractedText(__jni_impl::android::view::inputmethod::ExtractedText arg0);
		void setFallbackLineSpacing(jboolean arg0);
		void setFilters(jarray arg0);
		void setFirstBaselineToTopHeight(jint arg0);
		void setFontFeatureSettings(jstring arg0);
		void setFontFeatureSettings(const QString &arg0);
		jboolean setFontVariationSettings(jstring arg0);
		jboolean setFontVariationSettings(const QString &arg0);
		void setFreezesText(jboolean arg0);
		void setGravity(jint arg0);
		void setHeight(jint arg0);
		void setHighlightColor(jint arg0);
		void setHint(jint arg0);
		void setHint(jstring arg0);
		void setHint(const QString &arg0);
		void setHintTextColor(__jni_impl::android::content::res::ColorStateList arg0);
		void setHintTextColor(jint arg0);
		void setHorizontallyScrolling(jboolean arg0);
		void setHyphenationFrequency(jint arg0);
		void setImeActionLabel(jstring arg0, jint arg1);
		void setImeActionLabel(const QString &arg0, jint arg1);
		void setImeHintLocales(__jni_impl::android::os::LocaleList arg0);
		void setImeOptions(jint arg0);
		void setIncludeFontPadding(jboolean arg0);
		void setInputExtras(jint arg0);
		void setInputType(jint arg0);
		void setJustificationMode(jint arg0);
		void setKeyListener(__jni_impl::__JniBaseClass arg0);
		void setLastBaselineToBottomHeight(jint arg0);
		void setLetterSpacing(jfloat arg0);
		void setLineHeight(jint arg0);
		void setLineSpacing(jfloat arg0, jfloat arg1);
		void setLines(jint arg0);
		void setLinkTextColor(__jni_impl::android::content::res::ColorStateList arg0);
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
		void setMovementMethod(__jni_impl::__JniBaseClass arg0);
		void setOnEditorActionListener(__jni_impl::__JniBaseClass arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaintFlags(jint arg0);
		void setPrivateImeOptions(jstring arg0);
		void setPrivateImeOptions(const QString &arg0);
		void setRawInputType(jint arg0);
		void setScroller(__jni_impl::android::widget::Scroller arg0);
		void setSelectAllOnFocus(jboolean arg0);
		void setSelected(jboolean arg0);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		void setShowSoftInputOnFocus(jboolean arg0);
		void setSingleLine();
		void setSingleLine(jboolean arg0);
		void setSpannableFactory(__jni_impl::android::text::Spannable_Factory arg0);
		void setText(jint arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setText(jint arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setText(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setText(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setText(jcharArray arg0, jint arg1, jint arg2);
		void setTextAppearance(jint arg0);
		void setTextAppearance(__jni_impl::android::content::Context arg0, jint arg1);
		void setTextClassifier(__jni_impl::__JniBaseClass arg0);
		void setTextColor(__jni_impl::android::content::res::ColorStateList arg0);
		void setTextColor(jint arg0);
		void setTextCursorDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTextCursorDrawable(jint arg0);
		void setTextIsSelectable(jboolean arg0);
		void setTextKeepState(jstring arg0);
		void setTextKeepState(const QString &arg0);
		void setTextKeepState(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setTextKeepState(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setTextLocale(__jni_impl::java::util::Locale arg0);
		void setTextLocales(__jni_impl::android::os::LocaleList arg0);
		void setTextMetricsParams(__jni_impl::android::text::PrecomputedText_Params arg0);
		void setTextScaleX(jfloat arg0);
		void setTextSelectHandle(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTextSelectHandle(jint arg0);
		void setTextSelectHandleLeft(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTextSelectHandleLeft(jint arg0);
		void setTextSelectHandleRight(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTextSelectHandleRight(jint arg0);
		void setTextSize(jfloat arg0);
		void setTextSize(jint arg0, jfloat arg1);
		void setTransformationMethod(__jni_impl::__JniBaseClass arg0);
		void setTypeface(__jni_impl::android::graphics::Typeface arg0);
		void setTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1);
		void setWidth(jint arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
	};
} // namespace __jni_impl::android::widget

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
#include "Scroller.hpp"
#include "TextView_BufferType.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint TextView::AUTO_SIZE_TEXT_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_NONE"
		);
	}
	jint TextView::AUTO_SIZE_TEXT_TYPE_UNIFORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_UNIFORM"
		);
	}
	
	// Constructors
	void TextView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void TextView::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void TextView::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void TextView::addTextChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::append(jstring arg0)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::append(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::append(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextView::append(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void TextView::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::beginBatchEdit()
	{
		__thiz.callMethod<void>(
			"beginBatchEdit",
			"()V"
		);
	}
	jboolean TextView::bringPointIntoView(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"bringPointIntoView",
			"(I)Z",
			arg0
		);
	}
	void TextView::cancelLongPress()
	{
		__thiz.callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	void TextView::clearComposingText()
	{
		__thiz.callMethod<void>(
			"clearComposingText",
			"()V"
		);
	}
	void TextView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	void TextView::debug(jint arg0)
	{
		__thiz.callMethod<void>(
			"debug",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::didTouchFocusSelect()
	{
		return __thiz.callMethod<jboolean>(
			"didTouchFocusSelect",
			"()Z"
		);
	}
	void TextView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::endBatchEdit()
	{
		__thiz.callMethod<void>(
			"endBatchEdit",
			"()V"
		);
	}
	jboolean TextView::extractText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1)
	{
		return __thiz.callMethod<jboolean>(
			"extractText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;Landroid/view/inputmethod/ExtractedText;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TextView::findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void TextView::findViewsWithText(__jni_impl::java::util::ArrayList arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring TextView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextView::getAutoLinkMask()
	{
		return __thiz.callMethod<jint>(
			"getAutoLinkMask",
			"()I"
		);
	}
	jint TextView::getAutoSizeMaxTextSize()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeMaxTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeMinTextSize()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeMinTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeStepGranularity()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeStepGranularity",
			"()I"
		);
	}
	jintArray TextView::getAutoSizeTextAvailableSizes()
	{
		return __thiz.callObjectMethod(
			"getAutoSizeTextAvailableSizes",
			"()[I"
		).object<jintArray>();
	}
	jint TextView::getAutoSizeTextType()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeTextType",
			"()I"
		);
	}
	jint TextView::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject TextView::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint TextView::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint TextView::getBreakStrategy()
	{
		return __thiz.callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint TextView::getCompoundDrawablePadding()
	{
		return __thiz.callMethod<jint>(
			"getCompoundDrawablePadding",
			"()I"
		);
	}
	QAndroidJniObject TextView::getCompoundDrawableTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawableTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject TextView::getCompoundDrawableTintList()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawableTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject TextView::getCompoundDrawableTintMode()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawableTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jarray TextView::getCompoundDrawables()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawables",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	jarray TextView::getCompoundDrawablesRelative()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawablesRelative",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	jint TextView::getCompoundPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingBottom",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingEnd()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingEnd",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingStart()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingStart",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingTop",
			"()I"
		);
	}
	jint TextView::getCurrentHintTextColor()
	{
		return __thiz.callMethod<jint>(
			"getCurrentHintTextColor",
			"()I"
		);
	}
	jint TextView::getCurrentTextColor()
	{
		return __thiz.callMethod<jint>(
			"getCurrentTextColor",
			"()I"
		);
	}
	QAndroidJniObject TextView::getCustomInsertionActionModeCallback()
	{
		return __thiz.callObjectMethod(
			"getCustomInsertionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	QAndroidJniObject TextView::getCustomSelectionActionModeCallback()
	{
		return __thiz.callObjectMethod(
			"getCustomSelectionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	QAndroidJniObject TextView::getEditableText()
	{
		return __thiz.callObjectMethod(
			"getEditableText",
			"()Landroid/text/Editable;"
		);
	}
	QAndroidJniObject TextView::getEllipsize()
	{
		return __thiz.callObjectMethod(
			"getEllipsize",
			"()Landroid/text/TextUtils$TruncateAt;"
		);
	}
	jstring TextView::getError()
	{
		return __thiz.callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextView::getExtendedPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getExtendedPaddingBottom",
			"()I"
		);
	}
	jint TextView::getExtendedPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getExtendedPaddingTop",
			"()I"
		);
	}
	jarray TextView::getFilters()
	{
		return __thiz.callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		).object<jarray>();
	}
	jint TextView::getFirstBaselineToTopHeight()
	{
		return __thiz.callMethod<jint>(
			"getFirstBaselineToTopHeight",
			"()I"
		);
	}
	void TextView::getFocusedRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jstring TextView::getFontFeatureSettings()
	{
		return __thiz.callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextView::getFontVariationSettings()
	{
		return __thiz.callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TextView::getFreezesText()
	{
		return __thiz.callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	jint TextView::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint TextView::getHighlightColor()
	{
		return __thiz.callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	jstring TextView::getHint()
	{
		return __thiz.callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TextView::getHintTextColors()
	{
		return __thiz.callObjectMethod(
			"getHintTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextView::getHyphenationFrequency()
	{
		return __thiz.callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	jint TextView::getImeActionId()
	{
		return __thiz.callMethod<jint>(
			"getImeActionId",
			"()I"
		);
	}
	jstring TextView::getImeActionLabel()
	{
		return __thiz.callObjectMethod(
			"getImeActionLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TextView::getImeHintLocales()
	{
		return __thiz.callObjectMethod(
			"getImeHintLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextView::getImeOptions()
	{
		return __thiz.callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jboolean TextView::getIncludeFontPadding()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeFontPadding",
			"()Z"
		);
	}
	QAndroidJniObject TextView::getInputExtras(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getInputExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	jint TextView::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint TextView::getJustificationMode()
	{
		return __thiz.callMethod<jint>(
			"getJustificationMode",
			"()I"
		);
	}
	QAndroidJniObject TextView::getKeyListener()
	{
		return __thiz.callObjectMethod(
			"getKeyListener",
			"()Landroid/text/method/KeyListener;"
		);
	}
	jint TextView::getLastBaselineToBottomHeight()
	{
		return __thiz.callMethod<jint>(
			"getLastBaselineToBottomHeight",
			"()I"
		);
	}
	QAndroidJniObject TextView::getLayout()
	{
		return __thiz.callObjectMethod(
			"getLayout",
			"()Landroid/text/Layout;"
		);
	}
	jfloat TextView::getLetterSpacing()
	{
		return __thiz.callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	jint TextView::getLineBounds(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TextView::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint TextView::getLineHeight()
	{
		return __thiz.callMethod<jint>(
			"getLineHeight",
			"()I"
		);
	}
	jfloat TextView::getLineSpacingExtra()
	{
		return __thiz.callMethod<jfloat>(
			"getLineSpacingExtra",
			"()F"
		);
	}
	jfloat TextView::getLineSpacingMultiplier()
	{
		return __thiz.callMethod<jfloat>(
			"getLineSpacingMultiplier",
			"()F"
		);
	}
	QAndroidJniObject TextView::getLinkTextColors()
	{
		return __thiz.callObjectMethod(
			"getLinkTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jboolean TextView::getLinksClickable()
	{
		return __thiz.callMethod<jboolean>(
			"getLinksClickable",
			"()Z"
		);
	}
	jint TextView::getMarqueeRepeatLimit()
	{
		return __thiz.callMethod<jint>(
			"getMarqueeRepeatLimit",
			"()I"
		);
	}
	jint TextView::getMaxEms()
	{
		return __thiz.callMethod<jint>(
			"getMaxEms",
			"()I"
		);
	}
	jint TextView::getMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint TextView::getMaxLines()
	{
		return __thiz.callMethod<jint>(
			"getMaxLines",
			"()I"
		);
	}
	jint TextView::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jint TextView::getMinEms()
	{
		return __thiz.callMethod<jint>(
			"getMinEms",
			"()I"
		);
	}
	jint TextView::getMinHeight()
	{
		return __thiz.callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	jint TextView::getMinLines()
	{
		return __thiz.callMethod<jint>(
			"getMinLines",
			"()I"
		);
	}
	jint TextView::getMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	QAndroidJniObject TextView::getMovementMethod()
	{
		return __thiz.callObjectMethod(
			"getMovementMethod",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jint TextView::getOffsetForPosition(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jint>(
			"getOffsetForPosition",
			"(FF)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TextView::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint TextView::getPaintFlags()
	{
		return __thiz.callMethod<jint>(
			"getPaintFlags",
			"()I"
		);
	}
	jstring TextView::getPrivateImeOptions()
	{
		return __thiz.callObjectMethod(
			"getPrivateImeOptions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextView::getSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint TextView::getSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jint TextView::getShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	jfloat TextView::getShadowDx()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	jfloat TextView::getShadowDy()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	jfloat TextView::getShadowRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	jboolean TextView::getShowSoftInputOnFocus()
	{
		return __thiz.callMethod<jboolean>(
			"getShowSoftInputOnFocus",
			"()Z"
		);
	}
	jstring TextView::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TextView::getTextClassifier()
	{
		return __thiz.callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	QAndroidJniObject TextView::getTextColors()
	{
		return __thiz.callObjectMethod(
			"getTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject TextView::getTextCursorDrawable()
	{
		return __thiz.callObjectMethod(
			"getTextCursorDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject TextView::getTextDirectionHeuristic()
	{
		return __thiz.callObjectMethod(
			"getTextDirectionHeuristic",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextView::getTextLocale()
	{
		return __thiz.callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject TextView::getTextLocales()
	{
		return __thiz.callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	QAndroidJniObject TextView::getTextMetricsParams()
	{
		return __thiz.callObjectMethod(
			"getTextMetricsParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	jfloat TextView::getTextScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	QAndroidJniObject TextView::getTextSelectHandle()
	{
		return __thiz.callObjectMethod(
			"getTextSelectHandle",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject TextView::getTextSelectHandleLeft()
	{
		return __thiz.callObjectMethod(
			"getTextSelectHandleLeft",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject TextView::getTextSelectHandleRight()
	{
		return __thiz.callObjectMethod(
			"getTextSelectHandleRight",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jfloat TextView::getTextSize()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint TextView::getTotalPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingBottom",
			"()I"
		);
	}
	jint TextView::getTotalPaddingEnd()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingEnd",
			"()I"
		);
	}
	jint TextView::getTotalPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingLeft",
			"()I"
		);
	}
	jint TextView::getTotalPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingRight",
			"()I"
		);
	}
	jint TextView::getTotalPaddingStart()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingStart",
			"()I"
		);
	}
	jint TextView::getTotalPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingTop",
			"()I"
		);
	}
	QAndroidJniObject TextView::getTransformationMethod()
	{
		return __thiz.callObjectMethod(
			"getTransformationMethod",
			"()Landroid/text/method/TransformationMethod;"
		);
	}
	QAndroidJniObject TextView::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jarray TextView::getUrls()
	{
		return __thiz.callObjectMethod(
			"getUrls",
			"()[Landroid/text/style/URLSpan;"
		).object<jarray>();
	}
	jboolean TextView::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean TextView::hasSelection()
	{
		return __thiz.callMethod<jboolean>(
			"hasSelection",
			"()Z"
		);
	}
	void TextView::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::isAllCaps()
	{
		return __thiz.callMethod<jboolean>(
			"isAllCaps",
			"()Z"
		);
	}
	jboolean TextView::isCursorVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isCursorVisible",
			"()Z"
		);
	}
	jboolean TextView::isElegantTextHeight()
	{
		return __thiz.callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jboolean TextView::isFallbackLineSpacing()
	{
		return __thiz.callMethod<jboolean>(
			"isFallbackLineSpacing",
			"()Z"
		);
	}
	jboolean TextView::isHorizontallyScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isHorizontallyScrollable",
			"()Z"
		);
	}
	jboolean TextView::isInputMethodTarget()
	{
		return __thiz.callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	jboolean TextView::isSingleLine()
	{
		return __thiz.callMethod<jboolean>(
			"isSingleLine",
			"()Z"
		);
	}
	jboolean TextView::isSuggestionsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSuggestionsEnabled",
			"()Z"
		);
	}
	jboolean TextView::isTextSelectable()
	{
		return __thiz.callMethod<jboolean>(
			"isTextSelectable",
			"()Z"
		);
	}
	void TextView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jint TextView::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean TextView::moveCursorToVisibleOffset()
	{
		return __thiz.callMethod<jboolean>(
			"moveCursorToVisibleOffset",
			"()Z"
		);
	}
	void TextView::onBeginBatchEdit()
	{
		__thiz.callMethod<void>(
			"onBeginBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onCheckIsTextEditor()
	{
		return __thiz.callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	void TextView::onCommitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0)
	{
		__thiz.callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::onCommitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0)
	{
		__thiz.callMethod<void>(
			"onCommitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::onDragEvent(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TextView::onEditorAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"onEditorAction",
			"(I)V",
			arg0
		);
	}
	void TextView::onEndBatchEdit()
	{
		__thiz.callMethod<void>(
			"onEndBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean TextView::onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onPreDraw()
	{
		return __thiz.callMethod<jboolean>(
			"onPreDraw",
			"()Z"
		);
	}
	jboolean TextView::onPrivateIMECommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onPrivateIMECommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void TextView::onScreenStateChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::onTextContextMenuItem(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	jboolean TextView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TextView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::performLongClick()
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void TextView::removeTextChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setAllCaps(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllCaps",
			"(Z)V",
			arg0
		);
	}
	void TextView::setAutoLinkMask(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAutoLinkMask",
			"(I)V",
			arg0
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setAutoSizeTextTypeUniformWithConfiguration",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithPresetSizes(jintArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAutoSizeTextTypeUniformWithPresetSizes",
			"([II)V",
			arg0,
			arg1
		);
	}
	void TextView::setAutoSizeTextTypeWithDefaults(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAutoSizeTextTypeWithDefaults",
			"(I)V",
			arg0
		);
	}
	void TextView::setBreakStrategy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBreakStrategy",
			"(I)V",
			arg0
		);
	}
	void TextView::setCompoundDrawablePadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablePadding",
			"(I)V",
			arg0
		);
	}
	void TextView::setCompoundDrawableTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawableTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawableTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawableTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawableTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawableTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawables(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawables",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesRelative(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesRelative",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCursorVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCursorVisible",
			"(Z)V",
			arg0
		);
	}
	void TextView::setCustomInsertionActionModeCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCustomInsertionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setCustomSelectionActionModeCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCustomSelectionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setEditableFactory(__jni_impl::android::text::Editable_Factory arg0)
	{
		__thiz.callMethod<void>(
			"setEditableFactory",
			"(Landroid/text/Editable$Factory;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setElegantTextHeight(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	void TextView::setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0)
	{
		__thiz.callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TextView::setError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setError(jstring arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setError(const QString &arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setExtractedText(__jni_impl::android::view::inputmethod::ExtractedText arg0)
	{
		__thiz.callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setFallbackLineSpacing(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFallbackLineSpacing",
			"(Z)V",
			arg0
		);
	}
	void TextView::setFilters(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0
		);
	}
	void TextView::setFirstBaselineToTopHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFirstBaselineToTopHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setFontFeatureSettings(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextView::setFontFeatureSettings(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean TextView::setFontVariationSettings(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TextView::setFontVariationSettings(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setFreezesText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFreezesText",
			"(Z)V",
			arg0
		);
	}
	void TextView::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void TextView::setHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setHighlightColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHighlightColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setHint(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setHintTextColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setHintTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setHintTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHintTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setHorizontallyScrolling(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontallyScrolling",
			"(Z)V",
			arg0
		);
	}
	void TextView::setHyphenationFrequency(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHyphenationFrequency",
			"(I)V",
			arg0
		);
	}
	void TextView::setImeActionLabel(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			arg0,
			arg1
		);
	}
	void TextView::setImeActionLabel(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void TextView::setImeHintLocales(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setImeHintLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setImeOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	void TextView::setIncludeFontPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIncludeFontPadding",
			"(Z)V",
			arg0
		);
	}
	void TextView::setInputExtras(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputExtras",
			"(I)V",
			arg0
		);
	}
	void TextView::setInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setJustificationMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setJustificationMode",
			"(I)V",
			arg0
		);
	}
	void TextView::setKeyListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setKeyListener",
			"(Landroid/text/method/KeyListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setLastBaselineToBottomHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLastBaselineToBottomHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLetterSpacing(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	void TextView::setLineHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLineHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLineSpacing",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::setLines(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinkTextColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setLinkTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setLinkTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLinkTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinksClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLinksClickable",
			"(Z)V",
			arg0
		);
	}
	void TextView::setMarqueeRepeatLimit(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMarqueeRepeatLimit",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxLines(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinLines(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setMovementMethod(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMovementMethod",
			"(Landroid/text/method/MovementMethod;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setOnEditorActionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnEditorActionListener",
			"(Landroid/widget/TextView$OnEditorActionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPaddingRelative",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setPaintFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPaintFlags",
			"(I)V",
			arg0
		);
	}
	void TextView::setPrivateImeOptions(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextView::setPrivateImeOptions(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setRawInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRawInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setScroller(__jni_impl::android::widget::Scroller arg0)
	{
		__thiz.callMethod<void>(
			"setScroller",
			"(Landroid/widget/Scroller;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setSelectAllOnFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelectAllOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void TextView::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setShadowLayer",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setShowSoftInputOnFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowSoftInputOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSingleLine()
	{
		__thiz.callMethod<void>(
			"setSingleLine",
			"()V"
		);
	}
	void TextView::setSingleLine(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSingleLine",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSpannableFactory(__jni_impl::android::text::Spannable_Factory arg0)
	{
		__thiz.callMethod<void>(
			"setSpannableFactory",
			"(Landroid/text/Spannable$Factory;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void TextView::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setText(jint arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(ILandroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setText(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setText(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setText(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setText",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextView::setTextAppearance(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextAppearance",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextAppearance(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextView::setTextClassifier(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextCursorDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextCursorDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextCursorDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextCursorDrawable",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextIsSelectable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTextIsSelectable",
			"(Z)V",
			arg0
		);
	}
	void TextView::setTextKeepState(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setTextKeepState(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setTextKeepState(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setTextKeepState(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setTextLocale(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextLocales(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextMetricsParams(__jni_impl::android::text::PrecomputedText_Params arg0)
	{
		__thiz.callMethod<void>(
			"setTextMetricsParams",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextScaleX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	void TextView::setTextSelectHandle(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandle",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextSelectHandle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandle",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleLeft(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleLeft",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextSelectHandleLeft(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleLeft",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleRight(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleRight",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextSelectHandleRight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleRight",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSize(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	void TextView::setTextSize(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void TextView::setTransformationMethod(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTransformationMethod",
			"(Landroid/text/method/TransformationMethod;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTypeface(__jni_impl::android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextView::setWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean TextView::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TextView : public __jni_impl::android::widget::TextView
	{
	public:
		TextView(QAndroidJniObject obj) { __thiz = obj; }
		TextView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TEXTVIEW

