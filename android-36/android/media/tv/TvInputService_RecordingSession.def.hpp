#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::media::tv
{
	class TvInputService_RecordingSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputService_RecordingSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService_RecordingSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvInputService_RecordingSession(android::content::Context arg0);
		
		// Methods
		void notifyError(jint arg0) const;
		void notifyRecordingStopped(android::net::Uri arg0) const;
		void notifyTuned(android::net::Uri arg0) const;
		void onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		void onPauseRecording(android::os::Bundle arg0) const;
		void onRelease() const;
		void onResumeRecording(android::os::Bundle arg0) const;
		void onStartRecording(android::net::Uri arg0) const;
		void onStartRecording(android::net::Uri arg0, android::os::Bundle arg1) const;
		void onStopRecording() const;
		void onTune(android::net::Uri arg0) const;
		void onTune(android::net::Uri arg0, android::os::Bundle arg1) const;
	};
} // namespace android::media::tv

