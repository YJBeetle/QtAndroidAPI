#pragma once

#include "../../JObject.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"
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
	class ScriptIntrinsicBlend : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicBlend(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicBlend(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicBlend create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		void forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		android::renderscript::Script_KernelID getKernelIDAdd();
		android::renderscript::Script_KernelID getKernelIDClear();
		android::renderscript::Script_KernelID getKernelIDDst();
		android::renderscript::Script_KernelID getKernelIDDstAtop();
		android::renderscript::Script_KernelID getKernelIDDstIn();
		android::renderscript::Script_KernelID getKernelIDDstOut();
		android::renderscript::Script_KernelID getKernelIDDstOver();
		android::renderscript::Script_KernelID getKernelIDMultiply();
		android::renderscript::Script_KernelID getKernelIDSrc();
		android::renderscript::Script_KernelID getKernelIDSrcAtop();
		android::renderscript::Script_KernelID getKernelIDSrcIn();
		android::renderscript::Script_KernelID getKernelIDSrcOut();
		android::renderscript::Script_KernelID getKernelIDSrcOver();
		android::renderscript::Script_KernelID getKernelIDSubtract();
		android::renderscript::Script_KernelID getKernelIDXor();
	};
} // namespace android::renderscript

