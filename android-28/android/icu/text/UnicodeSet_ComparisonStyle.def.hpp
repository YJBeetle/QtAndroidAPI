#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

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
		UnicodeSet_ComparisonStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSet_ComparisonStyle valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

