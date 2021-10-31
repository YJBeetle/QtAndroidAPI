#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

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
	class Script_FieldID;
}
namespace android::renderscript
{
	class Script_KernelID;
}
namespace android::renderscript
{
	class Script_LaunchOptions;
}

namespace android::renderscript
{
	class ScriptIntrinsicResize : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicResize(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicResize(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicResize create(android::renderscript::RenderScript arg0);
		void forEach_bicubic(android::renderscript::Allocation arg0);
		void forEach_bicubic(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1);
		android::renderscript::Script_FieldID getFieldID_Input();
		android::renderscript::Script_KernelID getKernelID_bicubic();
		void setInput(android::renderscript::Allocation arg0);
	};
} // namespace android::renderscript

