#include "../../os/Parcel.hpp"
#include "./SystemUpdateInfo.hpp"

namespace android::app::admin
{
	// Fields
	QAndroidJniObject SystemUpdateInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SystemUpdateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_FALSE"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_TRUE"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_UNKNOWN"
		);
	}
	
	SystemUpdateInfo::SystemUpdateInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SystemUpdateInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SystemUpdateInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong SystemUpdateInfo::getReceivedTime()
	{
		return __thiz.callMethod<jlong>(
			"getReceivedTime",
			"()J"
		);
	}
	jint SystemUpdateInfo::getSecurityPatchState()
	{
		return __thiz.callMethod<jint>(
			"getSecurityPatchState",
			"()I"
		);
	}
	jint SystemUpdateInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SystemUpdateInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SystemUpdateInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::admin

