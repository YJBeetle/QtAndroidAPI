#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Type;
}

namespace android::renderscript
{
	class Script_FieldBase : public __JniBaseClass
	{
	public:
		// Fields
		
		Script_FieldBase(QAndroidJniObject obj);
		// Constructors
		Script_FieldBase() = default;
		
		// Methods
		QAndroidJniObject getAllocation();
		QAndroidJniObject getElement();
		QAndroidJniObject getType();
		void updateAllocation();
	};
} // namespace android::renderscript

