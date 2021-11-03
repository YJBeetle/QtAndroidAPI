#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./Resources.hpp"
#include "./Resources_Theme.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	ColorStateList::ColorStateList(JArray arg0, JIntArray arg1)
		: JObject(
			"android.content.res.ColorStateList",
			"([[I[I)V",
			arg0.object<jarray>(),
			arg1.object<jintArray>()
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
	jint ColorStateList::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ColorStateList::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint ColorStateList::getColorForState(JIntArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getColorForState",
			"([II)I",
			arg0.object<jintArray>(),
			arg1
		);
	}
	jint ColorStateList::getDefaultColor() const
	{
		return callMethod<jint>(
			"getDefaultColor",
			"()I"
		);
	}
	jboolean ColorStateList::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean ColorStateList::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	JString ColorStateList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	android::content::res::ColorStateList ColorStateList::withAlpha(jint arg0) const
	{
		return callObjectMethod(
			"withAlpha",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	void ColorStateList::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

