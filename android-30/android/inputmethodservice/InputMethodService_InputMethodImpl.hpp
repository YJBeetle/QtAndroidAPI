#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodService_InputMethodImpl(const char *className, const char *sig, Ts...agv) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService_InputMethodImpl(QAndroidJniObject obj);
		
		// Constructors
		InputMethodService_InputMethodImpl(android::inputmethodservice::InputMethodService arg0);
		
		// Methods
		void attachToken(JObject arg0) const;
		void bindInput(android::view::inputmethod::InputBinding arg0) const;
		void changeInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0) const;
		void hideSoftInput(jint arg0, android::os::ResultReceiver arg1) const;
		void restartInput(JObject arg0, android::view::inputmethod::EditorInfo arg1) const;
		void showSoftInput(jint arg0, android::os::ResultReceiver arg1) const;
		void startInput(JObject arg0, android::view::inputmethod::EditorInfo arg1) const;
		void unbindInput() const;
	};
} // namespace android::inputmethodservice

