#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::tv
{
	class TvInputService_RecordingSession : public __JniBaseClass
	{
	public:
		// Fields
		
		TvInputService_RecordingSession(QAndroidJniObject obj);
		// Constructors
		TvInputService_RecordingSession(android::content::Context arg0);
		TvInputService_RecordingSession() = default;
		
		// Methods
		void notifyError(jint arg0);
		void notifyRecordingStopped(android::net::Uri arg0);
		void notifyTuned(android::net::Uri arg0);
		void onAppPrivateCommand(jstring arg0, android::os::Bundle arg1);
		void onRelease();
		void onStartRecording(android::net::Uri arg0);
		void onStopRecording();
		void onTune(android::net::Uri arg0);
		void onTune(android::net::Uri arg0, android::os::Bundle arg1);
	};
} // namespace android::media::tv

