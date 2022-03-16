#include "./RemoteController.hpp"
#include "./RemoteController_MetadataEditor.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	void RemoteController_MetadataEditor::apply() const
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
} // namespace android::media

