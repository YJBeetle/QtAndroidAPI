#pragma once

#include "./RemoteController.def.hpp"
#include "./RemoteController_MetadataEditor.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RemoteController_MetadataEditor::apply() const
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
} // namespace android::media

// Base class headers
#include "./MediaMetadataEditor.hpp"

