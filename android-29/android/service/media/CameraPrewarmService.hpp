#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::service::media
{
	class CameraPrewarmService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraPrewarmService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CameraPrewarmService(QJniObject obj);
		
		// Constructors
		CameraPrewarmService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onCooldown(jboolean arg0);
		void onPrewarm();
		jboolean onUnbind(android::content::Intent arg0);
	};
} // namespace android::service::media

