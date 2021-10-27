#include "../../os/Parcel.hpp"
#include "./Signature.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject Signature::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.Signature",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Signature::Signature(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Signature::Signature(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.Signature",
			"([B)V",
			arg0
		);
	}
	Signature::Signature(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.Signature",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Signature::Signature(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.Signature",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Signature::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Signature::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Signature::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray Signature::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jcharArray Signature::toChars()
	{
		return __thiz.callObjectMethod(
			"toChars",
			"()[C"
		).object<jcharArray>();
	}
	jcharArray Signature::toChars(jcharArray arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"toChars",
			"([C[I)[C",
			arg0,
			arg1
		).object<jcharArray>();
	}
	jstring Signature::toCharsString()
	{
		return __thiz.callObjectMethod(
			"toCharsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Signature::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

