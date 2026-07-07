#pragma once

#include "../../../view/ViewGroup.def.hpp"

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
	class TvView;
}
namespace android::media::tv::ad
{
	class TvAdView_TvAdCallback;
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
	class InputEvent;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::media::tv::ad
{
	class TvAdView : public android::view::ViewGroup
	{
	public:
		// Fields
		static JString ERROR_KEY_ERROR_CODE();
		static JString ERROR_KEY_METHOD_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		TvAdView(QJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		TvAdView(android::content::Context arg0);
		TvAdView(android::content::Context arg0, JObject arg1);
		TvAdView(android::content::Context arg0, JObject arg1, jint arg2);
		
		// Methods
		void clearCallback() const;
		void clearOnUnhandledInputEventListener() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchUnhandledInputEvent(android::view::InputEvent arg0) const;
		JObject getOnUnhandledInputEventListener() const;
		void notifyError(JString arg0, android::os::Bundle arg1) const;
		void notifyTvMessage(jint arg0, android::os::Bundle arg1) const;
		void onAttachedToWindow() const;
		void onDetachedFromWindow() const;
		void onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void onMeasure(jint arg0, jint arg1) const;
		jboolean onUnhandledInputEvent(android::view::InputEvent arg0) const;
		void onVisibilityChanged(android::view::View arg0, jint arg1) const;
		void prepareAdService(JString arg0, JString arg1) const;
		void reset() const;
		void resetAdService() const;
		void sendCurrentChannelUri(android::net::Uri arg0) const;
		void sendCurrentTvInputId(JString arg0) const;
		void sendCurrentVideoBounds(android::graphics::Rect arg0) const;
		void sendSigningResult(JString arg0, JByteArray arg1) const;
		void sendTrackInfoList(JObject arg0) const;
		void setCallback(JObject arg0, android::media::tv::ad::TvAdView_TvAdCallback arg1) const;
		void setOnUnhandledInputEventListener(JObject arg0) const;
		jboolean setTvView(android::media::tv::TvView arg0) const;
		void setZOrderMediaOverlay(jboolean arg0) const;
		void setZOrderOnTop(jboolean arg0) const;
		void startAdService() const;
		void stopAdService() const;
	};
} // namespace android::media::tv::ad

