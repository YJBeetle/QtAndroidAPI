#include "../os/Parcel.hpp"
#include "./PrinterId.hpp"

namespace android::print
{
	// Fields
	QAndroidJniObject PrinterId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrinterId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PrinterId::PrinterId(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint PrinterId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PrinterId::getLocalId()
	{
		return __thiz.callObjectMethod(
			"getLocalId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrinterId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrinterId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrinterId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::print

