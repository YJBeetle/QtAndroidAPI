#pragma once

#ifndef ANDROID_NET_NETWORKREQUEST
#define ANDROID_NET_NETWORKREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class NetworkRequest : public __JniBaseClass
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
		jboolean hasCapability(jint arg0);
		jboolean hasTransport(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject NetworkRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void NetworkRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkRequest",
			"(V)V");
	}
	
	// Methods
	jboolean NetworkRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject NetworkRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint NetworkRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean NetworkRequest::hasCapability(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0);
	}
	jboolean NetworkRequest::hasTransport(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0);
	}
	jint NetworkRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void NetworkRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class NetworkRequest : public __jni_impl::android::net::NetworkRequest
	{
	public:
		NetworkRequest(QAndroidJniObject obj) { __thiz = obj; }
		NetworkRequest()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_NETWORKREQUEST

