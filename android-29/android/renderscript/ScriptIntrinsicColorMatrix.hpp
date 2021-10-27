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
	class Float4;
}
namespace android::renderscript
{
	class Matrix3f;
}
namespace android::renderscript
{
	class Matrix4f;
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
	class ScriptIntrinsicColorMatrix : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		ScriptIntrinsicColorMatrix(QAndroidJniObject obj);
		// Constructors
		ScriptIntrinsicColorMatrix() = default;
		
		// Methods
		static QAndroidJniObject create(android::renderscript::RenderScript arg0);
		static QAndroidJniObject create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2);
		QAndroidJniObject getKernelID();
		void setAdd(android::renderscript::Float4 arg0);
		void setAdd(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setColorMatrix(android::renderscript::Matrix3f arg0);
		void setColorMatrix(android::renderscript::Matrix4f arg0);
		void setGreyscale();
		void setRGBtoYUV();
		void setYUVtoRGB();
	};
} // namespace android::renderscript

