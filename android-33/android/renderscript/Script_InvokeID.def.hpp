#pragma once

#include "./BaseObj.def.hpp"

namespace android::renderscript
{
	class Script_InvokeID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Script_InvokeID(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Script_InvokeID(QJniObject obj) : android::renderscript::BaseObj(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

