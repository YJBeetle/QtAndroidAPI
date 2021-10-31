#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MessagePattern_ArgType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::MessagePattern_ArgType CHOICE();
		static android::icu::text::MessagePattern_ArgType NONE();
		static android::icu::text::MessagePattern_ArgType PLURAL();
		static android::icu::text::MessagePattern_ArgType SELECT();
		static android::icu::text::MessagePattern_ArgType SELECTORDINAL();
		static android::icu::text::MessagePattern_ArgType SIMPLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePattern_ArgType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_ArgType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::MessagePattern_ArgType valueOf(jstring arg0);
		static jarray values();
		jboolean hasPluralStyle();
	};
} // namespace android::icu::text

