#pragma once

#include "./ScriptIntrinsic.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicBlend(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicBlend(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicBlend create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		void forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		android::renderscript::Script_KernelID getKernelIDAdd() const;
		android::renderscript::Script_KernelID getKernelIDClear() const;
		android::renderscript::Script_KernelID getKernelIDDst() const;
		android::renderscript::Script_KernelID getKernelIDDstAtop() const;
		android::renderscript::Script_KernelID getKernelIDDstIn() const;
		android::renderscript::Script_KernelID getKernelIDDstOut() const;
		android::renderscript::Script_KernelID getKernelIDDstOver() const;
		android::renderscript::Script_KernelID getKernelIDMultiply() const;
		android::renderscript::Script_KernelID getKernelIDSrc() const;
		android::renderscript::Script_KernelID getKernelIDSrcAtop() const;
		android::renderscript::Script_KernelID getKernelIDSrcIn() const;
		android::renderscript::Script_KernelID getKernelIDSrcOut() const;
		android::renderscript::Script_KernelID getKernelIDSrcOver() const;
		android::renderscript::Script_KernelID getKernelIDSubtract() const;
		android::renderscript::Script_KernelID getKernelIDXor() const;
	};
} // namespace android::renderscript

