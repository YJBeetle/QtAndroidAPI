#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AbstractInputMethodService_AbstractInputMethodSessionImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractInputMethodService_AbstractInputMethodSessionImpl(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInputMethodService_AbstractInputMethodSessionImpl(QAndroidJniObject obj);
		
		// Constructors
		AbstractInputMethodService_AbstractInputMethodSessionImpl(android::inputmethodservice::AbstractInputMethodService arg0);
		
		// Methods
		void dispatchGenericMotionEvent(jint arg0, android::view::MotionEvent arg1, __JniBaseClass arg2);
		void dispatchKeyEvent(jint arg0, android::view::KeyEvent arg1, __JniBaseClass arg2);
		void dispatchTrackballEvent(jint arg0, android::view::MotionEvent arg1, __JniBaseClass arg2);
		jboolean isEnabled();
		jboolean isRevoked();
		void revokeSelf();
		void setEnabled(jboolean arg0);
	};
} // namespace android::inputmethodservice

