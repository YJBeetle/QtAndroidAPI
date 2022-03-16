#pragma once

#include "./BaseObj.def.hpp"

class JObjectArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup(QJniObject obj) : android::renderscript::BaseObj(obj) {}
		
		// Constructors
		
		// Methods
		void destroy() const;
		JObjectArray execute(JObjectArray arg0) const;
		void execute() const;
		void setInput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1) const;
		void setOutput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1) const;
	};
} // namespace android::renderscript

