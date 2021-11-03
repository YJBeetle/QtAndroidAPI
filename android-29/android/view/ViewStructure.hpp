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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewStructure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure(QAndroidJniObject obj);
		
		// Constructors
		ViewStructure();
		
		// Methods
		jint addChildCount(jint arg0);
		void asyncCommit();
		android::view::ViewStructure asyncNewChild(jint arg0);
		android::view::autofill::AutofillId getAutofillId();
		jint getChildCount();
		android::os::Bundle getExtras();
		JString getHint();
		JString getText();
		jint getTextSelectionEnd();
		jint getTextSelectionStart();
		jboolean hasExtras();
		android::view::ViewStructure newChild(jint arg0);
		android::view::ViewStructure_HtmlInfo_Builder newHtmlInfoBuilder(JString arg0);
		void setAccessibilityFocused(jboolean arg0);
		void setActivated(jboolean arg0);
		void setAlpha(jfloat arg0);
		void setAutofillHints(JArray arg0);
		void setAutofillId(android::view::autofill::AutofillId arg0);
		void setAutofillId(android::view::autofill::AutofillId arg0, jint arg1);
		void setAutofillOptions(JArray arg0);
		void setAutofillType(jint arg0);
		void setAutofillValue(android::view::autofill::AutofillValue arg0);
		void setCheckable(jboolean arg0);
		void setChecked(jboolean arg0);
		void setChildCount(jint arg0);
		void setClassName(JString arg0);
		void setClickable(jboolean arg0);
		void setContentDescription(JString arg0);
		void setContextClickable(jboolean arg0);
		void setDataIsSensitive(jboolean arg0);
		void setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setElevation(jfloat arg0);
		void setEnabled(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setFocused(jboolean arg0);
		void setHint(JString arg0);
		void setHtmlInfo(android::view::ViewStructure_HtmlInfo arg0);
		void setId(jint arg0, JString arg1, JString arg2, JString arg3);
		void setImportantForAutofill(jint arg0);
		void setInputType(jint arg0);
		void setLocaleList(android::os::LocaleList arg0);
		void setLongClickable(jboolean arg0);
		void setMaxTextEms(jint arg0);
		void setMaxTextLength(jint arg0);
		void setMinTextEms(jint arg0);
		void setOpaque(jboolean arg0);
		void setSelected(jboolean arg0);
		void setText(JString arg0);
		void setText(JString arg0, jint arg1, jint arg2);
		void setTextIdEntry(JString arg0);
		void setTextLines(JIntArray arg0, JIntArray arg1);
		void setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3);
		void setTransformation(android::graphics::Matrix arg0);
		void setVisibility(jint arg0);
		void setWebDomain(JString arg0);
	};
} // namespace android::view

