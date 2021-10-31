#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ScriptGroup_Builder2 : public __JniBaseClass
	{
	public:
		// Fields
		
		ScriptGroup_Builder2(QAndroidJniObject obj);
		// Constructors
		ScriptGroup_Builder2(android::renderscript::RenderScript arg0);
		ScriptGroup_Builder2() = default;
		
		// Methods
		QAndroidJniObject addInput();
		QAndroidJniObject addInvoke(android::renderscript::Script_InvokeID arg0, jobjectArray arg1);
		QAndroidJniObject addKernel(android::renderscript::Script_KernelID arg0, android::renderscript::Type arg1, jobjectArray arg2);
		QAndroidJniObject create(jstring arg0, jarray arg1);
	};
} // namespace android::renderscript

