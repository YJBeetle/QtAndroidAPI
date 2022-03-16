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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DialerFilter(const char *className, const char *sig, Ts...agv) : android::widget::RelativeLayout(className, sig, std::forward<Ts>(agv)...) {}
		DialerFilter(QAndroidJniObject obj) : android::widget::RelativeLayout(obj) {}
		
		// Constructors
		DialerFilter(android::content::Context arg0);
		DialerFilter(android::content::Context arg0, JObject arg1);
		
		// Methods
		void append(JString arg0) const;
		void clearText() const;
		JString getDigits() const;
		JString getFilterText() const;
		JString getLetters() const;
		jint getMode() const;
		jboolean isQwertyKeyboard() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void removeFilterWatcher(JObject arg0) const;
		void setDigitsWatcher(JObject arg0) const;
		void setFilterWatcher(JObject arg0) const;
		void setLettersWatcher(JObject arg0) const;
		void setMode(jint arg0) const;
	};
} // namespace android::widget

