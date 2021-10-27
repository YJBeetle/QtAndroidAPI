#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MediaMetadataEditor.hpp"

namespace android::media
{
	class RemoteController;
}

namespace android::media
{
	class RemoteController_MetadataEditor : public android::media::MediaMetadataEditor
	{
	public:
		// Fields
		
		RemoteController_MetadataEditor(QAndroidJniObject obj);
		// Constructors
		RemoteController_MetadataEditor() = default;
		
		// Methods
		void apply();
	};
} // namespace android::media

