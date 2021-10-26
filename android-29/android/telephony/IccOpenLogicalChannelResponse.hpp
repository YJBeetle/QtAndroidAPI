#pragma once

#ifndef ANDROID_TELEPHONY_ICCOPENLOGICALCHANNELRESPONSE
#define ANDROID_TELEPHONY_ICCOPENLOGICALCHANNELRESPONSE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class IccOpenLogicalChannelResponse : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint INVALID_CHANNEL();
		static jint STATUS_MISSING_RESOURCE();
		static jint STATUS_NO_ERROR();
		static jint STATUS_NO_SUCH_ELEMENT();
		static jint STATUS_UNKNOWN_ERROR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint getChannel();
		jint getStatus();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jbyteArray getSelectResponse();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject IccOpenLogicalChannelResponse::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.IccOpenLogicalChannelResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint IccOpenLogicalChannelResponse::INVALID_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"INVALID_CHANNEL"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_MISSING_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_MISSING_RESOURCE"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_ERROR"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_NO_SUCH_ELEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_SUCH_ELEMENT"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_UNKNOWN_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_UNKNOWN_ERROR"
		);
	}
	
	// Constructors
	void IccOpenLogicalChannelResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.IccOpenLogicalChannelResponse",
			"(V)V");
	}
	
	// Methods
	jstring IccOpenLogicalChannelResponse::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IccOpenLogicalChannelResponse::getChannel()
	{
		return __thiz.callMethod<jint>(
			"getChannel",
			"()I"
		);
	}
	jint IccOpenLogicalChannelResponse::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint IccOpenLogicalChannelResponse::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void IccOpenLogicalChannelResponse::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jbyteArray IccOpenLogicalChannelResponse::getSelectResponse()
	{
		return __thiz.callObjectMethod(
			"getSelectResponse",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class IccOpenLogicalChannelResponse : public __jni_impl::android::telephony::IccOpenLogicalChannelResponse
	{
	public:
		IccOpenLogicalChannelResponse(QAndroidJniObject obj) { __thiz = obj; }
		IccOpenLogicalChannelResponse()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_ICCOPENLOGICALCHANNELRESPONSE

