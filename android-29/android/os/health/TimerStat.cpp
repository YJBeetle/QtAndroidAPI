#include "../Parcel.hpp"
#include "./TimerStat.hpp"

namespace android::os::health
{
	// Fields
	QAndroidJniObject TimerStat::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.health.TimerStat",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TimerStat::TimerStat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimerStat::TimerStat()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.TimerStat",
			"()V"
		);
	}
	TimerStat::TimerStat(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.health.TimerStat",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	TimerStat::TimerStat(jint &arg0, jlong &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.health.TimerStat",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint TimerStat::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint TimerStat::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jlong TimerStat::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	void TimerStat::setCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCount",
			"(I)V",
			arg0
		);
	}
	void TimerStat::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void TimerStat::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os::health

