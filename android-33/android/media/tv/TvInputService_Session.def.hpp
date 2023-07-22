#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class PlaybackParams;
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
	class AitInfo;
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

namespace android::media::tv
{
	class TvInputService_Session : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputService_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService_Session(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvInputService_Session(android::content::Context arg0);
		
		// Methods
		void layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void notifyAdResponse(android::media::tv::AdResponse arg0) const;
		void notifyAitInfoUpdated(android::media::tv::AitInfo arg0) const;
		void notifyBroadcastInfoResponse(android::media::tv::BroadcastInfoResponse arg0) const;
		void notifyChannelRetuned(android::net::Uri arg0) const;
		void notifyContentAllowed() const;
		void notifyContentBlocked(android::media::tv::TvContentRating arg0) const;
		void notifySignalStrength(jint arg0) const;
		void notifyTimeShiftStatusChanged(jint arg0) const;
		void notifyTrackSelected(jint arg0, JString arg1) const;
		void notifyTracksChanged(JObject arg0) const;
		void notifyTuned(android::net::Uri arg0) const;
		void notifyVideoAvailable() const;
		void notifyVideoUnavailable(jint arg0) const;
		void onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		android::view::View onCreateOverlayView() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onOverlayViewSizeChanged(jint arg0, jint arg1) const;
		void onRelease() const;
		void onRemoveBroadcastInfo(jint arg0) const;
		void onRequestAd(android::media::tv::AdRequest arg0) const;
		void onRequestBroadcastInfo(android::media::tv::BroadcastInfoRequest arg0) const;
		jboolean onSelectTrack(jint arg0, JString arg1) const;
		void onSetCaptionEnabled(jboolean arg0) const;
		void onSetInteractiveAppNotificationEnabled(jboolean arg0) const;
		void onSetStreamVolume(jfloat arg0) const;
		jboolean onSetSurface(android::view::Surface arg0) const;
		void onSurfaceChanged(jint arg0, jint arg1, jint arg2) const;
		jlong onTimeShiftGetCurrentPosition() const;
		jlong onTimeShiftGetStartPosition() const;
		void onTimeShiftPause() const;
		void onTimeShiftPlay(android::net::Uri arg0) const;
		void onTimeShiftResume() const;
		void onTimeShiftSeekTo(jlong arg0) const;
		void onTimeShiftSetPlaybackParams(android::media::PlaybackParams arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		jboolean onTune(android::net::Uri arg0) const;
		jboolean onTune(android::net::Uri arg0, android::os::Bundle arg1) const;
		void onUnblockContent(android::media::tv::TvContentRating arg0) const;
		void setOverlayViewEnabled(jboolean arg0) const;
	};
} // namespace android::media::tv

