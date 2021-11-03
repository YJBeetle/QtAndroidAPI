#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SystemUpdateInfo.hpp"

namespace android::app::admin
{
	// Fields
	JObject SystemUpdateInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SystemUpdateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_FALSE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_FALSE"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_TRUE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_TRUE"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	SystemUpdateInfo::SystemUpdateInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SystemUpdateInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SystemUpdateInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong SystemUpdateInfo::getReceivedTime()
	{
		return callMethod<jlong>(
			"getReceivedTime",
			"()J"
		);
	}
	jint SystemUpdateInfo::getSecurityPatchState()
	{
		return callMethod<jint>(
			"getSecurityPatchState",
			"()I"
		);
	}
	jint SystemUpdateInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SystemUpdateInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SystemUpdateInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

