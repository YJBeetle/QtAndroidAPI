#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textservice
{
	class TextInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(const QString &arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents();
		jstring getCharSequence();
		jint getCookie();
		jint getSequence();
		jstring getText();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textservice

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textservice
{
	// Fields
	QAndroidJniObject TextInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.TextInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void TextInfo::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextInfo::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextInfo::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextInfo::__constructor(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void TextInfo::__constructor(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/CharSequence;IIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void TextInfo::__constructor(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/CharSequence;IIII)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint TextInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextInfo::getCharSequence()
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextInfo::getCookie()
	{
		return __thiz.callMethod<jint>(
			"getCookie",
			"()I"
		);
	}
	jint TextInfo::getSequence()
	{
		return __thiz.callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	jstring TextInfo::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class TextInfo : public __jni_impl::android::view::textservice::TextInfo
	{
	public:
		TextInfo(QAndroidJniObject obj) { __thiz = obj; }
		TextInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		TextInfo(jstring arg0)
		{
			__constructor(
				arg0);
		}
		TextInfo(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextInfo(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::view::textservice

