#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class SearchIterator_ElementComparisonType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::SearchIterator_ElementComparisonType ANY_BASE_WEIGHT_IS_WILDCARD();
		static android::icu::text::SearchIterator_ElementComparisonType PATTERN_BASE_WEIGHT_IS_WILDCARD();
		static android::icu::text::SearchIterator_ElementComparisonType STANDARD_ELEMENT_COMPARISON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchIterator_ElementComparisonType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SearchIterator_ElementComparisonType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::SearchIterator_ElementComparisonType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

