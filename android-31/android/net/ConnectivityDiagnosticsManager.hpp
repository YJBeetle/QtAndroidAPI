#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback;
}
namespace android::net
{
	class NetworkRequest;
}

namespace android::net
{
	class ConnectivityDiagnosticsManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectivityDiagnosticsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityDiagnosticsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void registerConnectivityDiagnosticsCallback(android::net::NetworkRequest arg0, JObject arg1, android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg2);
		void unregisterConnectivityDiagnosticsCallback(android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg0);
	};
} // namespace android::net

