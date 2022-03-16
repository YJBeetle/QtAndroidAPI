#pragma once

#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodService_InputMethodSessionImpl(const char *className, const char *sig, Ts...agv) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService_InputMethodSessionImpl(QJniObject obj) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(obj) {}
		
		// Constructors
		InputMethodService_InputMethodSessionImpl(android::inputmethodservice::InputMethodService arg0);
		
		// Methods
		void appPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		void displayCompletions(JArray arg0) const;
		void finishInput() const;
		void toggleSoftInput(jint arg0, jint arg1) const;
		void updateCursor(android::graphics::Rect arg0) const;
		void updateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0) const;
		void updateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1) const;
		void updateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void viewClicked(jboolean arg0) const;
	};
} // namespace android::inputmethodservice

