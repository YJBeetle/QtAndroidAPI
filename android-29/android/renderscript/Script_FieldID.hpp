#pragma once

#include "../../JObject.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script;
}

namespace android::renderscript
{
	class Script_FieldID : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Script_FieldID(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Script_FieldID(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

