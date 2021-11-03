#include "./Resources.hpp"
#include "./Resources_Theme.hpp"
#include "../../os/Parcel.hpp"
#include "./ColorStateList.hpp"

namespace android::content::res
{
	// Fields
	JObject ColorStateList::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.ColorStateList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ColorStateList::ColorStateList(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ColorStateList::ColorStateList(jarray arg0, jintArray arg1)
		: JObject(
			"android.content.res.ColorStateList",
			"([[I[I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::content::res::ColorStateList ColorStateList::createFromXml(android::content::res::Resources arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/content/res/ColorStateList;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::res::ColorStateList ColorStateList::createFromXml(android::content::res::Resources arg0, JObject arg1, android::content::res::Resources_Theme arg2)
	{
		return callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::content::res::ColorStateList ColorStateList::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.ColorStateList",
			"valueOf",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jint ColorStateList::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ColorStateList::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint ColorStateList::getColorForState(jintArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"getColorForState",
			"([II)I",
			arg0,
			arg1
		);
	}
	jint ColorStateList::getDefaultColor()
	{
		return callMethod<jint>(
			"getDefaultColor",
			"()I"
		);
	}
	jboolean ColorStateList::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean ColorStateList::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	jstring ColorStateList::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::res::ColorStateList ColorStateList::withAlpha(jint arg0)
	{
		return callObjectMethod(
			"withAlpha",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	android::content::res::ColorStateList ColorStateList::withLStar(jfloat arg0)
	{
		return callObjectMethod(
			"withLStar",
			"(F)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	void ColorStateList::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

