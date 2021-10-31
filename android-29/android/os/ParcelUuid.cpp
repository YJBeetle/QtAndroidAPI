#include "./Parcel.hpp"
#include "../../java/util/UUID.hpp"
#include "./ParcelUuid.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject ParcelUuid::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.ParcelUuid",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ParcelUuid::ParcelUuid(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ParcelUuid::ParcelUuid(java::util::UUID arg0)
		: __JniBaseClass(
			"android.os.ParcelUuid",
			"(Ljava/util/UUID;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject ParcelUuid::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelUuid",
			"fromString",
			"(Ljava/lang/String;)Landroid/os/ParcelUuid;",
			arg0
		);
	}
	jint ParcelUuid::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ParcelUuid::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ParcelUuid::getUuid()
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jint ParcelUuid::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ParcelUuid::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ParcelUuid::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os
