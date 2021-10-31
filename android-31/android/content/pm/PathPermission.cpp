#include "../../os/Parcel.hpp"
#include "./PathPermission.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass PathPermission::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PathPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PathPermission::PathPermission(QAndroidJniObject obj) : android::os::PatternMatcher(obj) {}
	
	// Constructors
	PathPermission::PathPermission(android::os::Parcel arg0)
		: android::os::PatternMatcher(
			"android.content.pm.PathPermission",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	PathPermission::PathPermission(jstring arg0, jint arg1, jstring arg2, jstring arg3)
		: android::os::PatternMatcher(
			"android.content.pm.PathPermission",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jstring PathPermission::getReadPermission()
	{
		return callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PathPermission::getWritePermission()
	{
		return callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PathPermission::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

