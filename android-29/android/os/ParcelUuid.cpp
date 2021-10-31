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
	
	ParcelUuid::ParcelUuid(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelUuid::ParcelUuid(java::util::UUID arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelUuid",
			"(Ljava/util/UUID;)V",
			arg0.__jniObject().object()
		);
	}
	
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
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ParcelUuid::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ParcelUuid::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jint ParcelUuid::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ParcelUuid::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ParcelUuid::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

