#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class PluralRules_PluralType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CARDINAL();
		static QAndroidJniObject ORDINAL();
		
		PluralRules_PluralType(QAndroidJniObject obj);
		// Constructors
		PluralRules_PluralType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

