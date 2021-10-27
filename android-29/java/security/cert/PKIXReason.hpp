#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class PKIXReason : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INVALID_KEY_USAGE();
		static QAndroidJniObject INVALID_NAME();
		static QAndroidJniObject INVALID_POLICY();
		static QAndroidJniObject NAME_CHAINING();
		static QAndroidJniObject NOT_CA_CERT();
		static QAndroidJniObject NO_TRUST_ANCHOR();
		static QAndroidJniObject PATH_TOO_LONG();
		static QAndroidJniObject UNRECOGNIZED_CRIT_EXT();
		
		PKIXReason(QAndroidJniObject obj);
		// Constructors
		PKIXReason() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::security::cert

