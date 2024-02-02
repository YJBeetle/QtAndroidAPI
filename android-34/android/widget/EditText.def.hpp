#pragma once

#include "./TextView.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::widget
{
	class TextView_BufferType;
}
class JString;

namespace android::widget
{
	class EditText : public android::widget::TextView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EditText(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		EditText(QJniObject obj) : android::widget::TextView(obj) {}
		
		// Constructors
		EditText(android::content::Context arg0);
		EditText(android::content::Context arg0, JObject arg1);
		EditText(android::content::Context arg0, JObject arg1, jint arg2);
		EditText(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void extendSelection(jint arg0) const;
		JString getAccessibilityClassName() const;
		jboolean getFreezesText() const;
		JObject getText() const;
		jboolean isStyleShortcutEnabled() const;
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onTextContextMenuItem(jint arg0) const;
		void selectAll() const;
		void setEllipsize(android::text::TextUtils_TruncateAt arg0) const;
		void setSelection(jint arg0) const;
		void setSelection(jint arg0, jint arg1) const;
		void setStyleShortcutsEnabled(jboolean arg0) const;
		void setText(JString arg0, android::widget::TextView_BufferType arg1) const;
	};
} // namespace android::widget

