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
	
	// QAndroidJniObject forward
	ObbInfo::ObbInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ObbInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ObbInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ObbInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

