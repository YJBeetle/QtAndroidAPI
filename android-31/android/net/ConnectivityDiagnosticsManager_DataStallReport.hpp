#pragma once

#include "./LinkProperties.def.hpp"
#include "./Network.def.hpp"
#include "./NetworkCapabilities.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ConnectivityDiagnosticsManager_DataStallReport.def.hpp"

namespace android::net
{
	// Fields
	inline JObject ConnectivityDiagnosticsManager_DataStallReport::CREATOR()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ConnectivityDiagnosticsManager_DataStallReport::DETECTION_METHOD_DNS_EVENTS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"DETECTION_METHOD_DNS_EVENTS"
		);
	}
	inline jint ConnectivityDiagnosticsManager_DataStallReport::DETECTION_METHOD_TCP_METRICS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"DETECTION_METHOD_TCP_METRICS"
		);
	}
	inline JString ConnectivityDiagnosticsManager_DataStallReport::KEY_DNS_CONSECUTIVE_TIMEOUTS()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"KEY_DNS_CONSECUTIVE_TIMEOUTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityDiagnosticsManager_DataStallReport::KEY_TCP_METRICS_COLLECTION_PERIOD_MILLIS()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"KEY_TCP_METRICS_COLLECTION_PERIOD_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityDiagnosticsManager_DataStallReport::KEY_TCP_PACKET_FAIL_RATE()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$DataStallReport",
			"KEY_TCP_PACKET_FAIL_RATE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ConnectivityDiagnosticsManager_DataStallReport::ConnectivityDiagnosticsManager_DataStallReport(android::net::Network arg0, jlong arg1, jint arg2, android::net::LinkProperties arg3, android::net::NetworkCapabilities arg4, android::os::PersistableBundle arg5)
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
	inline jint ConnectivityDiagnosticsManager_DataStallReport::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ConnectivityDiagnosticsManager_DataStallReport::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ConnectivityDiagnosticsManager_DataStallReport::getDetectionMethod() const
	{
		return callMethod<jint>(
			"getDetectionMethod",
			"()I"
		);
	}
	inline android::net::LinkProperties ConnectivityDiagnosticsManager_DataStallReport::getLinkProperties() const
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	inline android::net::Network ConnectivityDiagnosticsManager_DataStallReport::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline android::net::NetworkCapabilities ConnectivityDiagnosticsManager_DataStallReport::getNetworkCapabilities() const
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"()Landroid/net/NetworkCapabilities;"
		);
	}
	inline jlong ConnectivityDiagnosticsManager_DataStallReport::getReportTimestamp() const
	{
		return callMethod<jlong>(
			"getReportTimestamp",
			"()J"
		);
	}
	inline android::os::PersistableBundle ConnectivityDiagnosticsManager_DataStallReport::getStallDetails() const
	{
		return callObjectMethod(
			"getStallDetails",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint ConnectivityDiagnosticsManager_DataStallReport::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ConnectivityDiagnosticsManager_DataStallReport::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

