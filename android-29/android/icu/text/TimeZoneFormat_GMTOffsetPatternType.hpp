#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NEGATIVE_H();
		static QAndroidJniObject NEGATIVE_HM();
		static QAndroidJniObject NEGATIVE_HMS();
		static QAndroidJniObject POSITIVE_H();
		static QAndroidJniObject POSITIVE_HM();
		static QAndroidJniObject POSITIVE_HMS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_GMTOffsetPatternType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_GMTOffsetPatternType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

