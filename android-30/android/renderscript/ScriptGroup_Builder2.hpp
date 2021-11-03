#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script_InvokeID;
}
namespace android::renderscript
{
	class Script_KernelID;
}
namespace android::renderscript
{
	class ScriptGroup;
}
namespace android::renderscript
{
	class ScriptGroup_Closure;
}
namespace android::renderscript
{
	class ScriptGroup_Input;
}
namespace android::renderscript
{
	class Type;
}

namespace android::renderscript
{
	class ScriptGroup_Builder2 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Builder2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Builder2(QJniObject obj);
		
		// Constructors
		ScriptGroup_Builder2(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::ScriptGroup_Input addInput();
		android::renderscript::ScriptGroup_Closure addInvoke(android::renderscript::Script_InvokeID arg0, jobjectArray arg1);
		android::renderscript::ScriptGroup_Closure addKernel(android::renderscript::Script_KernelID arg0, android::renderscript::Type arg1, jobjectArray arg2);
		android::renderscript::ScriptGroup create(jstring arg0, jarray arg1);
	};
} // namespace android::renderscript

