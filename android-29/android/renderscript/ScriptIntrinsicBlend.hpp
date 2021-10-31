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
		ScriptIntrinsicBlend(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
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
		QAndroidJniObject getKernelIDAdd();
		QAndroidJniObject getKernelIDClear();
		QAndroidJniObject getKernelIDDst();
		QAndroidJniObject getKernelIDDstAtop();
		QAndroidJniObject getKernelIDDstIn();
		QAndroidJniObject getKernelIDDstOut();
		QAndroidJniObject getKernelIDDstOver();
		QAndroidJniObject getKernelIDMultiply();
		QAndroidJniObject getKernelIDSrc();
		QAndroidJniObject getKernelIDSrcAtop();
		QAndroidJniObject getKernelIDSrcIn();
		QAndroidJniObject getKernelIDSrcOut();
		QAndroidJniObject getKernelIDSrcOver();
		QAndroidJniObject getKernelIDSubtract();
		QAndroidJniObject getKernelIDXor();
	};
} // namespace android::renderscript

