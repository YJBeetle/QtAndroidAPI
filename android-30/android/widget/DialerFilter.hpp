#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DialerFilter(const char *className, const char *sig, Ts...agv) : android::widget::RelativeLayout(className, sig, std::forward<Ts>(agv)...) {}
		DialerFilter(QAndroidJniObject obj);
		
		// Constructors
		DialerFilter(android::content::Context arg0);
		DialerFilter(android::content::Context arg0, JObject arg1);
		
		// Methods
		void append(jstring arg0);
		void clearText();
		jstring getDigits();
		jstring getFilterText();
		jstring getLetters();
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

