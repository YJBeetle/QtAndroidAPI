#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class CRLReason : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AA_COMPROMISE();
		static QAndroidJniObject AFFILIATION_CHANGED();
		static QAndroidJniObject CA_COMPROMISE();
		static QAndroidJniObject CERTIFICATE_HOLD();
		static QAndroidJniObject CESSATION_OF_OPERATION();
		static QAndroidJniObject KEY_COMPROMISE();
		static QAndroidJniObject PRIVILEGE_WITHDRAWN();
		static QAndroidJniObject REMOVE_FROM_CRL();
		static QAndroidJniObject SUPERSEDED();
		static QAndroidJniObject UNSPECIFIED();
		static QAndroidJniObject UNUSED();
		
		CRLReason(QAndroidJniObject obj);
		// Constructors
		CRLReason() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

