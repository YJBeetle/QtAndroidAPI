#pragma once

#include "../../__JniBaseClass.hpp"

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
	class RemoteController : public __JniBaseClass
	{
	public:
		// Fields
		static jint POSITION_SYNCHRONIZATION_CHECK();
		static jint POSITION_SYNCHRONIZATION_NONE();
		
		RemoteController(QAndroidJniObject obj);
		// Constructors
		RemoteController(android::content::Context &arg0, __JniBaseClass &arg1);
		RemoteController(android::content::Context &arg0, __JniBaseClass &arg1, android::os::Looper &arg2);
		RemoteController() = default;
		
		// Methods
		jboolean clearArtworkConfiguration();
		QAndroidJniObject editMetadata();
		jlong getEstimatedMediaPosition();
		jboolean seekTo(jlong arg0);
		jboolean sendMediaKeyEvent(android::view::KeyEvent arg0);
		jboolean setArtworkConfiguration(jint arg0, jint arg1);
		jboolean setSynchronizationMode(jint arg0);
	};
} // namespace android::media

