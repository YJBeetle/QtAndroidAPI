#include "./PackageManager.hpp"
#include "../../os/Parcel.hpp"
#include "./PermissionGroupInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject PermissionGroupInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PermissionGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PermissionGroupInfo::FLAG_PERSONAL_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionGroupInfo",
			"FLAG_PERSONAL_INFO"
		);
	}
	jint PermissionGroupInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes"
		);
	}
	jint PermissionGroupInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring PermissionGroupInfo::nonLocalizedDescription()
	{
		return __thiz.getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PermissionGroupInfo::priority()
	{
		return __thiz.getField<jint>(
			"priority"
		);
	}
	
	PermissionGroupInfo::PermissionGroupInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PermissionGroupInfo::PermissionGroupInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionGroupInfo",
			"()V"
		);
	}
	PermissionGroupInfo::PermissionGroupInfo(android::content::pm::PermissionGroupInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionGroupInfo",
			"(Landroid/content/pm/PermissionGroupInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PermissionGroupInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PermissionGroupInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring PermissionGroupInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PermissionGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

