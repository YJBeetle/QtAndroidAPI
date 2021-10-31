#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::util
{
	class TimeZone_SystemTimeZoneType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ANY();
		static QAndroidJniObject CANONICAL();
		static QAndroidJniObject CANONICAL_LOCATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZone_SystemTimeZoneType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZone_SystemTimeZoneType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::util

