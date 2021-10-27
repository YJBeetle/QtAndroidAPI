#include "../os/Parcel.hpp"
#include "./Annotation.hpp"

namespace android::text
{
	// Fields
	
	Annotation::Annotation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Annotation::Annotation(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.Annotation",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	Annotation::Annotation(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	Annotation::Annotation(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint Annotation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Annotation::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Annotation::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring Annotation::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Annotation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text

