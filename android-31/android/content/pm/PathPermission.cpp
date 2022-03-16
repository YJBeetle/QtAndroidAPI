#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./PathPermission.hpp"

namespace android::content::pm
{
	// Fields
	JObject PathPermission::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PathPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	PathPermission::PathPermission(android::os::Parcel arg0)
		: android::os::PatternMatcher(
			"android.content.pm.PathPermission",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	PathPermission::PathPermission(JString arg0, jint arg1, JString arg2, JString arg3)
		: android::os::PatternMatcher(
			"android.content.pm.PathPermission",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	JString PathPermission::getReadPermission() const
	{
		return callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		);
	}
	JString PathPermission::getWritePermission() const
	{
		return callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		);
	}
	void PathPermission::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

