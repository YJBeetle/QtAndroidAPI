#pragma once

#ifndef ANDROID_TELEPHONY_NETWORKSCANREQUEST
#define ANDROID_TELEPHONY_NETWORKSCANREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class NetworkScanRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SCAN_TYPE_ONE_SHOT();
		static jint SCAN_TYPE_PERIODIC();
		
		// Constructors
		void __constructor(jint arg0, jarray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, __jni_impl::java::util::ArrayList arg6);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint getScanType();
		jint getSearchPeriodicity();
		jint getMaxSearchTime();
		jboolean getIncrementalResults();
		jint getIncrementalResultsPeriodicity();
		QAndroidJniObject getSpecifiers();
		QAndroidJniObject getPlmns();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../../java/util/ArrayList.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject NetworkScanRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.NetworkScanRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint NetworkScanRequest::SCAN_TYPE_ONE_SHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScanRequest",
			"SCAN_TYPE_ONE_SHOT");
	}
	jint NetworkScanRequest::SCAN_TYPE_PERIODIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScanRequest",
			"SCAN_TYPE_PERIODIC");
	}
	
	// Constructors
	void NetworkScanRequest::__constructor(jint arg0, jarray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, __jni_impl::java::util::ArrayList arg6)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NetworkScanRequest",
			"(I[Landroid/telephony/RadioAccessSpecifier;IIZILjava/util/ArrayList;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object());
	}
	
	// Methods
	jboolean NetworkScanRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint NetworkScanRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint NetworkScanRequest::getScanType()
	{
		return __thiz.callMethod<jint>(
			"getScanType",
			"()I");
	}
	jint NetworkScanRequest::getSearchPeriodicity()
	{
		return __thiz.callMethod<jint>(
			"getSearchPeriodicity",
			"()I");
	}
	jint NetworkScanRequest::getMaxSearchTime()
	{
		return __thiz.callMethod<jint>(
			"getMaxSearchTime",
			"()I");
	}
	jboolean NetworkScanRequest::getIncrementalResults()
	{
		return __thiz.callMethod<jboolean>(
			"getIncrementalResults",
			"()Z");
	}
	jint NetworkScanRequest::getIncrementalResultsPeriodicity()
	{
		return __thiz.callMethod<jint>(
			"getIncrementalResultsPeriodicity",
			"()I");
	}
	QAndroidJniObject NetworkScanRequest::getSpecifiers()
	{
		return __thiz.callObjectMethod(
			"getSpecifiers",
			"()[Landroid/telephony/RadioAccessSpecifier;");
	}
	QAndroidJniObject NetworkScanRequest::getPlmns()
	{
		return __thiz.callObjectMethod(
			"getPlmns",
			"()Ljava/util/ArrayList;");
	}
	jint NetworkScanRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void NetworkScanRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class NetworkScanRequest : public __jni_impl::android::telephony::NetworkScanRequest
	{
	public:
		NetworkScanRequest(QAndroidJniObject obj) { __thiz = obj; }
		NetworkScanRequest(jint arg0, jarray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, __jni_impl::java::util::ArrayList arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_NETWORKSCANREQUEST

