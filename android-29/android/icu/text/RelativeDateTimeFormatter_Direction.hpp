#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_Direction : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LAST();
		static QAndroidJniObject LAST_2();
		static QAndroidJniObject NEXT();
		static QAndroidJniObject NEXT_2();
		static QAndroidJniObject PLAIN();
		static QAndroidJniObject THIS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_Direction(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_Direction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

