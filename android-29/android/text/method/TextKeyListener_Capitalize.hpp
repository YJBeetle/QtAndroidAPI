#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::text::method
{
	class TextKeyListener_Capitalize : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CHARACTERS();
		static QAndroidJniObject NONE();
		static QAndroidJniObject SENTENCES();
		static QAndroidJniObject WORDS();
		
		TextKeyListener_Capitalize(QAndroidJniObject obj);
		// Constructors
		TextKeyListener_Capitalize() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text::method

