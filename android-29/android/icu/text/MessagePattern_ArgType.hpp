#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MessagePattern_ArgType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CHOICE();
		static QAndroidJniObject NONE();
		static QAndroidJniObject PLURAL();
		static QAndroidJniObject SELECT();
		static QAndroidJniObject SELECTORDINAL();
		static QAndroidJniObject SIMPLE();
		
		MessagePattern_ArgType(QAndroidJniObject obj);
		// Constructors
		MessagePattern_ArgType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jboolean hasPluralStyle();
	};
} // namespace android::icu::text

