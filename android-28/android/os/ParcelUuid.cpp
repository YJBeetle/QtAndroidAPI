#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./ParcelUuid.hpp"

namespace android::os
{
	// Fields
	JObject ParcelUuid::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ParcelUuid",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ParcelUuid::ParcelUuid(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ParcelUuid::ParcelUuid(java::util::UUID arg0)
		: JObject(
			"android.os.ParcelUuid",
			"(Ljava/util/UUID;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::ParcelUuid ParcelUuid::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelUuid",
			"fromString",
			"(Ljava/lang/String;)Landroid/os/ParcelUuid;",
			arg0.object<jstring>()
		);
	}
	jint ParcelUuid::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ParcelUuid::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::UUID ParcelUuid::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jint ParcelUuid::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ParcelUuid::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ParcelUuid::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

