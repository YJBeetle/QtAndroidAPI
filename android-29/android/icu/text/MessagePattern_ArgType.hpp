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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePattern_ArgType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_ArgType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jboolean hasPluralStyle();
	};
} // namespace android::icu::text

