#pragma once

#ifndef ANDROID_TELEPHONY_UICCCARDINFO
#define ANDROID_TELEPHONY_UICCCARDINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class UiccCardInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getIccId();
		jint getCardId();
		jint getSlotIndex();
		jboolean isEuicc();
		QAndroidJniObject getEid();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean isRemovable();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject UiccCardInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.UiccCardInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void UiccCardInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.UiccCardInfo",
			"(V)V");
	}
	
	// Methods
	jboolean UiccCardInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject UiccCardInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint UiccCardInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject UiccCardInfo::getIccId()
	{
		return __thiz.callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;");
	}
	jint UiccCardInfo::getCardId()
	{
		return __thiz.callMethod<jint>(
			"getCardId",
			"()I");
	}
	jint UiccCardInfo::getSlotIndex()
	{
		return __thiz.callMethod<jint>(
			"getSlotIndex",
			"()I");
	}
	jboolean UiccCardInfo::isEuicc()
	{
		return __thiz.callMethod<jboolean>(
			"isEuicc",
			"()Z");
	}
	QAndroidJniObject UiccCardInfo::getEid()
	{
		return __thiz.callObjectMethod(
			"getEid",
			"()Ljava/lang/String;");
	}
	jint UiccCardInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void UiccCardInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean UiccCardInfo::isRemovable()
	{
		return __thiz.callMethod<jboolean>(
			"isRemovable",
			"()Z");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class UiccCardInfo : public __jni_impl::android::telephony::UiccCardInfo
	{
	public:
		UiccCardInfo(QAndroidJniObject obj) { __thiz = obj; }
		UiccCardInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_UICCCARDINFO

