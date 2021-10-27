#pragma once

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
		jint describeContents();
		jboolean equals(jobject arg0);
		jobject getData();
		jlong getId();
		jint getLogLevel();
		jint getTag();
		jlong getTimeNanos();
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
	jint SecurityLog_SecurityEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SecurityLog_SecurityEvent::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject SecurityLog_SecurityEvent::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong SecurityLog_SecurityEvent::getId()
	{
		return __thiz.callMethod<jlong>(
			"getId",
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
	jint SecurityLog_SecurityEvent::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
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

