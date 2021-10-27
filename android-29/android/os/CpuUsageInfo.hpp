#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class CpuUsageInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jlong getActive();
		jlong getTotal();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "./Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject CpuUsageInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.CpuUsageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CpuUsageInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.CpuUsageInfo",
			"(V)V");
	}
	
	// Methods
	jint CpuUsageInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong CpuUsageInfo::getActive()
	{
		return __thiz.callMethod<jlong>(
			"getActive",
			"()J"
		);
	}
	jlong CpuUsageInfo::getTotal()
	{
		return __thiz.callMethod<jlong>(
			"getTotal",
			"()J"
		);
	}
	void CpuUsageInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class CpuUsageInfo : public __jni_impl::android::os::CpuUsageInfo
	{
	public:
		CpuUsageInfo(QAndroidJniObject obj) { __thiz = obj; }
		CpuUsageInfo()
		{
			__constructor();
		}
	};
} // namespace android::os

