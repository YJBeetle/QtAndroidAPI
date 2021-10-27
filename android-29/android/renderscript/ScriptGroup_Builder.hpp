#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script_FieldID;
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
	class Type;
}

namespace android::renderscript
{
	class ScriptGroup_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ScriptGroup_Builder(QAndroidJniObject obj);
		// Constructors
		ScriptGroup_Builder(android::renderscript::RenderScript &arg0);
		ScriptGroup_Builder() = default;
		
		// Methods
		QAndroidJniObject addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_FieldID arg2);
		QAndroidJniObject addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_KernelID arg2);
		QAndroidJniObject addKernel(android::renderscript::Script_KernelID arg0);
		QAndroidJniObject create();
	};
} // namespace android::renderscript

