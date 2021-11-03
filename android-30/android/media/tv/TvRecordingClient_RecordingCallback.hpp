#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::media::tv
{
	class TvRecordingClient_RecordingCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvRecordingClient_RecordingCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvRecordingClient_RecordingCallback(QJniObject obj);
		
		// Constructors
		TvRecordingClient_RecordingCallback();
		
		// Methods
		void onConnectionFailed(JString arg0);
		void onDisconnected(JString arg0);
		void onError(jint arg0);
		void onRecordingStopped(android::net::Uri arg0);
		void onTuned(android::net::Uri arg0);
	};
} // namespace android::media::tv

