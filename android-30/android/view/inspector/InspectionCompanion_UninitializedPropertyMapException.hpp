#pragma once

#include "./InspectionCompanion_UninitializedPropertyMapException.def.hpp"

namespace android::view::inspector
{
	// Fields
	
	// Constructors
	inline InspectionCompanion_UninitializedPropertyMapException::InspectionCompanion_UninitializedPropertyMapException()
		: java::lang::RuntimeException(
			"android.view.inspector.InspectionCompanion$UninitializedPropertyMapException",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::inspector

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

