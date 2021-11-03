#pragma once

#include "../../JObject.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	class Allocation;
}
namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script_KernelID;
}

namespace android::renderscript
{
	class ScriptGroup : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		jobjectArray execute(jobjectArray arg0);
		void execute();
		void setInput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1);
		void setOutput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1);
	};
} // namespace android::renderscript

