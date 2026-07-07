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

namespace android::media::tv::ad
{
	class TvAdService_Session : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdService_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvAdService_Session(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvAdService_Session(android::content::Context arg0);
		
		// Methods
		jboolean isMediaViewEnabled() const;
		void layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void notifySessionStateChanged(jint arg0, jint arg1) const;
		android::view::View onCreateMediaView() const;
		void onCurrentChannelUri(android::net::Uri arg0) const;
		void onCurrentTvInputId(JString arg0) const;
		void onCurrentVideoBounds(android::graphics::Rect arg0) const;
		void onError(JString arg0, android::os::Bundle arg1) const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onMediaViewSizeChanged(jint arg0, jint arg1) const;
		void onRelease() const;
		void onResetAdService() const;
		jboolean onSetSurface(android::view::Surface arg0) const;
		void onSigningResult(JString arg0, JByteArray arg1) const;
		void onStartAdService() const;
		void onStopAdService() const;
		void onSurfaceChanged(jint arg0, jint arg1, jint arg2) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void onTrackInfoList(JObject arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onTvInputSessionData(JString arg0, android::os::Bundle arg1) const;
		void onTvMessage(jint arg0, android::os::Bundle arg1) const;
		void requestCurrentChannelUri() const;
		void requestCurrentTvInputId() const;
		void requestCurrentVideoBounds() const;
		void requestSigning(JString arg0, JString arg1, JString arg2, JByteArray arg3) const;
		void requestTrackInfoList() const;
		void sendTvAdSessionData(JString arg0, android::os::Bundle arg1) const;
		void setMediaViewEnabled(jboolean arg0) const;
	};
} // namespace android::media::tv::ad

