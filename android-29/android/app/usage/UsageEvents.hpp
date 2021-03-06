#pragma once

#ifndef ANDROID_APP_USAGE_USAGEEVENTS
#define ANDROID_APP_USAGE_USAGEEVENTS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::app::usage
{
	class UsageEvents_Event;
}

namespace __jni_impl::android::app::usage
{
	class UsageEvents : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean hasNextEvent();
		jboolean getNextEvent(__jni_impl::android::app::usage::UsageEvents_Event arg0);
	};
} // namespace __jni_impl::android::app::usage

#include "../../os/Parcel.hpp"
#include "UsageEvents_Event.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	QAndroidJniObject UsageEvents::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.UsageEvents",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UsageEvents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.UsageEvents",
			"(V)V");
	}
	
	// Methods
	jint UsageEvents::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void UsageEvents::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean UsageEvents::hasNextEvent()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextEvent",
			"()Z"
		);
	}
	jboolean UsageEvents::getNextEvent(__jni_impl::android::app::usage::UsageEvents_Event arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getNextEvent",
			"(Landroid/app/usage/UsageEvents$Event;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class UsageEvents : public __jni_impl::android::app::usage::UsageEvents
	{
	public:
		UsageEvents(QAndroidJniObject obj) { __thiz = obj; }
		UsageEvents()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_USAGEEVENTS

