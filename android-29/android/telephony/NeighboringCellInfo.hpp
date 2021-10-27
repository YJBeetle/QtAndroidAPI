#pragma once

#ifndef ANDROID_TELEPHONY_NEIGHBORINGCELLINFO
#define ANDROID_TELEPHONY_NEIGHBORINGCELLINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class NeighboringCellInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint UNKNOWN_CID();
		static jint UNKNOWN_RSSI();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jstring arg1, jint arg2);
		void __constructor(jint arg0, const QString &arg1, jint arg2);
		
		// Methods
		jint describeContents();
		jint getCid();
		jint getLac();
		jint getNetworkType();
		jint getPsc();
		jint getRssi();
		void setCid(jint arg0);
		void setRssi(jint arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject NeighboringCellInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.NeighboringCellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NeighboringCellInfo::UNKNOWN_CID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_CID"
		);
	}
	jint NeighboringCellInfo::UNKNOWN_RSSI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_RSSI"
		);
	}
	
	// Constructors
	void NeighboringCellInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"()V"
		);
	}
	void NeighboringCellInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void NeighboringCellInfo::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void NeighboringCellInfo::__constructor(jint arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NeighboringCellInfo::__constructor(jint arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jint NeighboringCellInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint NeighboringCellInfo::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint NeighboringCellInfo::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint NeighboringCellInfo::getNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint NeighboringCellInfo::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint NeighboringCellInfo::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	void NeighboringCellInfo::setCid(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCid",
			"(I)V",
			arg0
		);
	}
	void NeighboringCellInfo::setRssi(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRssi",
			"(I)V",
			arg0
		);
	}
	jstring NeighboringCellInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NeighboringCellInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class NeighboringCellInfo : public __jni_impl::android::telephony::NeighboringCellInfo
	{
	public:
		NeighboringCellInfo(QAndroidJniObject obj) { __thiz = obj; }
		NeighboringCellInfo()
		{
			__constructor();
		}
		NeighboringCellInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		NeighboringCellInfo(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NeighboringCellInfo(jint arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_NEIGHBORINGCELLINFO

