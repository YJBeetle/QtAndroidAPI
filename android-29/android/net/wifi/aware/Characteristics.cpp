#include "../../../os/Bundle.hpp"
#include "../../../os/Parcel.hpp"
#include "./Characteristics.hpp"

namespace android::net::wifi::aware
{
	// Fields
	QAndroidJniObject Characteristics::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Characteristics::Characteristics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Characteristics::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Characteristics::getMaxMatchFilterLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceNameLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceSpecificInfoLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	void Characteristics::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

