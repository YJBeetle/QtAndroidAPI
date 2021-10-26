#pragma once

#ifndef ANDROID_TELEPHONY_AVAILABLENETWORKINFO
#define ANDROID_TELEPHONY_AVAILABLENETWORKINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class AvailableNetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MED();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getPriority();
		QAndroidJniObject getBands();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getSubId();
		QAndroidJniObject getMccMncs();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject AvailableNetworkInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.AvailableNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AvailableNetworkInfo::PRIORITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_HIGH"
		);
	}
	jint AvailableNetworkInfo::PRIORITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_LOW"
		);
	}
	jint AvailableNetworkInfo::PRIORITY_MED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_MED"
		);
	}
	
	// Constructors
	void AvailableNetworkInfo::__constructor(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.AvailableNetworkInfo",
			"(IILjava/util/List;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AvailableNetworkInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AvailableNetworkInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AvailableNetworkInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AvailableNetworkInfo::getPriority()
	{
		return __thiz.callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	QAndroidJniObject AvailableNetworkInfo::getBands()
	{
		return __thiz.callObjectMethod(
			"getBands",
			"()Ljava/util/List;"
		);
	}
	jint AvailableNetworkInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AvailableNetworkInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AvailableNetworkInfo::getSubId()
	{
		return __thiz.callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	QAndroidJniObject AvailableNetworkInfo::getMccMncs()
	{
		return __thiz.callObjectMethod(
			"getMccMncs",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class AvailableNetworkInfo : public __jni_impl::android::telephony::AvailableNetworkInfo
	{
	public:
		AvailableNetworkInfo(QAndroidJniObject obj) { __thiz = obj; }
		AvailableNetworkInfo(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_AVAILABLENETWORKINFO

