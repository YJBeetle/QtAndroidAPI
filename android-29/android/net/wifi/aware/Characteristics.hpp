#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::aware
{
	class Characteristics : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jint getMaxMatchFilterLength();
		jint getMaxServiceNameLength();
		jint getMaxServiceSpecificInfoLength();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "../../../os/Bundle.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	QAndroidJniObject Characteristics::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Characteristics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.Characteristics",
			"(V)V");
	}
	
	// Methods
	jint Characteristics::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Characteristics::getMaxMatchFilterLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceNameLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceSpecificInfoLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	void Characteristics::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class Characteristics : public __jni_impl::android::net::wifi::aware::Characteristics
	{
	public:
		Characteristics(QAndroidJniObject obj) { __thiz = obj; }
		Characteristics()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

