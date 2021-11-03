#include "./PackageManager.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PermissionGroupInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject PermissionGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PermissionGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PermissionGroupInfo::FLAG_PERSONAL_INFO()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionGroupInfo",
			"FLAG_PERSONAL_INFO"
		);
	}
	jint PermissionGroupInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	jint PermissionGroupInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	JString PermissionGroupInfo::nonLocalizedDescription()
	{
		return getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		);
	}
	jint PermissionGroupInfo::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	
	// QAndroidJniObject forward
	PermissionGroupInfo::PermissionGroupInfo(QAndroidJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
	
	// Constructors
	PermissionGroupInfo::PermissionGroupInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionGroupInfo",
			"()V"
		) {}
	PermissionGroupInfo::PermissionGroupInfo(android::content::pm::PermissionGroupInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionGroupInfo",
			"(Landroid/content/pm/PermissionGroupInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint PermissionGroupInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString PermissionGroupInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString PermissionGroupInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PermissionGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

