#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
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
	class VoiceInteractionService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionService(QJniObject obj);
		
		// Constructors
		VoiceInteractionService();
		
		// Methods
		static jboolean isActiveService(android::content::Context arg0, android::content::ComponentName arg1);
		jint getDisabledShowContext();
		__JniBaseClass onBind(android::content::Intent arg0);
		__JniBaseClass onGetSupportedVoiceActions(__JniBaseClass arg0);
		void onLaunchVoiceAssistFromKeyguard();
		void onReady();
		void onShutdown();
		void setDisabledShowContext(jint arg0);
		void setUiHints(android::os::Bundle arg0);
		void showSession(android::os::Bundle arg0, jint arg1);
	};
} // namespace android::service::voice

