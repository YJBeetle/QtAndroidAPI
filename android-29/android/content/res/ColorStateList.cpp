#include "./Resources.hpp"
#include "./Resources_Theme.hpp"
#include "../../os/Parcel.hpp"
#include "./ColorStateList.hpp"

namespace android::content::res
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
	
	ColorStateList::ColorStateList(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorStateList::ColorStateList(jarray arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.ColorStateList",
			"([[I[I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject ColorStateList::createFromXml(android::content::res::Resources arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/content/res/ColorStateList;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ColorStateList::createFromXml(android::content::res::Resources arg0, __JniBaseClass arg1, android::content::res::Resources_Theme arg2)
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
	QAndroidJniObject ColorStateList::valueOf(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"valueOf",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jint ColorStateList::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ColorStateList::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
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
	jint ColorStateList::getDefaultColor()
	{
		return __thiz.callMethod<jint>(
			"getDefaultColor",
			"()I"
		);
	}
	jboolean ColorStateList::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean ColorStateList::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	jstring ColorStateList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ColorStateList::withAlpha(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withAlpha",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	void ColorStateList::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::res

