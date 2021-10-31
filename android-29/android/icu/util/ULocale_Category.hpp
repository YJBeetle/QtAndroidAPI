#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::util
{
	class ULocale_Category : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DISPLAY();
		static QAndroidJniObject FORMAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ULocale_Category(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ULocale_Category(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::util

