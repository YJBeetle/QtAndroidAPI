#pragma once

#ifndef ANDROID_TELECOM_CONNECTIONREQUEST
#define ANDROID_TELECOM_CONNECTIONREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telecom
{
	class Connection_RttTextStream;
}

namespace __jni_impl::android::telecom
{
	class ConnectionRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2);
		void __constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2, jint arg3);
		
		// Methods
		jstring toString();
		QAndroidJniObject getAddress();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		jint getVideoState();
		QAndroidJniObject getAccountHandle();
		QAndroidJniObject getRttTextStream();
		jboolean isRequestingRtt();
	};
} // namespace __jni_impl::android::telecom

#include "PhoneAccountHandle.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "Connection_RttTextStream.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject ConnectionRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.ConnectionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ConnectionRequest::__constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.ConnectionRequest",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ConnectionRequest::__constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.ConnectionRequest",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	
	// Methods
	jstring ConnectionRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ConnectionRequest::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint ConnectionRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ConnectionRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ConnectionRequest::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint ConnectionRequest::getVideoState()
	{
		return __thiz.callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	QAndroidJniObject ConnectionRequest::getAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	QAndroidJniObject ConnectionRequest::getRttTextStream()
	{
		return __thiz.callObjectMethod(
			"getRttTextStream",
			"()Landroid/telecom/Connection$RttTextStream;"
		);
	}
	jboolean ConnectionRequest::isRequestingRtt()
	{
		return __thiz.callMethod<jboolean>(
			"isRequestingRtt",
			"()Z"
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class ConnectionRequest : public __jni_impl::android::telecom::ConnectionRequest
	{
	public:
		ConnectionRequest(QAndroidJniObject obj) { __thiz = obj; }
		ConnectionRequest(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ConnectionRequest(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CONNECTIONREQUEST

