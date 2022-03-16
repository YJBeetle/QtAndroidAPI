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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicColorMatrix(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicColorMatrix(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicColorMatrix create(android::renderscript::RenderScript arg0);
		static android::renderscript::ScriptIntrinsicColorMatrix create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		android::renderscript::Script_KernelID getKernelID() const;
		void setAdd(android::renderscript::Float4 arg0) const;
		void setAdd(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setColorMatrix(android::renderscript::Matrix3f arg0) const;
		void setColorMatrix(android::renderscript::Matrix4f arg0) const;
		void setGreyscale() const;
		void setRGBtoYUV() const;
		void setYUVtoRGB() const;
	};
} // namespace android::renderscript

