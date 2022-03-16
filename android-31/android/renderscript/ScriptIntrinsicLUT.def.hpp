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
	class ScriptIntrinsicLUT : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicLUT(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicLUT(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicLUT create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void destroy() const;
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		android::renderscript::Script_KernelID getKernelID() const;
		void setAlpha(jint arg0, jint arg1) const;
		void setBlue(jint arg0, jint arg1) const;
		void setGreen(jint arg0, jint arg1) const;
		void setRed(jint arg0, jint arg1) const;
	};
} // namespace android::renderscript

