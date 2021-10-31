#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class PluralRules_PluralType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::PluralRules_PluralType CARDINAL();
		static android::icu::text::PluralRules_PluralType ORDINAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PluralRules_PluralType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PluralRules_PluralType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::PluralRules_PluralType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

