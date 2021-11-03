#pragma once

#include "../../JObject.hpp"

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
	class ScriptGroup_Future : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Future(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Future(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

