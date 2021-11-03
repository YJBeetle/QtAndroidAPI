#pragma once

#include "../../../JObject.hpp"

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
	class PlaybackState_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackState_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackState_Builder(QJniObject obj);
		
		// Constructors
		PlaybackState_Builder();
		PlaybackState_Builder(android::media::session::PlaybackState arg0);
		
		// Methods
		android::media::session::PlaybackState_Builder addCustomAction(android::media::session::PlaybackState_CustomAction arg0);
		android::media::session::PlaybackState_Builder addCustomAction(jstring arg0, jstring arg1, jint arg2);
		android::media::session::PlaybackState build();
		android::media::session::PlaybackState_Builder setActions(jlong arg0);
		android::media::session::PlaybackState_Builder setActiveQueueItemId(jlong arg0);
		android::media::session::PlaybackState_Builder setBufferedPosition(jlong arg0);
		android::media::session::PlaybackState_Builder setErrorMessage(jstring arg0);
		android::media::session::PlaybackState_Builder setExtras(android::os::Bundle arg0);
		android::media::session::PlaybackState_Builder setState(jint arg0, jlong arg1, jfloat arg2);
		android::media::session::PlaybackState_Builder setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3);
	};
} // namespace android::media::session

