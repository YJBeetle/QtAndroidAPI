#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::security::cert
{
	class PKIXRevocationChecker_Option : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NO_FALLBACK();
		static QAndroidJniObject ONLY_END_ENTITY();
		static QAndroidJniObject PREFER_CRLS();
		static QAndroidJniObject SOFT_FAIL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXRevocationChecker_Option(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PKIXRevocationChecker_Option(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

