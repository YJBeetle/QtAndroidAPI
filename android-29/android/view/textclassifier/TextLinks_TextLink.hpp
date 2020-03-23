#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextLinks_TextLink : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getExtras();
		jint getStart();
		jint getEnd();
		jfloat getConfidenceScore(jstring arg0);
		jint getEntityCount();
		QAndroidJniObject getEntity(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextLinks_TextLink::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLinks$TextLink",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void TextLinks_TextLink::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$TextLink",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextLinks_TextLink::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TextLinks_TextLink::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	jint TextLinks_TextLink::getStart()
	{
		return __thiz.callMethod<jint>(
			"getStart",
			"()I");
	}
	jint TextLinks_TextLink::getEnd()
	{
		return __thiz.callMethod<jint>(
			"getEnd",
			"()I");
	}
	jfloat TextLinks_TextLink::getConfidenceScore(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0);
	}
	jint TextLinks_TextLink::getEntityCount()
	{
		return __thiz.callMethod<jint>(
			"getEntityCount",
			"()I");
	}
	QAndroidJniObject TextLinks_TextLink::getEntity(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint TextLinks_TextLink::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void TextLinks_TextLink::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLinks_TextLink : public __jni_impl::android::view::textclassifier::TextLinks_TextLink
	{
	public:
		TextLinks_TextLink(QAndroidJniObject obj) { __thiz = obj; }
		TextLinks_TextLink()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK

