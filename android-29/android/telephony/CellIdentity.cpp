#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass CellIdentity::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentity",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentity::CellIdentity(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint CellIdentity::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellIdentity::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellIdentity::getOperatorAlphaLong()
	{
		return callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CellIdentity::getOperatorAlphaShort()
	{
		return callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CellIdentity::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CellIdentity::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

