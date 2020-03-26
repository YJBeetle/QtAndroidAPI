#pragma once

#ifndef ANDROID_SERVICE_CARRIER_MESSAGEPDU
#define ANDROID_SERVICE_CARRIER_MESSAGEPDU

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::carrier
{
	class MessagePdu : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getPdus();
	};
} // namespace __jni_impl::android::service::carrier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::carrier
{
	// Fields
	QAndroidJniObject MessagePdu::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.carrier.MessagePdu",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void MessagePdu::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.MessagePdu",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint MessagePdu::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void MessagePdu::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MessagePdu::getPdus()
	{
		return __thiz.callObjectMethod(
			"getPdus",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class MessagePdu : public __jni_impl::android::service::carrier::MessagePdu
	{
	public:
		MessagePdu(QAndroidJniObject obj) { __thiz = obj; }
		MessagePdu(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_MESSAGEPDU

