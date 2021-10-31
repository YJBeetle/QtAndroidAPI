#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class PKIXReason : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::cert::PKIXReason INVALID_KEY_USAGE();
		static java::security::cert::PKIXReason INVALID_NAME();
		static java::security::cert::PKIXReason INVALID_POLICY();
		static java::security::cert::PKIXReason NAME_CHAINING();
		static java::security::cert::PKIXReason NOT_CA_CERT();
		static java::security::cert::PKIXReason NO_TRUST_ANCHOR();
		static java::security::cert::PKIXReason PATH_TOO_LONG();
		static java::security::cert::PKIXReason UNRECOGNIZED_CRIT_EXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXReason(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PKIXReason(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::cert::PKIXReason valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

