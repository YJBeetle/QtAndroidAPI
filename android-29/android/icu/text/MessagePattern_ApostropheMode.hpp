#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MessagePattern_ApostropheMode : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::MessagePattern_ApostropheMode DOUBLE_OPTIONAL();
		static android::icu::text::MessagePattern_ApostropheMode DOUBLE_REQUIRED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePattern_ApostropheMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_ApostropheMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::MessagePattern_ApostropheMode valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

