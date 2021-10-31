#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class ScriptGroup_Input : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Input(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Input(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

