#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ConnectivityDiagnosticsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectivityDiagnosticsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityDiagnosticsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void registerConnectivityDiagnosticsCallback(android::net::NetworkRequest arg0, __JniBaseClass arg1, android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg2);
		void unregisterConnectivityDiagnosticsCallback(android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg0);
	};
} // namespace android::net

