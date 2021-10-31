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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleDisplayNames_DialectHandling(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		LocaleDisplayNames_DialectHandling(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

