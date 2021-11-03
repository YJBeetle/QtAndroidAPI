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
class JString;
class JString;

namespace android::media::session
{
	class PlaybackState_CustomAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackState_CustomAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackState_CustomAction_Builder(QAndroidJniObject obj);
		
		// Constructors
		PlaybackState_CustomAction_Builder(JString arg0, JString arg1, jint arg2);
		
		// Methods
		android::media::session::PlaybackState_CustomAction build() const;
		android::media::session::PlaybackState_CustomAction_Builder setExtras(android::os::Bundle arg0) const;
	};
} // namespace android::media::session

