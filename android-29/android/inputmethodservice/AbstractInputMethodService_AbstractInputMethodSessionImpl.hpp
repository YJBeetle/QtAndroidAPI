#pragma once

#include "../../JObject.hpp"

namespace android::inputmethodservice
{
	class AbstractInputMethodService;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}

namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractInputMethodService_AbstractInputMethodSessionImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInputMethodService_AbstractInputMethodSessionImpl(QJniObject obj);
		
		// Constructors
		AbstractInputMethodService_AbstractInputMethodSessionImpl(android::inputmethodservice::AbstractInputMethodService arg0);
		
		// Methods
		void dispatchGenericMotionEvent(jint arg0, android::view::MotionEvent arg1, JObject arg2) const;
		void dispatchKeyEvent(jint arg0, android::view::KeyEvent arg1, JObject arg2) const;
		void dispatchTrackballEvent(jint arg0, android::view::MotionEvent arg1, JObject arg2) const;
		jboolean isEnabled() const;
		jboolean isRevoked() const;
		void revokeSelf() const;
		void setEnabled(jboolean arg0) const;
	};
} // namespace android::inputmethodservice

