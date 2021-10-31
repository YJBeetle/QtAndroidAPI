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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Binding(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Binding(QAndroidJniObject obj);
		
		// Constructors
		ScriptGroup_Binding(android::renderscript::Script_FieldID arg0, jobject arg1);
		
		// Methods
	};
} // namespace android::renderscript

