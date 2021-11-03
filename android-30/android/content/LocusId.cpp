#include "../os/Parcel.hpp"
#include "./LocusId.hpp"

namespace android::content
{
	// Fields
	JObject LocusId::CREATOR()
	{
		return getStaticObjectField(
			"android.content.LocusId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	LocusId::LocusId(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocusId::LocusId(jstring arg0)
		: JObject(
			"android.content.LocusId",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint LocusId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocusId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocusId::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocusId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LocusId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocusId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

