#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneNames_NameType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EXEMPLAR_LOCATION();
		static QAndroidJniObject LONG_DAYLIGHT();
		static QAndroidJniObject LONG_GENERIC();
		static QAndroidJniObject LONG_STANDARD();
		static QAndroidJniObject SHORT_DAYLIGHT();
		static QAndroidJniObject SHORT_GENERIC();
		static QAndroidJniObject SHORT_STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneNames_NameType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneNames_NameType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

