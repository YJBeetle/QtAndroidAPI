#include "../Parcel.hpp"
#include "./TimerStat.hpp"

namespace android::os::health
{
	// Fields
	JObject TimerStat::CREATOR()
	{
		return getStaticObjectField(
			"android.os.health.TimerStat",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TimerStat::TimerStat(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TimerStat::TimerStat()
		: JObject(
			"android.os.health.TimerStat",
			"()V"
		) {}
	TimerStat::TimerStat(android::os::Parcel arg0)
		: JObject(
			"android.os.health.TimerStat",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	TimerStat::TimerStat(jint arg0, jlong arg1)
		: JObject(
			"android.os.health.TimerStat",
			"(IJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint TimerStat::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint TimerStat::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jlong TimerStat::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	void TimerStat::setCount(jint arg0) const
	{
		callMethod<void>(
			"setCount",
			"(I)V",
			arg0
		);
	}
	void TimerStat::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void TimerStat::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os::health

