#pragma once

#include "../../__JniBaseClass.hpp"

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
	class WifiDeviceFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::companion

#include "../os/Parcel.hpp"
#include "../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	QAndroidJniObject WifiDeviceFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.WifiDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WifiDeviceFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.WifiDeviceFilter",
			"(V)V");
	}
	
	// Methods
	jint WifiDeviceFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiDeviceFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiDeviceFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiDeviceFilter::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WifiDeviceFilter : public __jni_impl::android::companion::WifiDeviceFilter
	{
	public:
		WifiDeviceFilter(QAndroidJniObject obj) { __thiz = obj; }
		WifiDeviceFilter()
		{
			__constructor();
		}
	};
} // namespace android::companion

