#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class Script_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Script_Builder(QAndroidJniObject obj);
		// Constructors
		Script_Builder() = default;
		
		// Methods
	};
} // namespace android::renderscript

