#pragma once

#ifndef ANDROID_APP_USAGE_EVENTSTATS
#define ANDROID_APP_USAGE_EVENTSTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::usage
{
	class EventStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::app::usage::EventStats arg0);
		
		// Methods
		void add(__jni_impl::android::app::usage::EventStats arg0);
		jint getCount();
		jlong getLastEventTime();
		jlong getTotalTime();
		jlong getLastTimeStamp();
		jlong getFirstTimeStamp();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getEventType();
	};
} // namespace __jni_impl::android::app::usage

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	QAndroidJniObject EventStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.EventStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void EventStats::__constructor(__jni_impl::android::app::usage::EventStats arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.EventStats",
			"(Landroid/app/usage/EventStats;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void EventStats::add(__jni_impl::android::app::usage::EventStats arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/app/usage/EventStats;)V",
			arg0.__jniObject().object());
	}
	jint EventStats::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I");
	}
	jlong EventStats::getLastEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getLastEventTime",
			"()J");
	}
	jlong EventStats::getTotalTime()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTime",
			"()J");
	}
	jlong EventStats::getLastTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeStamp",
			"()J");
	}
	jlong EventStats::getFirstTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getFirstTimeStamp",
			"()J");
	}
	jint EventStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void EventStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint EventStats::getEventType()
	{
		return __thiz.callMethod<jint>(
			"getEventType",
			"()I");
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class EventStats : public __jni_impl::android::app::usage::EventStats
	{
	public:
		EventStats(QAndroidJniObject obj) { __thiz = obj; }
		EventStats(__jni_impl::android::app::usage::EventStats arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_EVENTSTATS

