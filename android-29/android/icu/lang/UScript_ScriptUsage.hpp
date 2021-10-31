#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::lang
{
	class UScript_ScriptUsage : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ASPIRATIONAL();
		static QAndroidJniObject EXCLUDED();
		static QAndroidJniObject LIMITED_USE();
		static QAndroidJniObject NOT_ENCODED();
		static QAndroidJniObject RECOMMENDED();
		static QAndroidJniObject UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UScript_ScriptUsage(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UScript_ScriptUsage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::lang

