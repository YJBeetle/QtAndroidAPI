#include "./RemoteController.hpp"
#include "./RemoteController_MetadataEditor.hpp"

namespace android::media
{
	// Fields
	
	RemoteController_MetadataEditor::RemoteController_MetadataEditor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RemoteController_MetadataEditor::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V"
		);
	}
} // namespace android::media

