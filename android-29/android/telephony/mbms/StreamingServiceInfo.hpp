#pragma once

#include "../../../__JniBaseClass.hpp"
#include "ServiceInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony::mbms
{
	class StreamingServiceInfo : public __jni_impl::android::telephony::mbms::ServiceInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	QAndroidJniObject StreamingServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.mbms.StreamingServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void StreamingServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.StreamingServiceInfo",
			"(V)V");
	}
	
	// Methods
	jint StreamingServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void StreamingServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class StreamingServiceInfo : public __jni_impl::android::telephony::mbms::StreamingServiceInfo
	{
	public:
		StreamingServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		StreamingServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

