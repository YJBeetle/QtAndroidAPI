#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSet_ComparisonStyle : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::UnicodeSet_ComparisonStyle LEXICOGRAPHIC();
		static android::icu::text::UnicodeSet_ComparisonStyle LONGER_FIRST();
		static android::icu::text::UnicodeSet_ComparisonStyle SHORTER_FIRST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSet_ComparisonStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_ComparisonStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSet_ComparisonStyle valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text
