#include "./LinkProperties.hpp"
#include "./Network.hpp"
#include "./NetworkCapabilities.hpp"
#include "../os/Parcel.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ConnectivityDiagnosticsManager_DataStallReport.hpp"

namespace android::net
{
	// Fields
	JObject ConnectivityDiagnosticsManager_DataStallReport::CREATOR()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ConnectivityDiagnosticsManager_DataStallReport::DETECTION_METHOD_DNS_EVENTS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"DETECTION_METHOD_DNS_EVENTS"
		);
	}
	jint ConnectivityDiagnosticsManager_DataStallReport::DETECTION_METHOD_TCP_METRICS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"DETECTION_METHOD_TCP_METRICS"
		);
	}
	JString ConnectivityDiagnosticsManager_DataStallReport::KEY_DNS_CONSECUTIVE_TIMEOUTS()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"KEY_DNS_CONSECUTIVE_TIMEOUTS",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityDiagnosticsManager_DataStallReport::KEY_TCP_METRICS_COLLECTION_PERIOD_MILLIS()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"KEY_TCP_METRICS_COLLECTION_PERIOD_MILLIS",
			"Ljava/lang/String;"
		);
	}
	JString ConnectivityDiagnosticsManager_DataStallReport::KEY_TCP_PACKET_FAIL_RATE()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"KEY_TCP_PACKET_FAIL_RATE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ConnectivityDiagnosticsManager_DataStallReport::ConnectivityDiagnosticsManager_DataStallReport(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConnectivityDiagnosticsManager_DataStallReport::ConnectivityDiagnosticsManager_DataStallReport(android::net::Network arg0, jlong arg1, jint arg2, android::net::LinkProperties arg3, android::net::NetworkCapabilities arg4, android::os::PersistableBundle arg5)
		: JObject(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"(Landroid/net/Network;JILandroid/net/LinkProperties;Landroid/net/NetworkCapabilities;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	jint ConnectivityDiagnosticsManager_DataStallReport::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ConnectivityDiagnosticsManager_DataStallReport::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ConnectivityDiagnosticsManager_DataStallReport::getDetectionMethod()
	{
		return callMethod<jint>(
			"getDetectionMethod",
			"()I"
		);
	}
	android::net::LinkProperties ConnectivityDiagnosticsManager_DataStallReport::getLinkProperties()
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	android::net::Network ConnectivityDiagnosticsManager_DataStallReport::getNetwork()
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	android::net::NetworkCapabilities ConnectivityDiagnosticsManager_DataStallReport::getNetworkCapabilities()
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"()Landroid/net/NetworkCapabilities;"
		);
	}
	jlong ConnectivityDiagnosticsManager_DataStallReport::getReportTimestamp()
	{
		return callMethod<jlong>(
			"getReportTimestamp",
			"()J"
		);
	}
	android::os::PersistableBundle ConnectivityDiagnosticsManager_DataStallReport::getStallDetails()
	{
		return callObjectMethod(
			"getStallDetails",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint ConnectivityDiagnosticsManager_DataStallReport::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ConnectivityDiagnosticsManager_DataStallReport::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

