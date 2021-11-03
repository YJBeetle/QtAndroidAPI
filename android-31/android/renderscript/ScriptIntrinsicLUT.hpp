#pragma once

#include "./ScriptIntrinsic.hpp"

namespace android::renderscript
{
	class Allocation;
}
namespace android::renderscript
{
	class Element;
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
	class Script_LaunchOptions;
}

namespace android::renderscript
{
	class ScriptIntrinsicLUT : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicLUT(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicLUT(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicLUT create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void destroy();
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		android::renderscript::Script_KernelID getKernelID();
		void setAlpha(jint arg0, jint arg1);
		void setBlue(jint arg0, jint arg1);
		void setGreen(jint arg0, jint arg1);
		void setRed(jint arg0, jint arg1);
	};
} // namespace android::renderscript

