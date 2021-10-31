#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class Script_FieldID;
}
namespace android::renderscript
{
	class ScriptGroup_Closure;
}

namespace android::renderscript
{
	class ScriptGroup_Future : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Future(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Future(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

