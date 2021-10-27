#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_RunningAppProcessInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint IMPORTANCE_BACKGROUND();
		static jint IMPORTANCE_CACHED();
		static jint IMPORTANCE_CANT_SAVE_STATE();
		static jint IMPORTANCE_EMPTY();
		static jint IMPORTANCE_FOREGROUND();
		static jint IMPORTANCE_FOREGROUND_SERVICE();
		static jint IMPORTANCE_GONE();
		static jint IMPORTANCE_PERCEPTIBLE();
		static jint IMPORTANCE_PERCEPTIBLE_PRE_26();
		static jint IMPORTANCE_SERVICE();
		static jint IMPORTANCE_TOP_SLEEPING();
		static jint IMPORTANCE_TOP_SLEEPING_PRE_28();
		static jint IMPORTANCE_VISIBLE();
		static jint REASON_PROVIDER_IN_USE();
		static jint REASON_SERVICE_IN_USE();
		static jint REASON_UNKNOWN();
		jint importance();
		jint importanceReasonCode();
		QAndroidJniObject importanceReasonComponent();
		jint importanceReasonPid();
		jint lastTrimLevel();
		jint lru();
		jint pid();
		jarray pkgList();
		jstring processName();
		jint uid();
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0, jint arg1, jarray arg2);
		void __constructor(const QString &arg0, jint arg1, jarray arg2);
		
		// Methods
		jint describeContents();
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningAppProcessInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_BACKGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_BACKGROUND"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CACHED"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CANT_SAVE_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CANT_SAVE_STATE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_EMPTY"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND_SERVICE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_GONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_GONE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE_PRE_26()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE_PRE_26"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_SERVICE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING_PRE_28()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING_PRE_28"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_VISIBLE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_PROVIDER_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_PROVIDER_IN_USE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_SERVICE_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_SERVICE_IN_USE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_UNKNOWN"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::importance()
	{
		return __thiz.getField<jint>(
			"importance"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::importanceReasonCode()
	{
		return __thiz.getField<jint>(
			"importanceReasonCode"
		);
	}
	QAndroidJniObject ActivityManager_RunningAppProcessInfo::importanceReasonComponent()
	{
		return __thiz.getObjectField(
			"importanceReasonComponent",
			"Landroid/content/ComponentName;"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::importanceReasonPid()
	{
		return __thiz.getField<jint>(
			"importanceReasonPid"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::lastTrimLevel()
	{
		return __thiz.getField<jint>(
			"lastTrimLevel"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::lru()
	{
		return __thiz.getField<jint>(
			"lru"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::pid()
	{
		return __thiz.getField<jint>(
			"pid"
		);
	}
	jarray ActivityManager_RunningAppProcessInfo::pkgList()
	{
		return __thiz.getObjectField(
			"pkgList",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ActivityManager_RunningAppProcessInfo::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_RunningAppProcessInfo::uid()
	{
		return __thiz.getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	void ActivityManager_RunningAppProcessInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"()V"
		);
	}
	void ActivityManager_RunningAppProcessInfo::__constructor(jstring arg0, jint arg1, jarray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"(Ljava/lang/String;I[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ActivityManager_RunningAppProcessInfo::__constructor(const QString &arg0, jint arg1, jarray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"(Ljava/lang/String;I[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ActivityManager_RunningAppProcessInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningAppProcessInfo::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ActivityManager_RunningAppProcessInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ActivityManager_RunningAppProcessInfo : public __jni_impl::android::app::ActivityManager_RunningAppProcessInfo
	{
	public:
		ActivityManager_RunningAppProcessInfo(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_RunningAppProcessInfo()
		{
			__constructor();
		}
		ActivityManager_RunningAppProcessInfo(jstring arg0, jint arg1, jarray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

