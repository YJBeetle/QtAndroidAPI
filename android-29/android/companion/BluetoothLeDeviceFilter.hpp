#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanFilter;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::android::companion
{
	class BluetoothLeDeviceFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getRenamePrefixLengthLimit();
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::companion

#include "../bluetooth/le/ScanFilter.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	QAndroidJniObject BluetoothLeDeviceFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.BluetoothLeDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void BluetoothLeDeviceFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.BluetoothLeDeviceFilter",
			"(V)V");
	}
	
	// Methods
	jint BluetoothLeDeviceFilter::getRenamePrefixLengthLimit()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.companion.BluetoothLeDeviceFilter",
			"getRenamePrefixLengthLimit",
			"()I"
		);
	}
	jint BluetoothLeDeviceFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothLeDeviceFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BluetoothLeDeviceFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BluetoothLeDeviceFilter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BluetoothLeDeviceFilter::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class BluetoothLeDeviceFilter : public __jni_impl::android::companion::BluetoothLeDeviceFilter
	{
	public:
		BluetoothLeDeviceFilter(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothLeDeviceFilter()
		{
			__constructor();
		}
	};
} // namespace android::companion

