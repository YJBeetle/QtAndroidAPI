#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../icu/util/ULocale.hpp"
#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.hpp"
#include "./LocaleList.hpp"

namespace android::os
{
	// Fields
	JObject LocaleList::CREATOR()
	{
		return getStaticObjectField(
			"android.os.LocaleList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	LocaleList::LocaleList(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocaleList::LocaleList(JArray arg0)
		: JObject(
			"android.os.LocaleList",
			"([Ljava/util/Locale;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	android::os::LocaleList LocaleList::forLanguageTags(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"forLanguageTags",
			"(Ljava/lang/String;)Landroid/os/LocaleList;",
			arg0.object<jstring>()
		);
	}
	android::os::LocaleList LocaleList::getAdjustedDefault()
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"getAdjustedDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	android::os::LocaleList LocaleList::getDefault()
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"getDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	android::os::LocaleList LocaleList::getEmptyLocaleList()
	{
		return callStaticObjectMethod(
			"android.os.LocaleList",
			"getEmptyLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	jboolean LocaleList::isPseudoLocale(android::icu::util::ULocale arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.LocaleList",
			"isPseudoLocale",
			"(Landroid/icu/util/ULocale;)Z",
			arg0.object()
		);
	}
	void LocaleList::setDefault(android::os::LocaleList arg0)
	{
		callStaticMethod<void>(
			"android.os.LocaleList",
			"setDefault",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	jint LocaleList::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocaleList::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::Locale LocaleList::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/util/Locale;",
			arg0
		);
	}
	java::util::Locale LocaleList::getFirstMatch(JArray arg0) const
	{
		return callObjectMethod(
			"getFirstMatch",
			"([Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jarray>()
		);
	}
	jint LocaleList::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint LocaleList::indexOf(java::util::Locale arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	jboolean LocaleList::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint LocaleList::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString LocaleList::toLanguageTags() const
	{
		return callObjectMethod(
			"toLanguageTags",
			"()Ljava/lang/String;"
		);
	}
	JString LocaleList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LocaleList::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

