#pragma once

#include "./RelativeLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class KeyEvent;
}
class JString;
class JString;

namespace android::widget
{
	class DialerFilter : public android::widget::RelativeLayout
	{
	public:
		// Fields
		static jint DIGITS_AND_LETTERS();
		static jint DIGITS_AND_LETTERS_NO_DIGITS();
		static jint DIGITS_AND_LETTERS_NO_LETTERS();
		static jint DIGITS_ONLY();
		static jint LETTERS_ONLY();
		
		// QJniObject forward
		template<typename ...Ts> explicit DialerFilter(const char *className, const char *sig, Ts...agv) : android::widget::RelativeLayout(className, sig, std::forward<Ts>(agv)...) {}
		DialerFilter(QJniObject obj);
		
		// Constructors
		DialerFilter(android::content::Context arg0);
		DialerFilter(android::content::Context arg0, JObject arg1);
		
		// Methods
		void append(JString arg0);
		void clearText();
		JString getDigits();
		JString getFilterText();
		JString getLetters();
		jint getMode();
		jboolean isQwertyKeyboard();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void removeFilterWatcher(JObject arg0);
		void setDigitsWatcher(JObject arg0);
		void setFilterWatcher(JObject arg0);
		void setLettersWatcher(JObject arg0);
		void setMode(jint arg0);
	};
} // namespace android::widget

