#pragma once

#include "../../../JObject.hpp"
#include "../../content/BroadcastReceiver.hpp"

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
	class PersistableBundle;
}

namespace android::service::restrictions
{
	class RestrictionsReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RestrictionsReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		RestrictionsReceiver(QJniObject obj);
		
		// Constructors
		RestrictionsReceiver();
		
		// Methods
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		void onRequestPermission(android::content::Context arg0, jstring arg1, jstring arg2, jstring arg3, android::os::PersistableBundle arg4);
	};
} // namespace android::service::restrictions

