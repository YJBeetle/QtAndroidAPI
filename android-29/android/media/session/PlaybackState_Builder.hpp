#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::session
{
	class PlaybackState;
}
namespace android::media::session
{
	class PlaybackState_CustomAction;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::session
{
	class PlaybackState_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		PlaybackState_Builder(QAndroidJniObject obj);
		// Constructors
		PlaybackState_Builder();
		PlaybackState_Builder(android::media::session::PlaybackState arg0);
		
		// Methods
		QAndroidJniObject addCustomAction(android::media::session::PlaybackState_CustomAction arg0);
		QAndroidJniObject addCustomAction(jstring arg0, jstring arg1, jint arg2);
		QAndroidJniObject build();
		QAndroidJniObject setActions(jlong arg0);
		QAndroidJniObject setActiveQueueItemId(jlong arg0);
		QAndroidJniObject setBufferedPosition(jlong arg0);
		QAndroidJniObject setErrorMessage(jstring arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setState(jint arg0, jlong arg1, jfloat arg2);
		QAndroidJniObject setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3);
	};
} // namespace android::media::session

