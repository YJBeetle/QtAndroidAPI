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
	class ScriptIntrinsicLUT : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		ScriptIntrinsicLUT(QAndroidJniObject obj);
		// Constructors
		ScriptIntrinsicLUT() = default;
		
		// Methods
		static QAndroidJniObject create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void destroy();
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		QAndroidJniObject getKernelID();
		void setAlpha(jint arg0, jint arg1);
		void setBlue(jint arg0, jint arg1);
		void setGreen(jint arg0, jint arg1);
		void setRed(jint arg0, jint arg1);
	};
} // namespace android::renderscript

