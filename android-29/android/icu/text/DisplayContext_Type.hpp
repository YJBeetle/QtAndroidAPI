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
		
		DisplayContext_Type(QAndroidJniObject obj);
		// Constructors
		DisplayContext_Type() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

