#pragma once

#include "../../JObject.hpp"

class JArray;
class JObjectArray;
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
class JString;

namespace android::renderscript
{
	class ScriptGroup_Builder2 : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Builder2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Builder2(QAndroidJniObject obj);
		
		// Constructors
		ScriptGroup_Builder2(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::ScriptGroup_Input addInput();
		android::renderscript::ScriptGroup_Closure addInvoke(android::renderscript::Script_InvokeID arg0, JObjectArray arg1);
		android::renderscript::ScriptGroup_Closure addKernel(android::renderscript::Script_KernelID arg0, android::renderscript::Type arg1, JObjectArray arg2);
		android::renderscript::ScriptGroup create(JString arg0, JArray arg1);
	};
} // namespace android::renderscript

