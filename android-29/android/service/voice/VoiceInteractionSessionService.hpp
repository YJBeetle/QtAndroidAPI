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
		
		VoiceInteractionSessionService(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSessionService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onCreate();
		void onLowMemory();
		QAndroidJniObject onNewSession(android::os::Bundle arg0);
		void onTrimMemory(jint arg0);
	};
} // namespace android::service::voice

