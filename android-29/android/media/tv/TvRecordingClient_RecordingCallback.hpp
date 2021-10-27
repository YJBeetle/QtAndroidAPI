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
		
		TvRecordingClient_RecordingCallback(QAndroidJniObject obj);
		// Constructors
		TvRecordingClient_RecordingCallback();
		
		// Methods
		void onConnectionFailed(jstring arg0);
		void onConnectionFailed(const QString &arg0);
		void onDisconnected(jstring arg0);
		void onDisconnected(const QString &arg0);
		void onError(jint arg0);
		void onRecordingStopped(android::net::Uri arg0);
		void onTuned(android::net::Uri arg0);
	};
} // namespace android::media::tv

