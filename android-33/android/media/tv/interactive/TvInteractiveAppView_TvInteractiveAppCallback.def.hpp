#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::graphics
{
	class Rect;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::tv::interactive
{
	class TvInteractiveAppView_TvInteractiveAppCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppView_TvInteractiveAppCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppView_TvInteractiveAppCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvInteractiveAppView_TvInteractiveAppCallback();
		
		// Methods
		void onBiInteractiveAppCreated(JString arg0, android::net::Uri arg1, JString arg2) const;
		void onPlaybackCommandRequest(JString arg0, JString arg1, android::os::Bundle arg2) const;
		void onRequestCurrentChannelLcn(JString arg0) const;
		void onRequestCurrentChannelUri(JString arg0) const;
		void onRequestCurrentTvInputId(JString arg0) const;
		void onRequestSigning(JString arg0, JString arg1, JString arg2, JString arg3, JByteArray arg4) const;
		void onRequestStreamVolume(JString arg0) const;
		void onRequestTrackInfoList(JString arg0) const;
		void onSetVideoBounds(JString arg0, android::graphics::Rect arg1) const;
		void onStateChanged(JString arg0, jint arg1, jint arg2) const;
		void onTeletextAppStateChanged(JString arg0, jint arg1) const;
	};
} // namespace android::media::tv::interactive

