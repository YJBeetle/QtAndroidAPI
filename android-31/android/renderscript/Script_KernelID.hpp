#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"


namespace android::renderscript
{
	class Script_KernelID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Script_KernelID(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Script_KernelID(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

