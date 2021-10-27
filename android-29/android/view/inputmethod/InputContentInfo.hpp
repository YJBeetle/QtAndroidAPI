#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ClipDescription;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputContentInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ClipDescription arg1);
		void __constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ClipDescription arg1, __jni_impl::android::net::Uri arg2);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getContentUri();
		QAndroidJniObject getDescription();
		QAndroidJniObject getLinkUri();
		void releasePermission();
		void requestPermission();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../content/ClipDescription.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputContentInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputContentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void InputContentInfo::__constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ClipDescription arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputContentInfo::__constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ClipDescription arg1, __jni_impl::android::net::Uri arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint InputContentInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject InputContentInfo::getContentUri()
	{
		return __thiz.callObjectMethod(
			"getContentUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject InputContentInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	QAndroidJniObject InputContentInfo::getLinkUri()
	{
		return __thiz.callObjectMethod(
			"getLinkUri",
			"()Landroid/net/Uri;"
		);
	}
	void InputContentInfo::releasePermission()
	{
		__thiz.callMethod<void>(
			"releasePermission",
			"()V"
		);
	}
	void InputContentInfo::requestPermission()
	{
		__thiz.callMethod<void>(
			"requestPermission",
			"()V"
		);
	}
	void InputContentInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputContentInfo : public __jni_impl::android::view::inputmethod::InputContentInfo
	{
	public:
		InputContentInfo(QAndroidJniObject obj) { __thiz = obj; }
		InputContentInfo(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ClipDescription arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InputContentInfo(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ClipDescription arg1, __jni_impl::android::net::Uri arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::inputmethod

