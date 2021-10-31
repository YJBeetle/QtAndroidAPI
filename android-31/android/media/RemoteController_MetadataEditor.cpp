#include "./RemoteController.hpp"
#include "./RemoteController_MetadataEditor.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	RemoteController_MetadataEditor::RemoteController_MetadataEditor(QJniObject obj) : android::media::MediaMetadataEditor(obj) {}
	
	// Constructors
	
	// Methods
	void RemoteController_MetadataEditor::apply()
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
} // namespace android::media

