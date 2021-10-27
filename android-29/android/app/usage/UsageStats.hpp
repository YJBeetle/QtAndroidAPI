#pragma once

#ifndef ANDROID_APP_USAGE_USAGESTATS
#define ANDROID_APP_USAGE_USAGESTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::usage
{
	class UsageStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::app::usage::UsageStats arg0);
		
		// Methods
		void add(__jni_impl::android::app::usage::UsageStats arg0);
		jint describeContents();
		jlong getFirstTimeStamp();
		jlong getLastTimeForegroundServiceUsed();
		jlong getLastTimeStamp();
		jlong getLastTimeUsed();
		jlong getLastTimeVisible();
		jstring getPackageName();
		jlong getTotalTimeForegroundServiceUsed();
		jlong getTotalTimeInForeground();
		jlong getTotalTimeVisible();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::usage

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	QAndroidJniObject UsageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.UsageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UsageStats::__constructor(__jni_impl::android::app::usage::UsageStats arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.UsageStats",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void UsageStats::add(__jni_impl::android::app::usage::UsageStats arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.__jniObject().object()
		);
	}
	jint UsageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UsageStats::getFirstTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeForegroundServiceUsed()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeForegroundServiceUsed",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeUsed()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeUsed",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeVisible()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeVisible",
			"()J"
		);
	}
	jstring UsageStats::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong UsageStats::getTotalTimeForegroundServiceUsed()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeForegroundServiceUsed",
			"()J"
		);
	}
	jlong UsageStats::getTotalTimeInForeground()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeInForeground",
			"()J"
		);
	}
	jlong UsageStats::getTotalTimeVisible()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeVisible",
			"()J"
		);
	}
	void UsageStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class UsageStats : public __jni_impl::android::app::usage::UsageStats
	{
	public:
		UsageStats(QAndroidJniObject obj) { __thiz = obj; }
		UsageStats(__jni_impl::android::app::usage::UsageStats arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_USAGESTATS

