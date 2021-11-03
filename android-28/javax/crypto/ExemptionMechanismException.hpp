#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class ExemptionMechanismException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExemptionMechanismException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanismException(QAndroidJniObject obj);
		
		// Constructors
		ExemptionMechanismException();
		ExemptionMechanismException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

