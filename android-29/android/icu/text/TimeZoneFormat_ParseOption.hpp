#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_ParseOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALL_STYLES();
		static QAndroidJniObject TZ_DATABASE_ABBREVIATIONS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_ParseOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_ParseOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

