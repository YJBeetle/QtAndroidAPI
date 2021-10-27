#include "../../os/Parcel.hpp"
#include "./Dataset_Builder.hpp"
#include "./Dataset.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject Dataset::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.Dataset",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Dataset::Dataset(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Dataset::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Dataset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Dataset::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

