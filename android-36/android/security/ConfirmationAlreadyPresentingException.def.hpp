#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;

namespace android::security
{
	class ConfirmationAlreadyPresentingException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfirmationAlreadyPresentingException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationAlreadyPresentingException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		ConfirmationAlreadyPresentingException();
		ConfirmationAlreadyPresentingException(JString arg0);
		
		// Methods
	};
} // namespace android::security

