#include "./LinkProperties.hpp"
#include "./Network.hpp"
#include "./NetworkCapabilities.hpp"
#include "../os/Parcel.hpp"
#include "../os/PersistableBundle.hpp"
#include "./ConnectivityDiagnosticsManager_ConnectivityReport.hpp"

namespace android::net
{
	// Fields
	JObject ConnectivityDiagnosticsManager_ConnectivityReport::CREATOR()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ConnectivityDiagnosticsManager_ConnectivityReport::KEY_NETWORK_PROBES_ATTEMPTED_BITMASK()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"KEY_NETWORK_PROBES_ATTEMPTED_BITMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityDiagnosticsManager_ConnectivityReport::KEY_NETWORK_PROBES_SUCCEEDED_BITMASK()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"KEY_NETWORK_PROBES_SUCCEEDED_BITMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConnectivityDiagnosticsManager_ConnectivityReport::KEY_NETWORK_VALIDATION_RESULT()
	{
		return getStaticObjectField(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"KEY_NETWORK_VALIDATION_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_DNS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_DNS"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_FALLBACK()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_FALLBACK"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_HTTP()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_HTTP"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_HTTPS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_HTTPS"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_PROBE_PRIVATE_DNS()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_PROBE_PRIVATE_DNS"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_INVALID()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_INVALID"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_PARTIALLY_VALID()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_PARTIALLY_VALID"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_SKIPPED()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_SKIPPED"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::NETWORK_VALIDATION_RESULT_VALID()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityDiagnosticsManager$ConnectivityReport",
			"NETWORK_VALIDATION_RESULT_VALID"
		);
	}
	
	// QAndroidJniObject forward
	ConnectivityDiagnosticsManager_ConnectivityReport::ConnectivityDiagnosticsManager_ConnectivityReport(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConnectivityDiagnosticsManager_ConnectivityReport::ConnectivityDiagnosticsManager_ConnectivityReport(android::net::Network arg0, jlong arg1, android::net::LinkProperties arg2, android::net::NetworkCapabilities arg3, android::os::PersistableBundle arg4)
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
	jint ConnectivityDiagnosticsManager_ConnectivityReport::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ConnectivityDiagnosticsManager_ConnectivityReport::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::os::PersistableBundle ConnectivityDiagnosticsManager_ConnectivityReport::getAdditionalInfo()
	{
		return callObjectMethod(
			"getAdditionalInfo",
			"()Landroid/os/PersistableBundle;"
		);
	}
	android::net::LinkProperties ConnectivityDiagnosticsManager_ConnectivityReport::getLinkProperties()
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	android::net::Network ConnectivityDiagnosticsManager_ConnectivityReport::getNetwork()
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	android::net::NetworkCapabilities ConnectivityDiagnosticsManager_ConnectivityReport::getNetworkCapabilities()
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"()Landroid/net/NetworkCapabilities;"
		);
	}
	jlong ConnectivityDiagnosticsManager_ConnectivityReport::getReportTimestamp()
	{
		return callMethod<jlong>(
			"getReportTimestamp",
			"()J"
		);
	}
	jint ConnectivityDiagnosticsManager_ConnectivityReport::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ConnectivityDiagnosticsManager_ConnectivityReport::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

