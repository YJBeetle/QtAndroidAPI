#pragma once

#include "../../../JObject.hpp"

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
	class PlaybackState_CustomAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackState_CustomAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackState_CustomAction_Builder(QJniObject obj);
		
		// Constructors
		PlaybackState_CustomAction_Builder(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
		android::media::session::PlaybackState_CustomAction build();
		android::media::session::PlaybackState_CustomAction_Builder setExtras(android::os::Bundle arg0);
	};
} // namespace android::media::session

