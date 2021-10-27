#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::view
{
	class ViewStructure_HtmlInfo;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::autofill
{
	class AutofillValue;
}

namespace android::app::assist
{
	class AssistStructure_ViewNode : public __JniBaseClass
	{
	public:
		// Fields
		static jint TEXT_COLOR_UNDEFINED();
		static jint TEXT_STYLE_BOLD();
		static jint TEXT_STYLE_ITALIC();
		static jint TEXT_STYLE_STRIKE_THRU();
		static jint TEXT_STYLE_UNDERLINE();
		
		AssistStructure_ViewNode(QAndroidJniObject obj);
		// Constructors
		AssistStructure_ViewNode() = default;
		
		// Methods
		jfloat getAlpha();
		jarray getAutofillHints();
		QAndroidJniObject getAutofillId();
		jarray getAutofillOptions();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		QAndroidJniObject getChildAt(jint arg0);
		jint getChildCount();
		jstring getClassName();
		jstring getContentDescription();
		jfloat getElevation();
		QAndroidJniObject getExtras();
		jint getHeight();
		jstring getHint();
		QAndroidJniObject getHtmlInfo();
		jint getId();
		jstring getIdEntry();
		jstring getIdPackage();
		jstring getIdType();
		jint getImportantForAutofill();
		jint getInputType();
		jint getLeft();
		QAndroidJniObject getLocaleList();
		jint getMaxTextEms();
		jint getMaxTextLength();
		jint getMinTextEms();
		jint getScrollX();
		jint getScrollY();
		jstring getText();
		jint getTextBackgroundColor();
		jint getTextColor();
		jstring getTextIdEntry();
		jintArray getTextLineBaselines();
		jintArray getTextLineCharOffsets();
		jint getTextSelectionEnd();
		jint getTextSelectionStart();
		jfloat getTextSize();
		jint getTextStyle();
		jint getTop();
		QAndroidJniObject getTransformation();
		jint getVisibility();
		jstring getWebDomain();
		jstring getWebScheme();
		jint getWidth();
		jboolean isAccessibilityFocused();
		jboolean isActivated();
		jboolean isAssistBlocked();
		jboolean isCheckable();
		jboolean isChecked();
		jboolean isClickable();
		jboolean isContextClickable();
		jboolean isEnabled();
		jboolean isFocusable();
		jboolean isFocused();
		jboolean isLongClickable();
		jboolean isOpaque();
		jboolean isSelected();
	};
} // namespace android::app::assist

