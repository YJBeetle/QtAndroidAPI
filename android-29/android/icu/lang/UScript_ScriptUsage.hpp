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
		
		UScript_ScriptUsage(QAndroidJniObject obj);
		// Constructors
		UScript_ScriptUsage() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::lang

