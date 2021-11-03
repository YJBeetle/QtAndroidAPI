#pragma once

#include "./Script.hpp"

namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class ScriptIntrinsic : public android::renderscript::Script
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsic(const char *className, const char *sig, Ts...agv) : android::renderscript::Script(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsic(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

