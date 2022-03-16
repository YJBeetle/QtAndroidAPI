#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class Script_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Script_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Script_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

