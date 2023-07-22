#pragma once

#include "../../../view/ViewGroup.def.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::media::tv
{
	class TvView;
}
namespace android::media::tv::interactive
{
	class TvInteractiveAppView_TvInteractiveAppCallback;
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

namespace android::media::tv::interactive
{
	class TvInteractiveAppView : public android::view::ViewGroup
	{
	public:
		// Fields
		static JString BI_INTERACTIVE_APP_KEY_ALIAS();
		static JString BI_INTERACTIVE_APP_KEY_CERTIFICATE();
		static JString BI_INTERACTIVE_APP_KEY_HTTP_ADDITIONAL_HEADERS();
		static JString BI_INTERACTIVE_APP_KEY_HTTP_USER_AGENT();
		static JString BI_INTERACTIVE_APP_KEY_PRIVATE_KEY();
		static JString ERROR_KEY_METHOD_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppView(QJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		TvInteractiveAppView(android::content::Context arg0);
		TvInteractiveAppView(android::content::Context arg0, JObject arg1);
		TvInteractiveAppView(android::content::Context arg0, JObject arg1, jint arg2);
		
		// Methods
		void clearCallback() const;
		void clearOnUnhandledInputEventListener() const;
		void createBiInteractiveApp(android::net::Uri arg0, android::os::Bundle arg1) const;
		void destroyBiInteractiveApp(JString arg0) const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchUnhandledInputEvent(android::view::InputEvent arg0) const;
		JObject getOnUnhandledInputEventListener() const;
		void notifyError(JString arg0, android::os::Bundle arg1) const;
		void onAttachedToWindow() const;
		void onDetachedFromWindow() const;
		void onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void onMeasure(jint arg0, jint arg1) const;
		jboolean onUnhandledInputEvent(android::view::InputEvent arg0) const;
		void onVisibilityChanged(android::view::View arg0, jint arg1) const;
		void prepareInteractiveApp(JString arg0, jint arg1) const;
		void reset() const;
		void resetInteractiveApp() const;
		void sendCurrentChannelLcn(jint arg0) const;
		void sendCurrentChannelUri(android::net::Uri arg0) const;
		void sendCurrentTvInputId(JString arg0) const;
		void sendSigningResult(JString arg0, JByteArray arg1) const;
		void sendStreamVolume(jfloat arg0) const;
		void sendTrackInfoList(JObject arg0) const;
		void setCallback(JObject arg0, android::media::tv::interactive::TvInteractiveAppView_TvInteractiveAppCallback arg1) const;
		void setOnUnhandledInputEventListener(JObject arg0, JObject arg1) const;
		void setTeletextAppEnabled(jboolean arg0) const;
		jint setTvView(android::media::tv::TvView arg0) const;
		void startInteractiveApp() const;
		void stopInteractiveApp() const;
	};
} // namespace android::media::tv::interactive

