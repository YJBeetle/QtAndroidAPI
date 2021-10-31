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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSetSpanner_TrimOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetSpanner_TrimOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

