#include "./Parcel.hpp"
#include "./WorkSource.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject WorkSource::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.WorkSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WorkSource::WorkSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WorkSource::WorkSource()
	{
		__thiz = QAndroidJniObject(
			"android.os.WorkSource",
			"()V"
		);
	}
	WorkSource::WorkSource(android::os::WorkSource &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.WorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean WorkSource::add(android::os::WorkSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Landroid/os/WorkSource;)Z",
			arg0.__jniObject().object()
		);
	}
	void WorkSource::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint WorkSource::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WorkSource::diff(android::os::WorkSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"diff",
			"(Landroid/os/WorkSource;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean WorkSource::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WorkSource::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WorkSource::remove(android::os::WorkSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Landroid/os/WorkSource;)Z",
			arg0.__jniObject().object()
		);
	}
	void WorkSource::set(android::os::WorkSource arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	jstring WorkSource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WorkSource::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

