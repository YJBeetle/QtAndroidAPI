#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../icu/util/ULocale.def.hpp"
#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./LocaleList.def.hpp"

namespace android::os
{
	// Fields
	inline JObject LocaleList::CREATOR()
	{
		return getStaticObjectField(
			"android.os.LocaleList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline LocaleList::LocaleList(JArray arg0)
		: JObject(
			"android.os.LocaleList",
			"([Ljava/util/Locale;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline android::os::LocaleList LocaleList::forLanguageTags(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"forLanguageTags",
			"(Ljava/lang/String;)Landroid/os/LocaleList;",
			arg0.object<jstring>()
		);
	}
	inline android::os::LocaleList LocaleList::getAdjustedDefault()
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"getAdjustedDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	inline android::os::LocaleList LocaleList::getDefault()
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"getDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	inline android::os::LocaleList LocaleList::getEmptyLocaleList()
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"getEmptyLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jboolean LocaleList::isPseudoLocale(android::icu::util::ULocale arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.LocaleList",
			"isPseudoLocale",
			"(Landroid/icu/util/ULocale;)Z",
			arg0.object()
		);
	}
	inline jboolean LocaleList::matchesLanguageAndScript(java::util::Locale arg0, java::util::Locale arg1)
	{
		return callStaticMethod<jboolean>(
			"android.os.LocaleList",
			"matchesLanguageAndScript",
			"(Ljava/util/Locale;Ljava/util/Locale;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LocaleList::setDefault(android::os::LocaleList arg0)
	{
		callStaticMethod<void>(
			"android.os.LocaleList",
			"setDefault",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	inline jint LocaleList::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean LocaleList::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::util::Locale LocaleList::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/util/Locale;",
			arg0
		);
	}
	inline java::util::Locale LocaleList::getFirstMatch(JArray arg0) const
	{
		return callObjectMethod(
			"getFirstMatch",
			"([Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jarray>()
		);
	}
	inline jint LocaleList::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint LocaleList::indexOf(java::util::Locale arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	inline jboolean LocaleList::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jint LocaleList::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString LocaleList::toLanguageTags() const
	{
		return callObjectMethod(
			"toLanguageTags",
			"()Ljava/lang/String;"
		);
	}
	inline JString LocaleList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LocaleList::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
