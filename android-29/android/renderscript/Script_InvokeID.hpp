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
	class Script_InvokeID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		Script_InvokeID(QAndroidJniObject obj);
		// Constructors
		Script_InvokeID() = default;
		
		// Methods
	};
} // namespace android::renderscript

