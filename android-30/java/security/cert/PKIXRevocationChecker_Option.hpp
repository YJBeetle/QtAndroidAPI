#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class PKIXRevocationChecker_Option : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::cert::PKIXRevocationChecker_Option NO_FALLBACK();
		static java::security::cert::PKIXRevocationChecker_Option ONLY_END_ENTITY();
		static java::security::cert::PKIXRevocationChecker_Option PREFER_CRLS();
		static java::security::cert::PKIXRevocationChecker_Option SOFT_FAIL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXRevocationChecker_Option(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PKIXRevocationChecker_Option(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::cert::PKIXRevocationChecker_Option valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

