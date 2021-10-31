#include "../../os/Parcel.hpp"
#include "./UnsafeStateException.hpp"

namespace android::app::admin
{
	// Fields
	__JniBaseClass UnsafeStateException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.UnsafeStateException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UnsafeStateException::UnsafeStateException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	jint UnsafeStateException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring UnsafeStateException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass UnsafeStateException::getReasons()
	{
		return callObjectMethod(
			"getReasons",
			"()Ljava/util/List;"
		);
	}
	void UnsafeStateException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

