#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class Socket;
}

namespace android::net
{
	class VpnService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA_SUPPORTS_ALWAYS_ON();
		
		VpnService(QAndroidJniObject obj);
		// Constructors
		VpnService();
		
		// Methods
		static QAndroidJniObject prepare(android::content::Context arg0);
		jboolean isAlwaysOn();
		jboolean isLockdownEnabled();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onRevoke();
		jboolean protect(jint arg0);
		jboolean protect(java::net::DatagramSocket arg0);
		jboolean protect(java::net::Socket arg0);
		jboolean setUnderlyingNetworks(jarray arg0);
	};
} // namespace android::net

