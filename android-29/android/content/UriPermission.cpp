#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./UriPermission.hpp"

namespace android::content
{
	// Fields
	JObject UriPermission::CREATOR()
	{
		return getStaticObjectField(
			"android.content.UriPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong UriPermission::INVALID_TIME()
	{
		return getStaticField<jlong>(
			"android.content.UriPermission",
			"INVALID_TIME"
		);
	}
	
	// Constructors
	
	// Methods
	jint UriPermission::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UriPermission::getPersistedTime() const
	{
		return callMethod<jlong>(
			"getPersistedTime",
			"()J"
		);
	}
	android::net::Uri UriPermission::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean UriPermission::isReadPermission() const
	{
		return callMethod<jboolean>(
			"isReadPermission",
			"()Z"
		);
	}
	jboolean UriPermission::isWritePermission() const
	{
		return callMethod<jboolean>(
			"isWritePermission",
			"()Z"
		);
	}
	JString UriPermission::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UriPermission::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

