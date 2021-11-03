#pragma once

#include "./ScriptIntrinsic.hpp"

class JFloatArray;
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
	class ScriptIntrinsicConvolve3x3 : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicConvolve3x3(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicConvolve3x3(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicConvolve3x3 create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0) const;
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const;
		android::renderscript::Script_FieldID getFieldID_Input() const;
		android::renderscript::Script_KernelID getKernelID() const;
		void setCoefficients(JFloatArray arg0) const;
		void setInput(android::renderscript::Allocation arg0) const;
	};
} // namespace android::renderscript

