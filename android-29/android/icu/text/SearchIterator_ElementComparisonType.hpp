#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class SearchIterator_ElementComparisonType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ANY_BASE_WEIGHT_IS_WILDCARD();
		static QAndroidJniObject PATTERN_BASE_WEIGHT_IS_WILDCARD();
		static QAndroidJniObject STANDARD_ELEMENT_COMPARISON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchIterator_ElementComparisonType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SearchIterator_ElementComparisonType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

