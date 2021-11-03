#include "../../../JByteArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./BlobHandle.hpp"

namespace android::app::blob
{
	// Fields
	JObject BlobHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.app.blob.BlobHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BlobHandle::BlobHandle(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::blob::BlobHandle BlobHandle::createWithSha256(JByteArray arg0, JString arg1, jlong arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.app.blob.BlobHandle",
			"createWithSha256",
			"([BLjava/lang/CharSequence;JLjava/lang/String;)Landroid/app/blob/BlobHandle;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>()
		);
	}
	jint BlobHandle::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BlobHandle::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong BlobHandle::getExpiryTimeMillis()
	{
		return callMethod<jlong>(
			"getExpiryTimeMillis",
			"()J"
		);
	}
	JString BlobHandle::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JByteArray BlobHandle::getSha256Digest()
	{
		return callObjectMethod(
			"getSha256Digest",
			"()[B"
		);
	}
	JString BlobHandle::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	jint BlobHandle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString BlobHandle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

