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
	class Script_FieldID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		Script_FieldID(QAndroidJniObject obj);
		// Constructors
		Script_FieldID() = default;
		
		// Methods
	};
} // namespace android::renderscript

