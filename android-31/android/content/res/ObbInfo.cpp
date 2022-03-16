#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ObbInfo.hpp"

namespace android::content::res
{
	// Fields
	JObject ObbInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.ObbInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ObbInfo::OBB_OVERLAY()
	{
		return getStaticField<jint>(
			"android.content.res.ObbInfo",
			"OBB_OVERLAY"
		);
	}
	JString ObbInfo::filename()
	{
		return getObjectField(
			"filename",
			"Ljava/lang/String;"
		);
	}
	jint ObbInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	JString ObbInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	jint ObbInfo::version()
	{
		return getField<jint>(
			"version"
		);
	}
	
	// Constructors
	
	// Methods
	jint ObbInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ObbInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ObbInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

