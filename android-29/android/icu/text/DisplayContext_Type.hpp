#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class DisplayContext_Type : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CAPITALIZATION();
		static QAndroidJniObject DIALECT_HANDLING();
		static QAndroidJniObject DISPLAY_LENGTH();
		static QAndroidJniObject SUBSTITUTE_HANDLING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DisplayContext_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayContext_Type(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

