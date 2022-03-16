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
	class Script_FieldID;
}
namespace android::renderscript
{
	class Script_KernelID;
}

namespace android::renderscript
{
	class ScriptIntrinsicYuvToRGB : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicYuvToRGB(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicYuvToRGB(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicYuvToRGB create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0) const;
		android::renderscript::Script_FieldID getFieldID_Input() const;
		android::renderscript::Script_KernelID getKernelID() const;
		void setInput(android::renderscript::Allocation arg0) const;
	};
} // namespace android::renderscript

