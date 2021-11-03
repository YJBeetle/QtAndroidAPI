#pragma once

#include "../../JObject.hpp"

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
	class Script_FieldBase : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Script_FieldBase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Script_FieldBase(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::renderscript::Allocation getAllocation();
		android::renderscript::Element getElement();
		android::renderscript::Type getType();
		void updateAllocation();
	};
} // namespace android::renderscript

