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
		jfloat getAlpha() const;
		JArray getAutofillHints() const;
		android::view::autofill::AutofillId getAutofillId() const;
		JArray getAutofillOptions() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		android::app::assist::AssistStructure_ViewNode getChildAt(jint arg0) const;
		jint getChildCount() const;
		JString getClassName() const;
		JString getContentDescription() const;
		jfloat getElevation() const;
		android::os::Bundle getExtras() const;
		jint getHeight() const;
		JString getHint() const;
		JString getHintIdEntry() const;
		android::view::ViewStructure_HtmlInfo getHtmlInfo() const;
		jint getId() const;
		JString getIdEntry() const;
		JString getIdPackage() const;
		JString getIdType() const;
		jint getImportantForAutofill() const;
		jint getInputType() const;
		jint getLeft() const;
		android::os::LocaleList getLocaleList() const;
		jint getMaxTextEms() const;
		jint getMaxTextLength() const;
		jint getMinTextEms() const;
		JArray getReceiveContentMimeTypes() const;
		jint getScrollX() const;
		jint getScrollY() const;
		JString getText() const;
		jint getTextBackgroundColor() const;
		jint getTextColor() const;
		JString getTextIdEntry() const;
		JIntArray getTextLineBaselines() const;
		JIntArray getTextLineCharOffsets() const;
		jint getTextSelectionEnd() const;
		jint getTextSelectionStart() const;
		jfloat getTextSize() const;
		jint getTextStyle() const;
		jint getTop() const;
		android::graphics::Matrix getTransformation() const;
		jint getVisibility() const;
		JString getWebDomain() const;
		JString getWebScheme() const;
		jint getWidth() const;
		jboolean isAccessibilityFocused() const;
		jboolean isActivated() const;
		jboolean isAssistBlocked() const;
		jboolean isCheckable() const;
		jboolean isChecked() const;
		jboolean isClickable() const;
		jboolean isContextClickable() const;
		jboolean isEnabled() const;
		jboolean isFocusable() const;
		jboolean isFocused() const;
		jboolean isLongClickable() const;
		jboolean isOpaque() const;
		jboolean isSelected() const;
	};
} // namespace android::app::assist

