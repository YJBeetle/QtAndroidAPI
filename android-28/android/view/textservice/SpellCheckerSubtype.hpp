#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/pm/ApplicationInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerSubtype.def.hpp"

namespace android::view::textservice
{
	// Fields
	inline JObject SpellCheckerSubtype::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SpellCheckerSubtype::SpellCheckerSubtype(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.view.textservice.SpellCheckerSubtype",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jboolean SpellCheckerSubtype::containsExtraValueKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint SpellCheckerSubtype::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SpellCheckerSubtype::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SpellCheckerSubtype::getDisplayName(android::content::Context arg0, JString arg1, android::content::pm::ApplicationInfo arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JString SpellCheckerSubtype::getExtraValue() const
	{
		return callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		);
	}
	inline JString SpellCheckerSubtype::getExtraValueOf(JString arg0) const
	{
		return callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString SpellCheckerSubtype::getLanguageTag() const
	{
		return callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString SpellCheckerSubtype::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	inline jint SpellCheckerSubtype::getNameResId() const
	{
		return callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	inline jint SpellCheckerSubtype::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SpellCheckerSubtype::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textservice;
#endif
