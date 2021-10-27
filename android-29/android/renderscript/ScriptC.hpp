#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class ScriptC : public android::renderscript::Script
	{
	public:
		// Fields
		
		ScriptC(QAndroidJniObject obj);
		// Constructors
		ScriptC() = default;
		
		// Methods
	};
} // namespace android::renderscript

