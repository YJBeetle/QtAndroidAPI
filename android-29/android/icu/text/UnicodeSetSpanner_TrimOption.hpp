#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSetSpanner_TrimOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BOTH();
		static QAndroidJniObject LEADING();
		static QAndroidJniObject TRAILING();
		
		UnicodeSetSpanner_TrimOption(QAndroidJniObject obj);
		// Constructors
		UnicodeSetSpanner_TrimOption() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

