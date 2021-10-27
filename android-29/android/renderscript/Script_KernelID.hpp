#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script;
}

namespace android::renderscript
{
	class Script_KernelID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		Script_KernelID(QAndroidJniObject obj);
		// Constructors
		Script_KernelID() = default;
		
		// Methods
	};
} // namespace android::renderscript

