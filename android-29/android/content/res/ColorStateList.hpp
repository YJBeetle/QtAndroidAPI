#pragma once

#ifndef ANDROID_CONTENT_RES_COLORSTATELIST
#define ANDROID_CONTENT_RES_COLORSTATELIST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}

namespace __jni_impl::android::content::res
{
	class ColorStateList : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jarray arg0, jintArray arg1);
		
		// Methods
		jstring toString();
		static QAndroidJniObject valueOf(jint arg0);
		jboolean isOpaque();
		jint getColorForState(jintArray arg0, jint arg1);
		QAndroidJniObject withAlpha(jint arg0);
		jint getDefaultColor();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getChangingConfigurations();
		jboolean isStateful();
		static QAndroidJniObject createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::content::res::Resources_Theme arg2);
	};
} // namespace __jni_impl::android::content::res

#include "../../os/Parcel.hpp"
#include "Resources.hpp"
#include "Resources_Theme.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	QAndroidJniObject ColorStateList::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.res.ColorStateList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ColorStateList::__constructor(jarray arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.ColorStateList",
			"([[I[I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jstring ColorStateList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ColorStateList::valueOf(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"valueOf",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jboolean ColorStateList::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jint ColorStateList::getColorForState(jintArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getColorForState",
			"([II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ColorStateList::withAlpha(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withAlpha",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jint ColorStateList::getDefaultColor()
	{
		return __thiz.callMethod<jint>(
			"getDefaultColor",
			"()I"
		);
	}
	jint ColorStateList::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ColorStateList::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint ColorStateList::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jboolean ColorStateList::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject ColorStateList::createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/content/res/ColorStateList;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ColorStateList::createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::content::res::Resources_Theme arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class ColorStateList : public __jni_impl::android::content::res::ColorStateList
	{
	public:
		ColorStateList(QAndroidJniObject obj) { __thiz = obj; }
		ColorStateList(jarray arg0, jintArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_COLORSTATELIST

