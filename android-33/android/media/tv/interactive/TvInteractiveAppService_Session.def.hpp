#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::media::tv
{
	class AdRequest;
}
namespace android::media::tv
{
	class AdResponse;
}
namespace android::media::tv
{
	class BroadcastInfoRequest;
}
namespace android::media::tv
{
	class BroadcastInfoResponse;
}
namespace android::media::tv
{
	class TvContentRating;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class Surface;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::media::tv::interactive
{
	class TvInteractiveAppService_Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppService_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppService_Session(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvInteractiveAppService_Session(android::content::Context arg0);
		
		// Methods
		jboolean isMediaViewEnabled() const;
		void layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void notifyBiInteractiveAppCreated(android::net::Uri arg0, JString arg1) const;
		void notifySessionStateChanged(jint arg0, jint arg1) const;
		void notifyTeletextAppStateChanged(jint arg0) const;
		void onAdResponse(android::media::tv::AdResponse arg0) const;
		void onBroadcastInfoResponse(android::media::tv::BroadcastInfoResponse arg0) const;
		void onContentAllowed() const;
		void onContentBlocked(android::media::tv::TvContentRating arg0) const;
		void onCreateBiInteractiveAppRequest(android::net::Uri arg0, android::os::Bundle arg1) const;
		android::view::View onCreateMediaView() const;
		void onCurrentChannelLcn(jint arg0) const;
		void onCurrentChannelUri(android::net::Uri arg0) const;
		void onCurrentTvInputId(JString arg0) const;
		void onDestroyBiInteractiveAppRequest(JString arg0) const;
		void onError(JString arg0, android::os::Bundle arg1) const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onMediaViewSizeChanged(jint arg0, jint arg1) const;
		void onRelease() const;
		void onResetInteractiveApp() const;
		jboolean onSetSurface(android::view::Surface arg0) const;
		void onSetTeletextAppEnabled(jboolean arg0) const;
		void onSignalStrength(jint arg0) const;
		void onSigningResult(JString arg0, JByteArray arg1) const;
		void onStartInteractiveApp() const;
		void onStopInteractiveApp() const;
		void onStreamVolume(jfloat arg0) const;
		void onSurfaceChanged(jint arg0, jint arg1, jint arg2) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void onTrackInfoList(JObject arg0) const;
		void onTrackSelected(jint arg0, JString arg1) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onTracksChanged(JObject arg0) const;
		void onTuned(android::net::Uri arg0) const;
		void onVideoAvailable() const;
		void onVideoUnavailable(jint arg0) const;
		void removeBroadcastInfo(jint arg0) const;
		void requestAd(android::media::tv::AdRequest arg0) const;
		void requestBroadcastInfo(android::media::tv::BroadcastInfoRequest arg0) const;
		void requestCurrentChannelLcn() const;
		void requestCurrentChannelUri() const;
		void requestCurrentTvInputId() const;
		void requestSigning(JString arg0, JString arg1, JString arg2, JByteArray arg3) const;
		void requestStreamVolume() const;
		void requestTrackInfoList() const;
		void sendPlaybackCommandRequest(JString arg0, android::os::Bundle arg1) const;
		void setMediaViewEnabled(jboolean arg0) const;
		void setVideoBounds(android::graphics::Rect arg0) const;
	};
} // namespace android::media::tv::interactive

