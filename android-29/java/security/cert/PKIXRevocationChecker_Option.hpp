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
		
		PKIXRevocationChecker_Option(QAndroidJniObject obj);
		// Constructors
		PKIXRevocationChecker_Option() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security::cert

