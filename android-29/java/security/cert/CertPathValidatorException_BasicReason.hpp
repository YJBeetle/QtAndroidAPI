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
		
		CertPathValidatorException_BasicReason(QAndroidJniObject obj);
		// Constructors
		CertPathValidatorException_BasicReason() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::security::cert

