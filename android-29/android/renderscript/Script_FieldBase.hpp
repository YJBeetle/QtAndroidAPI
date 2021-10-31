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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Script_FieldBase(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Script_FieldBase(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getAllocation();
		QAndroidJniObject getElement();
		QAndroidJniObject getType();
		void updateAllocation();
	};
} // namespace android::renderscript

