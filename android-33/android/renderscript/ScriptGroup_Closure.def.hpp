#pragma once

#include "./BaseObj.def.hpp"

namespace android::renderscript
{
	class Script_FieldID;
}
namespace android::renderscript
{
	class ScriptGroup_Future;
}

namespace android::renderscript
{
	class ScriptGroup_Closure : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptGroup_Closure(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		ScriptGroup_Closure(QJniObject obj) : android::renderscript::BaseObj(obj) {}
		
		// Constructors
		
		// Methods
		void destroy() const;
		android::renderscript::ScriptGroup_Future getGlobal(android::renderscript::Script_FieldID arg0) const;
		android::renderscript::ScriptGroup_Future getReturn() const;
	};
} // namespace android::renderscript

