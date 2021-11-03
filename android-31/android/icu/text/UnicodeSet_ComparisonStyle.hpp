#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSet_ComparisonStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_ComparisonStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSet_ComparisonStyle valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

