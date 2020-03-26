#pragma once

#ifndef ANDROID_APP_ADMIN_SECURITYLOG_SECURITYEVENT
#define ANDROID_APP_ADMIN_SECURITYLOG_SECURITYEVENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::admin
{
	class SecurityLog_SecurityEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jlong getId();
		jint getTag();
		jlong getTimeNanos();
		jint getLogLevel();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jobject getData();
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject SecurityLog_SecurityEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SecurityLog$SecurityEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SecurityLog_SecurityEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.SecurityLog$SecurityEvent",
			"(V)V");
	}
	
	// Methods
	jboolean SecurityLog_SecurityEvent::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SecurityLog_SecurityEvent::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong SecurityLog_SecurityEvent::getId()
	{
		return __thiz.callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jint SecurityLog_SecurityEvent::getTag()
	{
		return __thiz.callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jlong SecurityLog_SecurityEvent::getTimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jint SecurityLog_SecurityEvent::getLogLevel()
	{
		return __thiz.callMethod<jint>(
			"getLogLevel",
			"()I"
		);
	}
	jint SecurityLog_SecurityEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SecurityLog_SecurityEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jobject SecurityLog_SecurityEvent::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class SecurityLog_SecurityEvent : public __jni_impl::android::app::admin::SecurityLog_SecurityEvent
	{
	public:
		SecurityLog_SecurityEvent(QAndroidJniObject obj) { __thiz = obj; }
		SecurityLog_SecurityEvent()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_SECURITYLOG_SECURITYEVENT

