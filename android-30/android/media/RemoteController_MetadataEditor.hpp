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
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteController_MetadataEditor(const char *className, const char *sig, Ts...agv) : android::media::MediaMetadataEditor(className, sig, std::forward<Ts>(agv)...) {}
		RemoteController_MetadataEditor(QJniObject obj);
		
		// Constructors
		
		// Methods
		void apply();
	};
} // namespace android::media

