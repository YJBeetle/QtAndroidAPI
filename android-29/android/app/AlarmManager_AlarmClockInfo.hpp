#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class AlarmManager_AlarmClockInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jlong arg0, __jni_impl::android::app::PendingIntent arg1);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getShowIntent();
		jlong getTriggerTime();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "./PendingIntent.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject AlarmManager_AlarmClockInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AlarmManager$AlarmClockInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AlarmManager_AlarmClockInfo::__constructor(jlong arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.AlarmManager$AlarmClockInfo",
			"(JLandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint AlarmManager_AlarmClockInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AlarmManager_AlarmClockInfo::getShowIntent()
	{
		return __thiz.callObjectMethod(
			"getShowIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jlong AlarmManager_AlarmClockInfo::getTriggerTime()
	{
		return __thiz.callMethod<jlong>(
			"getTriggerTime",
			"()J"
		);
	}
	void AlarmManager_AlarmClockInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class AlarmManager_AlarmClockInfo : public __jni_impl::android::app::AlarmManager_AlarmClockInfo
	{
	public:
		AlarmManager_AlarmClockInfo(QAndroidJniObject obj) { __thiz = obj; }
		AlarmManager_AlarmClockInfo(jlong arg0, __jni_impl::android::app::PendingIntent arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

