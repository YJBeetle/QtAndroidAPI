#pragma once

#include "../../content/BroadcastReceiver.def.hpp"

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
class JString;

namespace android::service::restrictions
{
	class RestrictionsReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RestrictionsReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		RestrictionsReceiver(QJniObject obj) : android::content::BroadcastReceiver(obj) {}
		
		// Constructors
		RestrictionsReceiver();
		
		// Methods
		void onReceive(android::content::Context arg0, android::content::Intent arg1) const;
		void onRequestPermission(android::content::Context arg0, JString arg1, JString arg2, JString arg3, android::os::PersistableBundle arg4) const;
	};
} // namespace android::service::restrictions

