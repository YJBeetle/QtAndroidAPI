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
		
		SearchIterator_ElementComparisonType(QAndroidJniObject obj);
		// Constructors
		SearchIterator_ElementComparisonType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

