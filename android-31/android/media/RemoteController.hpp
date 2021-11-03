#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class RemoteController_MetadataEditor;
}
namespace android::os
{
	class Looper;
}
namespace android::view
{
	class KeyEvent;
}

namespace android::media
{
	class RemoteController : public JObject
	{
	public:
		// Fields
		static jint POSITION_SYNCHRONIZATION_CHECK();
		static jint POSITION_SYNCHRONIZATION_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteController(QAndroidJniObject obj);
		
		// Constructors
		RemoteController(android::content::Context arg0, JObject arg1);
		RemoteController(android::content::Context arg0, JObject arg1, android::os::Looper arg2);
		
		// Methods
		jboolean clearArtworkConfiguration() const;
		android::media::RemoteController_MetadataEditor editMetadata() const;
		jlong getEstimatedMediaPosition() const;
		jboolean seekTo(jlong arg0) const;
		jboolean sendMediaKeyEvent(android::view::KeyEvent arg0) const;
		jboolean setArtworkConfiguration(jint arg0, jint arg1) const;
		jboolean setSynchronizationMode(jint arg0) const;
	};
} // namespace android::media

