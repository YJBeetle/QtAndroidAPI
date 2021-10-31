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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Closure(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Closure(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		QAndroidJniObject getGlobal(android::renderscript::Script_FieldID arg0);
		QAndroidJniObject getReturn();
	};
} // namespace android::renderscript

