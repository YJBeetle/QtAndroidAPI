#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSet_ComparisonStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LEXICOGRAPHIC();
		static QAndroidJniObject LONGER_FIRST();
		static QAndroidJniObject SHORTER_FIRST();
		
		UnicodeSet_ComparisonStyle(QAndroidJniObject obj);
		// Constructors
		UnicodeSet_ComparisonStyle() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

