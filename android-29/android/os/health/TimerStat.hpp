#pragma once

#ifndef ANDROID_OS_HEALTH_TIMERSTAT
#define ANDROID_OS_HEALTH_TIMERSTAT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os::health
{
	class TimerStat : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0, jlong arg1);
		void __constructor();
		
		// Methods
		jlong getTime();
		jint getCount();
		void setTime(jlong arg0);
		void setCount(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os::health

#include "../Parcel.hpp"

namespace __jni_impl::android::os::health
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
	
	// Constructors
	void TimerStat::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.health.TimerStat",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void TimerStat::__constructor(jint arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.health.TimerStat",
			"(IJ)V",
			arg0,
			arg1);
	}
	void TimerStat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.TimerStat",
			"()V");
	}
	
	// Methods
	jlong TimerStat::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint TimerStat::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
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
	void TimerStat::setCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCount",
			"(I)V",
			arg0
		);
	}
	jint TimerStat::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TimerStat::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class TimerStat : public __jni_impl::android::os::health::TimerStat
	{
	public:
		TimerStat(QAndroidJniObject obj) { __thiz = obj; }
		TimerStat(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		TimerStat(jint arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TimerStat()
		{
			__constructor();
		}
	};
} // namespace android::os::health

#endif // ANDROID_OS_HEALTH_TIMERSTAT

