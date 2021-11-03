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
class JObject;

namespace android::renderscript
{
	class ScriptGroup_Future : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Future(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Future(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

