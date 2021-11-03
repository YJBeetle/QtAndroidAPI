#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media::tv
{
	class TvRecordingClient_RecordingCallback;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::media::tv
{
	class TvRecordingClient : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvRecordingClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvRecordingClient(QAndroidJniObject obj);
		
		// Constructors
		TvRecordingClient(android::content::Context arg0, JString arg1, android::media::tv::TvRecordingClient_RecordingCallback arg2, android::os::Handler arg3);
		
		// Methods
		void release();
		void sendAppPrivateCommand(JString arg0, android::os::Bundle arg1);
		void startRecording(android::net::Uri arg0);
		void stopRecording();
		void tune(JString arg0, android::net::Uri arg1);
		void tune(JString arg0, android::net::Uri arg1, android::os::Bundle arg2);
	};
} // namespace android::media::tv

