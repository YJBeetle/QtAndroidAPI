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
		android::renderscript::Allocation getAllocation() const;
		android::renderscript::Element getElement() const;
		android::renderscript::Type getType() const;
		void updateAllocation() const;
	};
} // namespace android::renderscript

