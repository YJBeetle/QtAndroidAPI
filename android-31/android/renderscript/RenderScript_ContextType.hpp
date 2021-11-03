#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class RenderScript_ContextType : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::RenderScript_ContextType DEBUG();
		static android::renderscript::RenderScript_ContextType NORMAL();
		static android::renderscript::RenderScript_ContextType PROFILE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderScript_ContextType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_ContextType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::RenderScript_ContextType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

