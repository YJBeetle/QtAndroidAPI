#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::inputmethodservice
{
	class AbstractInputMethodService;
}

namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractInputMethodService_AbstractInputMethodImpl(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractInputMethodService_AbstractInputMethodImpl(QAndroidJniObject obj);
		
		// Constructors
		AbstractInputMethodService_AbstractInputMethodImpl(android::inputmethodservice::AbstractInputMethodService arg0);
		
		// Methods
		void createSession(__JniBaseClass arg0);
		void revokeSession(__JniBaseClass arg0);
		void setSessionEnabled(__JniBaseClass arg0, jboolean arg1);
	};
} // namespace android::inputmethodservice

