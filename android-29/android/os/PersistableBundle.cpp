#include "./Parcel.hpp"
#include "./PersistableBundle.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject PersistableBundle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PersistableBundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject PersistableBundle::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PersistableBundle",
			"EMPTY",
			"Landroid/os/PersistableBundle;"
		);
	}
	
	PersistableBundle::PersistableBundle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PersistableBundle::PersistableBundle()
	{
		__thiz = QAndroidJniObject(
			"android.os.PersistableBundle",
			"()V"
		);
	}
	PersistableBundle::PersistableBundle(android::os::PersistableBundle &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.PersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	PersistableBundle::PersistableBundle(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.PersistableBundle",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jobject PersistableBundle::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PersistableBundle::deepCopy()
	{
		return __thiz.callObjectMethod(
			"deepCopy",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint PersistableBundle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject PersistableBundle::getPersistableBundle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPersistableBundle",
			"(Ljava/lang/String;)Landroid/os/PersistableBundle;",
			arg0
		);
	}
	void PersistableBundle::putPersistableBundle(jstring arg0, android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"putPersistableBundle",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring PersistableBundle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PersistableBundle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

