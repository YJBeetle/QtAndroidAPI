#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Script_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Script_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Script_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::renderscript

