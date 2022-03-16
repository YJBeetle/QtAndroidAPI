#include "./ConnectivityDiagnosticsManager_ConnectivityReport.hpp"
#include "./ConnectivityDiagnosticsManager_DataStallReport.hpp"
#include "./Network.hpp"
#include "./ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback()
		: JObject(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback",
			"()V"
		) {}
	
	// Methods
	void ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::onConnectivityReportAvailable(android::net::ConnectivityDiagnosticsManager_ConnectivityReport arg0) const
	{
		callMethod<void>(
			"onConnectivityReportAvailable",
			"(Landroid/net/ConnectivityDiagnosticsManager$ConnectivityReport;)V",
			arg0.object()
		);
	}
	void ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::onDataStallSuspected(android::net::ConnectivityDiagnosticsManager_DataStallReport arg0) const
	{
		callMethod<void>(
			"onDataStallSuspected",
			"(Landroid/net/ConnectivityDiagnosticsManager$DataStallReport;)V",
			arg0.object()
		);
	}
	void ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback::onNetworkConnectivityReported(android::net::Network arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onNetworkConnectivityReported",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

