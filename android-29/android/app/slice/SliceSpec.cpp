#include "../../os/Parcel.hpp"
#include "./SliceSpec.hpp"

namespace android::app::slice
{
	// Fields
	QAndroidJniObject SliceSpec::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SliceSpec::SliceSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SliceSpec::SliceSpec(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceSpec",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean SliceSpec::canRender(android::app::slice::SliceSpec arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canRender",
			"(Landroid/app/slice/SliceSpec;)Z",
			arg0.__jniObject().object()
		);
	}
	jint SliceSpec::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SliceSpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SliceSpec::getRevision()
	{
		return __thiz.callMethod<jint>(
			"getRevision",
			"()I"
		);
	}
	jstring SliceSpec::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceSpec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SliceSpec::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::slice

