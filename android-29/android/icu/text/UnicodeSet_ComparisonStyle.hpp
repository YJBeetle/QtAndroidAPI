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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSet_ComparisonStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_ComparisonStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

