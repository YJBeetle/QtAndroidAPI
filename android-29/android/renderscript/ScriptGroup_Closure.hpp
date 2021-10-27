#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"

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
	class ScriptGroup_Future;
}

namespace android::renderscript
{
	class ScriptGroup_Closure : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		ScriptGroup_Closure(QAndroidJniObject obj);
		// Constructors
		ScriptGroup_Closure() = default;
		
		// Methods
		void destroy();
		QAndroidJniObject getGlobal(android::renderscript::Script_FieldID arg0);
		QAndroidJniObject getReturn();
	};
} // namespace android::renderscript

