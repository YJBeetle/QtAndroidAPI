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
		
		// QJniObject forward
		template<typename ...Ts> explicit Script_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Script_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

