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
	
	// Constructors
	
	// Methods
	jint RoutingSessionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RoutingSessionInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString RoutingSessionInfo::getClientPackageName() const
	{
		return callObjectMethod(
			"getClientPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle RoutingSessionInfo::getControlHints() const
	{
		return callObjectMethod(
			"getControlHints",
			"()Landroid/os/Bundle;"
		);
	}
	JObject RoutingSessionInfo::getDeselectableRoutes() const
	{
		return callObjectMethod(
			"getDeselectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JString RoutingSessionInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString RoutingSessionInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject RoutingSessionInfo::getSelectableRoutes() const
	{
		return callObjectMethod(
			"getSelectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JObject RoutingSessionInfo::getSelectedRoutes() const
	{
		return callObjectMethod(
			"getSelectedRoutes",
			"()Ljava/util/List;"
		);
	}
	JObject RoutingSessionInfo::getTransferableRoutes() const
	{
		return callObjectMethod(
			"getTransferableRoutes",
			"()Ljava/util/List;"
		);
	}
	jint RoutingSessionInfo::getVolume() const
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint RoutingSessionInfo::getVolumeHandling() const
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint RoutingSessionInfo::getVolumeMax() const
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jint RoutingSessionInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString RoutingSessionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RoutingSessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

