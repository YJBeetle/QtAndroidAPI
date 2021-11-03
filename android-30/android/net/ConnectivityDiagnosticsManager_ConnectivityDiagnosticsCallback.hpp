#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class ConnectivityDiagnosticsManager_ConnectivityReport;
}
namespace android::net
{
	class ConnectivityDiagnosticsManager_DataStallReport;
}
namespace android::net
{
	class Network;
}

namespace android::net
{
	class ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback(QJniObject obj);
		
		// Constructors
		ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback();
		
		// Methods
		void onConnectivityReportAvailable(android::net::ConnectivityDiagnosticsManager_ConnectivityReport arg0);
		void onDataStallSuspected(android::net::ConnectivityDiagnosticsManager_DataStallReport arg0);
		void onNetworkConnectivityReported(android::net::Network arg0, jboolean arg1);
	};
} // namespace android::net

