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
		
		AbstractInputMethodService_AbstractInputMethodImpl(QAndroidJniObject obj);
		// Constructors
		AbstractInputMethodService_AbstractInputMethodImpl(android::inputmethodservice::AbstractInputMethodService &arg0);
		AbstractInputMethodService_AbstractInputMethodImpl() = default;
		
		// Methods
		void createSession(__JniBaseClass arg0);
		void revokeSession(__JniBaseClass arg0);
		void setSessionEnabled(__JniBaseClass arg0, jboolean arg1);
	};
} // namespace android::inputmethodservice

