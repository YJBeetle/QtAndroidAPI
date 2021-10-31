#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class PlaybackState_CustomAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		PlaybackState_CustomAction_Builder(QAndroidJniObject obj);
		// Constructors
		PlaybackState_CustomAction_Builder(jstring arg0, jstring arg1, jint arg2);
		PlaybackState_CustomAction_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
	};
} // namespace android::media::session

