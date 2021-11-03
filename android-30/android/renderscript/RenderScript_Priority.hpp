#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class RenderScript_Priority : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::RenderScript_Priority LOW();
		static android::renderscript::RenderScript_Priority NORMAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderScript_Priority(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_Priority(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::RenderScript_Priority valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

