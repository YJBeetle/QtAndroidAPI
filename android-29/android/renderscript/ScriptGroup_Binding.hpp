#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class Script_FieldID;
}

namespace android::renderscript
{
	class ScriptGroup_Binding : public __JniBaseClass
	{
	public:
		// Fields
		
		ScriptGroup_Binding(QAndroidJniObject obj);
		// Constructors
		ScriptGroup_Binding(android::renderscript::Script_FieldID &arg0, jobject &arg1);
		ScriptGroup_Binding() = default;
		
		// Methods
	};
} // namespace android::renderscript

