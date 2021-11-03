#pragma once

#include "../../JObject.hpp"

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
namespace android::view
{
	class ViewStructure_HtmlInfo_Builder;
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

namespace android::view
{
	class ViewStructure : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewStructure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure(QJniObject obj);
		
		// Constructors
		ViewStructure();
		
		// Methods
		jint addChildCount(jint arg0) const;
		void asyncCommit() const;
		android::view::ViewStructure asyncNewChild(jint arg0) const;
		android::view::autofill::AutofillId getAutofillId() const;
		jint getChildCount() const;
		android::os::Bundle getExtras() const;
		JString getHint() const;
		JString getText() const;
		jint getTextSelectionEnd() const;
		jint getTextSelectionStart() const;
		jboolean hasExtras() const;
		android::view::ViewStructure newChild(jint arg0) const;
		android::view::ViewStructure_HtmlInfo_Builder newHtmlInfoBuilder(JString arg0) const;
		void setAccessibilityFocused(jboolean arg0) const;
		void setActivated(jboolean arg0) const;
		void setAlpha(jfloat arg0) const;
		void setAutofillHints(JArray arg0) const;
		void setAutofillId(android::view::autofill::AutofillId arg0) const;
		void setAutofillId(android::view::autofill::AutofillId arg0, jint arg1) const;
		void setAutofillOptions(JArray arg0) const;
		void setAutofillType(jint arg0) const;
		void setAutofillValue(android::view::autofill::AutofillValue arg0) const;
		void setCheckable(jboolean arg0) const;
		void setChecked(jboolean arg0) const;
		void setChildCount(jint arg0) const;
		void setClassName(JString arg0) const;
		void setClickable(jboolean arg0) const;
		void setContentDescription(JString arg0) const;
		void setContextClickable(jboolean arg0) const;
		void setDataIsSensitive(jboolean arg0) const;
		void setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void setElevation(jfloat arg0) const;
		void setEnabled(jboolean arg0) const;
		void setFocusable(jboolean arg0) const;
		void setFocused(jboolean arg0) const;
		void setHint(JString arg0) const;
		void setHintIdEntry(JString arg0) const;
		void setHtmlInfo(android::view::ViewStructure_HtmlInfo arg0) const;
		void setId(jint arg0, JString arg1, JString arg2, JString arg3) const;
		void setImportantForAutofill(jint arg0) const;
		void setInputType(jint arg0) const;
		void setLocaleList(android::os::LocaleList arg0) const;
		void setLongClickable(jboolean arg0) const;
		void setMaxTextEms(jint arg0) const;
		void setMaxTextLength(jint arg0) const;
		void setMinTextEms(jint arg0) const;
		void setOpaque(jboolean arg0) const;
		void setSelected(jboolean arg0) const;
		void setText(JString arg0) const;
		void setText(JString arg0, jint arg1, jint arg2) const;
		void setTextIdEntry(JString arg0) const;
		void setTextLines(JIntArray arg0, JIntArray arg1) const;
		void setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3) const;
		void setTransformation(android::graphics::Matrix arg0) const;
		void setVisibility(jint arg0) const;
		void setWebDomain(JString arg0) const;
	};
} // namespace android::view

