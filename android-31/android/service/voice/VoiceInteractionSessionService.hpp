#pragma once

#include "../../app/Service.hpp"

class JArray;
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::voice
{
	class VoiceInteractionSession;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::service::voice
{
	class VoiceInteractionSessionService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSessionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSessionService(QJniObject obj);
		
		// Constructors
		VoiceInteractionSessionService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onCreate() const;
		void onLowMemory() const;
		android::service::voice::VoiceInteractionSession onNewSession(android::os::Bundle arg0) const;
		void onTrimMemory(jint arg0) const;
	};
} // namespace android::service::voice

