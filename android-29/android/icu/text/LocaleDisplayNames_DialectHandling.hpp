#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class LocaleDisplayNames_DialectHandling : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIALECT_NAMES();
		static QAndroidJniObject STANDARD_NAMES();
		
		LocaleDisplayNames_DialectHandling(QAndroidJniObject obj);
		// Constructors
		LocaleDisplayNames_DialectHandling() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

