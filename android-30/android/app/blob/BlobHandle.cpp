#include "../../os/Parcel.hpp"
#include "./BlobHandle.hpp"

namespace android::app::blob
{
	// Fields
	__JniBaseClass BlobHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.app.blob.BlobHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BlobHandle::BlobHandle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::app::blob::BlobHandle BlobHandle::createWithSha256(jbyteArray arg0, jstring arg1, jlong arg2, jstring arg3)
	{
		return callStaticObjectMethod(
			"android.app.blob.BlobHandle",
			"createWithSha256",
			"([BLjava/lang/CharSequence;JLjava/lang/String;)Landroid/app/blob/BlobHandle;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint BlobHandle::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BlobHandle::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong BlobHandle::getExpiryTimeMillis()
	{
		return callMethod<jlong>(
			"getExpiryTimeMillis",
			"()J"
		);
	}
	jstring BlobHandle::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jbyteArray BlobHandle::getSha256Digest()
	{
		return callObjectMethod(
			"getSha256Digest",
			"()[B"
		).object<jbyteArray>();
	}
	jstring BlobHandle::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BlobHandle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BlobHandle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BlobHandle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::blob

