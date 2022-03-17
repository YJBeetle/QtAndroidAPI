#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::lang
{
	class UScript_ScriptUsage : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::lang::UScript_ScriptUsage ASPIRATIONAL();
		static android::icu::lang::UScript_ScriptUsage EXCLUDED();
		static android::icu::lang::UScript_ScriptUsage LIMITED_USE();
		static android::icu::lang::UScript_ScriptUsage NOT_ENCODED();
		static android::icu::lang::UScript_ScriptUsage RECOMMENDED();
		static android::icu::lang::UScript_ScriptUsage UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UScript_ScriptUsage(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UScript_ScriptUsage(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::lang::UScript_ScriptUsage valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::lang

