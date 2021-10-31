#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAYS();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject WEEKS();
		static QAndroidJniObject YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_RelativeUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_RelativeUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

