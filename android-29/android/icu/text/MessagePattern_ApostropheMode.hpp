#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MessagePattern_ApostropheMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DOUBLE_OPTIONAL();
		static QAndroidJniObject DOUBLE_REQUIRED();
		
		MessagePattern_ApostropheMode(QAndroidJniObject obj);
		// Constructors
		MessagePattern_ApostropheMode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

