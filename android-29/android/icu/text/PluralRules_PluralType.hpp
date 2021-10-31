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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PluralRules_PluralType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PluralRules_PluralType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

