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
		
		// QJniObject forward
		template<typename ...Ts> explicit TvRecordingClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvRecordingClient(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvRecordingClient(android::content::Context arg0, JString arg1, android::media::tv::TvRecordingClient_RecordingCallback arg2, android::os::Handler arg3);
		
		// Methods
		void release() const;
		void sendAppPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		void startRecording(android::net::Uri arg0) const;
		void startRecording(android::net::Uri arg0, android::os::Bundle arg1) const;
		void stopRecording() const;
		void tune(JString arg0, android::net::Uri arg1) const;
		void tune(JString arg0, android::net::Uri arg1, android::os::Bundle arg2) const;
	};
} // namespace android::media::tv

