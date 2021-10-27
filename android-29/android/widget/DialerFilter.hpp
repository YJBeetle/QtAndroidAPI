#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		DialerFilter(QAndroidJniObject obj);
		// Constructors
		DialerFilter(android::content::Context &arg0);
		DialerFilter(android::content::Context &arg0, __JniBaseClass &arg1);
		DialerFilter() = default;
		
		// Methods
		void append(jstring arg0);
		void append(const QString &arg0);
		void clearText();
		jstring getDigits();
		jstring getFilterText();
		jstring getLetters();
		jint getMode();
		jboolean isQwertyKeyboard();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void removeFilterWatcher(__JniBaseClass arg0);
		void setDigitsWatcher(__JniBaseClass arg0);
		void setFilterWatcher(__JniBaseClass arg0);
		void setLettersWatcher(__JniBaseClass arg0);
		void setMode(jint arg0);
	};
} // namespace android::widget

