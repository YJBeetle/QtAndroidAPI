#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class Script_FieldID;
}
namespace android::renderscript
{
	class ScriptGroup_Closure;
}

namespace android::renderscript
{
	class ScriptGroup_Future : public __JniBaseClass
	{
	public:
		// Fields
		
		ScriptGroup_Future(QAndroidJniObject obj);
		// Constructors
		ScriptGroup_Future() = default;
		
		// Methods
	};
} // namespace android::renderscript

