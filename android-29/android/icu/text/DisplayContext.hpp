#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"

namespace android::icu::text
{
	class DisplayContext_Type;
}

namespace android::icu::text
{
	class DisplayContext : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE();
		static QAndroidJniObject CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE();
		static QAndroidJniObject CAPITALIZATION_FOR_STANDALONE();
		static QAndroidJniObject CAPITALIZATION_FOR_UI_LIST_OR_MENU();
		static QAndroidJniObject CAPITALIZATION_NONE();
		static QAndroidJniObject DIALECT_NAMES();
		static QAndroidJniObject LENGTH_FULL();
		static QAndroidJniObject LENGTH_SHORT();
		static QAndroidJniObject NO_SUBSTITUTE();
		static QAndroidJniObject STANDARD_NAMES();
		static QAndroidJniObject SUBSTITUTE();
		
		DisplayContext(QAndroidJniObject obj);
		// Constructors
		DisplayContext() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		QAndroidJniObject type();
		jint value();
	};
} // namespace android::icu::text

