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
	class ScriptIntrinsic3DLUT : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsic3DLUT(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsic3DLUT(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsic3DLUT create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const;
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const;
		android::renderscript::Script_KernelID getKernelID() const;
		void setLUT(android::renderscript::Allocation arg0) const;
	};
} // namespace android::renderscript

