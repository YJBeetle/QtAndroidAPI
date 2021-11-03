#include "./ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback.hpp"
#include "./NetworkRequest.hpp"
#include "./ConnectivityDiagnosticsManager.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectivityDiagnosticsManager::ConnectivityDiagnosticsManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ConnectivityDiagnosticsManager::registerConnectivityDiagnosticsCallback(android::net::NetworkRequest arg0, JObject arg1, android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg2) const
	{
		callMethod<void>(
			"registerConnectivityDiagnosticsCallback",
			"(Landroid/net/NetworkRequest;Ljava/util/concurrent/Executor;Landroid/net/ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ConnectivityDiagnosticsManager::unregisterConnectivityDiagnosticsCallback(android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg0) const
	{
		callMethod<void>(
			"unregisterConnectivityDiagnosticsCallback",
			"(Landroid/net/ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net

