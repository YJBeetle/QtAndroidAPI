#pragma once

#include "../../JString.hpp"
#include "./Editable_Factory.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline Editable_Factory::Editable_Factory()
		: JObject(
			"android.text.Editable$Factory",
			"()V"
		) {}
	
	// Methods
	inline android::text::Editable_Factory Editable_Factory::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.Editable$Factory",
			"getInstance",
			"()Landroid/text/Editable$Factory;"
		);
	}
	inline JObject Editable_Factory::newEditable(JString arg0) const
	{
		return callObjectMethod(
			"newEditable",
			"(Ljava/lang/CharSequence;)Landroid/text/Editable;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

// Base class headers

