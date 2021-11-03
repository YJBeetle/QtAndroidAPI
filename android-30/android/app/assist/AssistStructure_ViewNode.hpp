#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
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
class JString;
class JString;

namespace android::app::assist
{
	class AssistStructure_ViewNode : public JObject
	{
	public:
		// Fields
		static jint TEXT_COLOR_UNDEFINED();
		static jint TEXT_STYLE_BOLD();
		static jint TEXT_STYLE_ITALIC();
		static jint TEXT_STYLE_STRIKE_THRU();
		static jint TEXT_STYLE_UNDERLINE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AssistStructure_ViewNode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssistStructure_ViewNode(QJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat getAlpha();
		JArray getAutofillHints();
		android::view::autofill::AutofillId getAutofillId();
		JArray getAutofillOptions();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		android::app::assist::AssistStructure_ViewNode getChildAt(jint arg0);
		jint getChildCount();
		JString getClassName();
		JString getContentDescription();
		jfloat getElevation();
		android::os::Bundle getExtras();
		jint getHeight();
		JString getHint();
		JString getHintIdEntry();
		android::view::ViewStructure_HtmlInfo getHtmlInfo();
		jint getId();
		JString getIdEntry();
		JString getIdPackage();
		JString getIdType();
		jint getImportantForAutofill();
		jint getInputType();
		jint getLeft();
		android::os::LocaleList getLocaleList();
		jint getMaxTextEms();
		jint getMaxTextLength();
		jint getMinTextEms();
		jint getScrollX();
		jint getScrollY();
		JString getText();
		jint getTextBackgroundColor();
		jint getTextColor();
		JString getTextIdEntry();
		JIntArray getTextLineBaselines();
		JIntArray getTextLineCharOffsets();
		jint getTextSelectionEnd();
		jint getTextSelectionStart();
		jfloat getTextSize();
		jint getTextStyle();
		jint getTop();
		android::graphics::Matrix getTransformation();
		jint getVisibility();
		JString getWebDomain();
		JString getWebScheme();
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

