#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSessionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSessionService(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractionSessionService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onCreate();
		void onLowMemory();
		android::service::voice::VoiceInteractionSession onNewSession(android::os::Bundle arg0);
		void onTrimMemory(jint arg0);
	};
} // namespace android::service::voice

