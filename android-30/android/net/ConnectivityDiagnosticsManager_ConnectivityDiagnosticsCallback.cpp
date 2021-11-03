#include "./ConnectivityDiagnosticsManager_ConnectivityReport.hpp"
#include "./ConnectivityDiagnosticsManager_DataStallReport.hpp"
#include "./Network.hpp"
#include "./ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback()
		: JObject(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback",
			"()V"
		) {}
	
	// Methods
	void ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::onConnectivityReportAvailable(android::net::ConnectivityDiagnosticsManager_ConnectivityReport arg0)
	{
		callMethod<void>(
			"onConnectivityReportAvailable",
			"(Landroid/net/ConnectivityDiagnosticsManager$ConnectivityReport;)V",
			arg0.object()
		);
	}
	void ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::onDataStallSuspected(android::net::ConnectivityDiagnosticsManager_DataStallReport arg0)
	{
		callMethod<void>(
			"onDataStallSuspected",
			"(Landroid/net/ConnectivityDiagnosticsManager$DataStallReport;)V",
			arg0.object()
		);
	}
	void ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::onNetworkConnectivityReported(android::net::Network arg0, jboolean arg1)
	{
		callMethod<void>(
			"onNetworkConnectivityReported",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

