#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Script_FieldID;
}
class JObject;

namespace android::renderscript
{
	class ScriptGroup_Binding : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Binding(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Binding(QAndroidJniObject obj);
		
		// Constructors
		ScriptGroup_Binding(android::renderscript::Script_FieldID arg0, JObject arg1);
		
		// Methods
	};
} // namespace android::renderscript

