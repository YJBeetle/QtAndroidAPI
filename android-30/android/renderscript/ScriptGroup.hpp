#pragma once

#include "./BaseObj.hpp"

class JObjectArray;
namespace android::renderscript
{
	class Allocation;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup(QJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		JObjectArray execute(JObjectArray arg0);
		void execute();
		void setInput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1);
		void setOutput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1);
	};
} // namespace android::renderscript

