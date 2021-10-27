#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./UriPermission.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject UriPermission::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.UriPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong UriPermission::INVALID_TIME()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.content.UriPermission",
			"INVALID_TIME"
		);
	}
	
	UriPermission::UriPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UriPermission::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UriPermission::getPersistedTime()
	{
		return __thiz.callMethod<jlong>(
			"getPersistedTime",
			"()J"
		);
	}
	QAndroidJniObject UriPermission::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean UriPermission::isReadPermission()
	{
		return __thiz.callMethod<jboolean>(
			"isReadPermission",
			"()Z"
		);
	}
	jboolean UriPermission::isWritePermission()
	{
		return __thiz.callMethod<jboolean>(
			"isWritePermission",
			"()Z"
		);
	}
	jstring UriPermission::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UriPermission::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

