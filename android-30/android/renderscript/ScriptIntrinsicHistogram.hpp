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
	class ScriptIntrinsicHistogram : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicHistogram(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicHistogram(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicHistogram create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1);
		void forEach_Dot(android::renderscript::Allocation arg0);
		void forEach_Dot(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1);
		android::renderscript::Script_FieldID getFieldID_Input();
		android::renderscript::Script_KernelID getKernelID_Separate();
		void setDotCoefficients(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setOutput(android::renderscript::Allocation arg0);
	};
} // namespace android::renderscript
