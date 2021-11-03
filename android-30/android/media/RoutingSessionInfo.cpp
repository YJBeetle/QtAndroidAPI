#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RoutingSessionInfo.hpp"

namespace android::media
{
	// Fields
	JObject RoutingSessionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.RoutingSessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	RoutingSessionInfo::RoutingSessionInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RoutingSessionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RoutingSessionInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString RoutingSessionInfo::getClientPackageName()
	{
		return callObjectMethod(
			"getClientPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle RoutingSessionInfo::getControlHints()
	{
		return callObjectMethod(
			"getControlHints",
			"()Landroid/os/Bundle;"
		);
	}
	JObject RoutingSessionInfo::getDeselectableRoutes()
	{
		return callObjectMethod(
			"getDeselectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JString RoutingSessionInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString RoutingSessionInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject RoutingSessionInfo::getSelectableRoutes()
	{
		return callObjectMethod(
			"getSelectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JObject RoutingSessionInfo::getSelectedRoutes()
	{
		return callObjectMethod(
			"getSelectedRoutes",
			"()Ljava/util/List;"
		);
	}
	JObject RoutingSessionInfo::getTransferableRoutes()
	{
		return callObjectMethod(
			"getTransferableRoutes",
			"()Ljava/util/List;"
		);
	}
	jint RoutingSessionInfo::getVolume()
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint RoutingSessionInfo::getVolumeHandling()
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint RoutingSessionInfo::getVolumeMax()
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jint RoutingSessionInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString RoutingSessionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RoutingSessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

