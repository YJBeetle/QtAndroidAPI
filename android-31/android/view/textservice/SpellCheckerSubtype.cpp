#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerSubtype.hpp"

namespace android::view::textservice
{
	// Fields
	JObject SpellCheckerSubtype::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SpellCheckerSubtype::SpellCheckerSubtype(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpellCheckerSubtype::SpellCheckerSubtype(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.view.textservice.SpellCheckerSubtype",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	jboolean SpellCheckerSubtype::containsExtraValueKey(JString arg0)
	{
		return callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint SpellCheckerSubtype::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SpellCheckerSubtype::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString SpellCheckerSubtype::getDisplayName(android::content::Context arg0, JString arg1, android::content::pm::ApplicationInfo arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JString SpellCheckerSubtype::getExtraValue()
	{
		return callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		);
	}
	JString SpellCheckerSubtype::getExtraValueOf(JString arg0)
	{
		return callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString SpellCheckerSubtype::getLanguageTag()
	{
		return callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	JString SpellCheckerSubtype::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	jint SpellCheckerSubtype::getNameResId()
	{
		return callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	jint SpellCheckerSubtype::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SpellCheckerSubtype::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

