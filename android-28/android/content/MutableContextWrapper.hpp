#pragma once

#include "./Context.def.hpp"
#include "./MutableContextWrapper.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline MutableContextWrapper::MutableContextWrapper(android::content::Context arg0)
		: android::content::ContextWrapper(
			"android.content.MutableContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void MutableContextWrapper::setBaseContext(android::content::Context arg0) const
	{
		callMethod<void>(
			"setBaseContext",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers
#include "./Context.hpp"
#include "./ContextWrapper.hpp"

