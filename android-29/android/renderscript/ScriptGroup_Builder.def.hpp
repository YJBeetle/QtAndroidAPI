#pragma once

#include "../../JObject.hpp"

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
	class ScriptGroup_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScriptGroup_Builder(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::ScriptGroup_Builder addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_FieldID arg2) const;
		android::renderscript::ScriptGroup_Builder addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_KernelID arg2) const;
		android::renderscript::ScriptGroup_Builder addKernel(android::renderscript::Script_KernelID arg0) const;
		android::renderscript::ScriptGroup create() const;
	};
} // namespace android::renderscript

