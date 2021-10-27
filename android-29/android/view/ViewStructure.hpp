#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::view
{
	class ViewStructure : public __JniBaseClass
	{
	public:
		// Fields
		
		ViewStructure(QAndroidJniObject obj);
		// Constructors
		ViewStructure();
		
		// Methods
		jint addChildCount(jint arg0);
		void asyncCommit();
		QAndroidJniObject asyncNewChild(jint arg0);
		QAndroidJniObject getAutofillId();
		jint getChildCount();
		QAndroidJniObject getExtras();
		jstring getHint();
		jstring getText();
		jint getTextSelectionEnd();
		jint getTextSelectionStart();
		jboolean hasExtras();
		QAndroidJniObject newChild(jint arg0);
		QAndroidJniObject newHtmlInfoBuilder(jstring arg0);
		QAndroidJniObject newHtmlInfoBuilder(const QString &arg0);
		void setAccessibilityFocused(jboolean arg0);
		void setActivated(jboolean arg0);
		void setAlpha(jfloat arg0);
		void setAutofillHints(jarray arg0);
		void setAutofillId(android::view::autofill::AutofillId arg0);
		void setAutofillId(android::view::autofill::AutofillId arg0, jint arg1);
		void setAutofillOptions(jarray arg0);
		void setAutofillType(jint arg0);
		void setAutofillValue(android::view::autofill::AutofillValue arg0);
		void setCheckable(jboolean arg0);
		void setChecked(jboolean arg0);
		void setChildCount(jint arg0);
		void setClassName(jstring arg0);
		void setClassName(const QString &arg0);
		void setClickable(jboolean arg0);
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
		void setContextClickable(jboolean arg0);
		void setDataIsSensitive(jboolean arg0);
		void setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setElevation(jfloat arg0);
		void setEnabled(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setFocused(jboolean arg0);
		void setHint(jstring arg0);
		void setHint(const QString &arg0);
		void setHtmlInfo(android::view::ViewStructure_HtmlInfo arg0);
		void setId(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		void setId(jint arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		void setImportantForAutofill(jint arg0);
		void setInputType(jint arg0);
		void setLocaleList(android::os::LocaleList arg0);
		void setLongClickable(jboolean arg0);
		void setMaxTextEms(jint arg0);
		void setMaxTextLength(jint arg0);
		void setMinTextEms(jint arg0);
		void setOpaque(jboolean arg0);
		void setSelected(jboolean arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setText(jstring arg0, jint arg1, jint arg2);
		void setText(const QString &arg0, jint arg1, jint arg2);
		void setTextIdEntry(jstring arg0);
		void setTextIdEntry(const QString &arg0);
		void setTextLines(jintArray arg0, jintArray arg1);
		void setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3);
		void setTransformation(android::graphics::Matrix arg0);
		void setVisibility(jint arg0);
		void setWebDomain(jstring arg0);
		void setWebDomain(const QString &arg0);
	};
} // namespace android::view

