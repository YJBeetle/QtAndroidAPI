#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellIdentity::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentity",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CellIdentity::CellIdentity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CellIdentity::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellIdentity::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellIdentity::getOperatorAlphaLong()
	{
		return __thiz.callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CellIdentity::getOperatorAlphaShort()
	{
		return __thiz.callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CellIdentity::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CellIdentity::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

