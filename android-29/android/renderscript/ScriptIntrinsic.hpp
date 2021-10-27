#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"

namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class ScriptIntrinsic : public android::renderscript::Script
	{
	public:
		// Fields
		
		ScriptIntrinsic(QAndroidJniObject obj);
		// Constructors
		ScriptIntrinsic() = default;
		
		// Methods
	};
} // namespace android::renderscript

