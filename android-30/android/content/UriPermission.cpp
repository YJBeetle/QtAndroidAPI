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
	
	// QAndroidJniObject forward
	UriPermission::UriPermission(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UriPermission::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UriPermission::getPersistedTime()
	{
		return callMethod<jlong>(
			"getPersistedTime",
			"()J"
		);
	}
	android::net::Uri UriPermission::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean UriPermission::isReadPermission()
	{
		return callMethod<jboolean>(
			"isReadPermission",
			"()Z"
		);
	}
	jboolean UriPermission::isWritePermission()
	{
		return callMethod<jboolean>(
			"isWritePermission",
			"()Z"
		);
	}
	JString UriPermission::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UriPermission::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

