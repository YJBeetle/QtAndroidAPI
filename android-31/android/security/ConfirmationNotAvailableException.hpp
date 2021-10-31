#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::security
{
	class ConfirmationNotAvailableException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfirmationNotAvailableException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationNotAvailableException(QAndroidJniObject obj);
		
		// Constructors
		ConfirmationNotAvailableException();
		ConfirmationNotAvailableException(jstring arg0);
		
		// Methods
	};
} // namespace android::security

