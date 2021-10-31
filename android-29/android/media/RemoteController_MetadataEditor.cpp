#include "./RemoteController.hpp"
#include "./RemoteController_MetadataEditor.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteController_MetadataEditor::RemoteController_MetadataEditor(QAndroidJniObject obj) : android::media::MediaMetadataEditor(obj) {}
	
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

