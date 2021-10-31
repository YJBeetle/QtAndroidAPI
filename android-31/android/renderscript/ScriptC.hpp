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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptC(const char *className, const char *sig, Ts...agv) : android::renderscript::Script(className, sig, std::forward<Ts>(agv)...) {}
		ScriptC(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript
