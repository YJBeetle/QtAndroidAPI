#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}
namespace android::widget
{
	class TextView_BufferType;
}

namespace android::widget
{
	class EditText : public android::widget::TextView
	{
	public:
		// Fields
		
		EditText(QAndroidJniObject obj);
		// Constructors
		EditText(android::content::Context &arg0);
		EditText(android::content::Context &arg0, __JniBaseClass &arg1);
		EditText(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		EditText(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		EditText() = default;
		
		// Methods
		void extendSelection(jint arg0);
		jstring getAccessibilityClassName();
		jboolean getFreezesText();
		QAndroidJniObject getText();
		void selectAll();
		void setEllipsize(android::text::TextUtils_TruncateAt arg0);
		void setSelection(jint arg0);
		void setSelection(jint arg0, jint arg1);
		void setText(jstring arg0, android::widget::TextView_BufferType arg1);
		void setText(const QString &arg0, android::widget::TextView_BufferType arg1);
	};
} // namespace android::widget

