#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class CertPathValidatorException_BasicReason : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::cert::CertPathValidatorException_BasicReason ALGORITHM_CONSTRAINED();
		static java::security::cert::CertPathValidatorException_BasicReason EXPIRED();
		static java::security::cert::CertPathValidatorException_BasicReason INVALID_SIGNATURE();
		static java::security::cert::CertPathValidatorException_BasicReason NOT_YET_VALID();
		static java::security::cert::CertPathValidatorException_BasicReason REVOKED();
		static java::security::cert::CertPathValidatorException_BasicReason UNDETERMINED_REVOCATION_STATUS();
		static java::security::cert::CertPathValidatorException_BasicReason UNSPECIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidatorException_BasicReason(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidatorException_BasicReason(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::cert::CertPathValidatorException_BasicReason valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

