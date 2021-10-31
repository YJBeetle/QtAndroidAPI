#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"

namespace android::inputmethodservice
{
	class InputMethodService;
}
namespace android::os
{
	class ResultReceiver;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::view::inputmethod
{
	class InputBinding;
}
namespace android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace android::inputmethodservice
{
	class InputMethodService_InputMethodImpl : public android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodService_InputMethodImpl(const char *className, const char *sig, Ts...agv) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService_InputMethodImpl(QJniObject obj);
		
		// Constructors
		InputMethodService_InputMethodImpl(android::inputmethodservice::InputMethodService arg0);
		
		// Methods
		void attachToken(__JniBaseClass arg0);
		void bindInput(android::view::inputmethod::InputBinding arg0);
		void changeInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0);
		void hideSoftInput(jint arg0, android::os::ResultReceiver arg1);
		void restartInput(__JniBaseClass arg0, android::view::inputmethod::EditorInfo arg1);
		void showSoftInput(jint arg0, android::os::ResultReceiver arg1);
		void startInput(__JniBaseClass arg0, android::view::inputmethod::EditorInfo arg1);
		void unbindInput();
	};
} // namespace android::inputmethodservice

