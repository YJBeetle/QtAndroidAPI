#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class CertPathValidatorException_BasicReason : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALGORITHM_CONSTRAINED();
		static QAndroidJniObject EXPIRED();
		static QAndroidJniObject INVALID_SIGNATURE();
		static QAndroidJniObject NOT_YET_VALID();
		static QAndroidJniObject REVOKED();
		static QAndroidJniObject UNDETERMINED_REVOCATION_STATUS();
		static QAndroidJniObject UNSPECIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidatorException_BasicReason(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidatorException_BasicReason(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

