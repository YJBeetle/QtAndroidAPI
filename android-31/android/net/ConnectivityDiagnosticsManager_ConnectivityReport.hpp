#pragma once

#include "./LinkProperties.def.hpp"
#include "./Network.def.hpp"
#include "./NetworkCapabilities.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ConnectivityDiagnosticsManager_ConnectivityReport.def.hpp"

namespace android::net
{
	// Fields
	inline JObject ConnectivityDiagnosticsManager_ConnectivityReport::CREATOR()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ConnectivityDiagnosticsManager_ConnectivityReport::KEY_NETWORK_PROBES_ATTEMPTED_BITMASK()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"KEY_NETWORK_PROBES_ATTEMPTED_BITMASK",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityDiagnosticsManager_ConnectivityReport::KEY_NETWORK_PROBES_SUCCEEDED_BITMASK()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"KEY_NETWORK_PROBES_SUCCEEDED_BITMASK",
			"Ljava/lang/String;"
		);
	}
	inline JString ConnectivityDiagnosticsManager_ConnectivityReport::KEY_NETWORK_VALIDATION_RESULT()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"KEY_NETWORK_VALIDATION_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_DNS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_DNS"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_FALLBACK()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_FALLBACK"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_HTTP()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_HTTP"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_HTTPS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_HTTPS"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_PRIVATE_DNS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_PRIVATE_DNS"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_INVALID()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_INVALID"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_PARTIALLY_VALID()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_PARTIALLY_VALID"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_SKIPPED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_SKIPPED"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_VALID()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_VALID"
		);
	}
	
	// Constructors
	inline ConnectivityDiagnosticsManager_ConnectivityReport::ConnectivityDiagnosticsManager_ConnectivityReport(android::net::Network arg0, jlong arg1, android::net::LinkProperties arg2, android::net::NetworkCapabilities arg3, android::os::PersistableBundle arg4)
		: JObject(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"(Landroid/net/Network;JLandroid/net/LinkProperties;Landroid/net/NetworkCapabilities;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		) {}
	
	// Methods
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ConnectivityDiagnosticsManager_ConnectivityReport::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::PersistableBundle ConnectivityDiagnosticsManager_ConnectivityReport::getAdditionalInfo() const
	{
		return callObjectMethod(
			"getAdditionalInfo",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::net::LinkProperties ConnectivityDiagnosticsManager_ConnectivityReport::getLinkProperties() const
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	inline android::net::Network ConnectivityDiagnosticsManager_ConnectivityReport::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline android::net::NetworkCapabilities ConnectivityDiagnosticsManager_ConnectivityReport::getNetworkCapabilities() const
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"()Landroid/net/NetworkCapabilities;"
		);
	}
	inline jlong ConnectivityDiagnosticsManager_ConnectivityReport::getReportTimestamp() const
	{
		return callMethod<jlong>(
			"getReportTimestamp",
			"()J"
		);
	}
	inline jint ConnectivityDiagnosticsManager_ConnectivityReport::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ConnectivityDiagnosticsManager_ConnectivityReport::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
