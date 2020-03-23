#pragma once

#ifndef ANDROID_CONTENT_PM_SERVICEINFO
#define ANDROID_CONTENT_PM_SERVICEINFO

#include "ComponentInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ServiceInfo : public __jni_impl::android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_EXTERNAL_SERVICE();
		static jint FLAG_ISOLATED_PROCESS();
		static jint FLAG_SINGLE_USER();
		static jint FLAG_STOP_WITH_TASK();
		static jint FLAG_USE_APP_ZYGOTE();
		static jint FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE();
		static jint FOREGROUND_SERVICE_TYPE_DATA_SYNC();
		static jint FOREGROUND_SERVICE_TYPE_LOCATION();
		static jint FOREGROUND_SERVICE_TYPE_MANIFEST();
		static jint FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK();
		static jint FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION();
		static jint FOREGROUND_SERVICE_TYPE_NONE();
		static jint FOREGROUND_SERVICE_TYPE_PHONE_CALL();
		jint flags();
		QAndroidJniObject permission();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::ServiceInfo arg0);
		
		// Methods
		QAndroidJniObject toString();
		jint getForegroundServiceType();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint ServiceInfo::FLAG_EXTERNAL_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_EXTERNAL_SERVICE");
	}
	jint ServiceInfo::FLAG_ISOLATED_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_ISOLATED_PROCESS");
	}
	jint ServiceInfo::FLAG_SINGLE_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_SINGLE_USER");
	}
	jint ServiceInfo::FLAG_STOP_WITH_TASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_STOP_WITH_TASK");
	}
	jint ServiceInfo::FLAG_USE_APP_ZYGOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_USE_APP_ZYGOTE");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_DATA_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_DATA_SYNC");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_LOCATION");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MANIFEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MANIFEST");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_NONE");
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_PHONE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_PHONE_CALL");
	}
	jint ServiceInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	QAndroidJniObject ServiceInfo::permission()
	{
		return __thiz.getObjectField(
			"permission",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ServiceInfo",
			"()V");
	}
	void ServiceInfo::__constructor(__jni_impl::android::content::pm::ServiceInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ServiceInfo",
			"(Landroid/content/pm/ServiceInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ServiceInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ServiceInfo::getForegroundServiceType()
	{
		return __thiz.callMethod<jint>(
			"getForegroundServiceType",
			"()I");
	}
	jint ServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ServiceInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ServiceInfo : public __jni_impl::android::content::pm::ServiceInfo
	{
	public:
		ServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		ServiceInfo()
		{
			__constructor();
		}
		ServiceInfo(__jni_impl::android::content::pm::ServiceInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_SERVICEINFO

