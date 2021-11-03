#pragma once

#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

class JArray;
namespace android::graphics
{
	class Rect;
}
namespace android::inputmethodservice
{
	class InputMethodService;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}
class JString;

namespace android::inputmethodservice
{
	class InputMethodService_InputMethodSessionImpl : public android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodService_InputMethodSessionImpl(const char *className, const char *sig, Ts...agv) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService_InputMethodSessionImpl(QAndroidJniObject obj);
		
		// Constructors
		InputMethodService_InputMethodSessionImpl(android::inputmethodservice::InputMethodService arg0);
		
		// Methods
		void appPrivateCommand(JString arg0, android::os::Bundle arg1);
		void displayCompletions(JArray arg0);
		void finishInput();
		void toggleSoftInput(jint arg0, jint arg1);
		void updateCursor(android::graphics::Rect arg0);
		void updateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0);
		void updateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1);
		void updateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void viewClicked(jboolean arg0);
	};
} // namespace android::inputmethodservice

