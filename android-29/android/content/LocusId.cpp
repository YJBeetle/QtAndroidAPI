#include "../os/Parcel.hpp"
#include "./LocusId.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject LocusId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.LocusId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	LocusId::LocusId(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocusId::LocusId(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.LocusId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jint LocusId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocusId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocusId::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocusId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LocusId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocusId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

