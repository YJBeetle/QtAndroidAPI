#include "../os/Parcel.hpp"
#include "./PrintJobId.hpp"

namespace android::print
{
	// Fields
	QAndroidJniObject PrintJobId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintJobId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PrintJobId::PrintJobId(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint PrintJobId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintJobId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintJobId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PrintJobId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::print

