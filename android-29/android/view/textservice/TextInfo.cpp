#include "../../os/Parcel.hpp"
#include "./TextInfo.hpp"

namespace android::view::textservice
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
	
	TextInfo::TextInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextInfo::TextInfo(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	TextInfo::TextInfo(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TextInfo::TextInfo(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	TextInfo::TextInfo(jstring &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	TextInfo::TextInfo(const QString &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	TextInfo::TextInfo(jstring &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4)
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
	TextInfo::TextInfo(const QString &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4)
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
	void TextInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textservice

