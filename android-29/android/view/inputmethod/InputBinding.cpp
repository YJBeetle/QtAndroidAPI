#include "../../os/Parcel.hpp"
#include "./InputBinding.hpp"

namespace android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputBinding::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputBinding",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	InputBinding::InputBinding(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputBinding::InputBinding(__JniBaseClass arg0, android::view::inputmethod::InputBinding &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/InputBinding;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	InputBinding::InputBinding(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/os/IBinder;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint InputBinding::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject InputBinding::getConnection()
	{
		return __thiz.callObjectMethod(
			"getConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	QAndroidJniObject InputBinding::getConnectionToken()
	{
		return __thiz.callObjectMethod(
			"getConnectionToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint InputBinding::getPid()
	{
		return __thiz.callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint InputBinding::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jstring InputBinding::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputBinding::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

