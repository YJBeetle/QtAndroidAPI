#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

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
		RenderScript_ContextType(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::RenderScript_ContextType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::renderscript

