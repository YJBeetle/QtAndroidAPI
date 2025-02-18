#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::renderscript
{
	class RenderScript_Priority : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::RenderScript_Priority LOW();
		static android::renderscript::RenderScript_Priority NORMAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderScript_Priority(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_Priority(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::RenderScript_Priority valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::renderscript

