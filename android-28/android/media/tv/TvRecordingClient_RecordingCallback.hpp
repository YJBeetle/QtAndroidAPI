#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::media::tv
{
	class TvRecordingClient_RecordingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvRecordingClient_RecordingCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvRecordingClient_RecordingCallback(QJniObject obj);
		
		// Constructors
		TvRecordingClient_RecordingCallback();
		
		// Methods
		void onConnectionFailed(jstring arg0);
		void onDisconnected(jstring arg0);
		void onError(jint arg0);
		void onRecordingStopped(android::net::Uri arg0);
		void onTuned(android::net::Uri arg0);
	};
} // namespace android::media::tv

