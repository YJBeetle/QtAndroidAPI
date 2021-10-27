#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class ResultReceiver : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Handler arg0);
		
		// Methods
		jint describeContents();
		void send(jint arg0, __jni_impl::android::os::Bundle arg1);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Bundle.hpp"
#include "Handler.hpp"
#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject ResultReceiver::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.ResultReceiver",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ResultReceiver::__constructor(__jni_impl::android::os::Handler arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ResultReceiver",
			"(Landroid/os/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ResultReceiver::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResultReceiver::send(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"send",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ResultReceiver::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ResultReceiver : public __jni_impl::android::os::ResultReceiver
	{
	public:
		ResultReceiver(QAndroidJniObject obj) { __thiz = obj; }
		ResultReceiver(__jni_impl::android::os::Handler arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

