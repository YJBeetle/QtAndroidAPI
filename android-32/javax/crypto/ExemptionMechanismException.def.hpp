#pragma once

#include "../../java/security/GeneralSecurityException.def.hpp"

class JString;

namespace javax::crypto
{
	class ExemptionMechanismException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExemptionMechanismException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanismException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		ExemptionMechanismException();
		ExemptionMechanismException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

