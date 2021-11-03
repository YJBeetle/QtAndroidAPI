#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::security
{
	class ConfirmationAlreadyPresentingException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfirmationAlreadyPresentingException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationAlreadyPresentingException(QAndroidJniObject obj);
		
		// Constructors
		ConfirmationAlreadyPresentingException();
		ConfirmationAlreadyPresentingException(jstring arg0);
		
		// Methods
	};
} // namespace android::security

