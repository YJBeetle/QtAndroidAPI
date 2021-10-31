#include "../icu/util/ULocale.hpp"
#include "./Parcel.hpp"
#include "../../java/util/Locale.hpp"
#include "./LocaleList.hpp"

namespace android::os
{
	// Fields
	__JniBaseClass LocaleList::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.LocaleList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	LocaleList::LocaleList(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LocaleList::LocaleList(jarray arg0)
		: __JniBaseClass(
			"android.os.LocaleList",
			"([Ljava/util/Locale;)V",
			arg0
		) {}
	
	// Methods
	android::os::LocaleList LocaleList::forLanguageTags(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"forLanguageTags",
			"(Ljava/lang/String;)Landroid/os/LocaleList;",
			arg0
		);
	}
	android::os::LocaleList LocaleList::getAdjustedDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"getAdjustedDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	android::os::LocaleList LocaleList::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"getDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	android::os::LocaleList LocaleList::getEmptyLocaleList()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"getEmptyLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	jboolean LocaleList::isPseudoLocale(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.LocaleList",
			"isPseudoLocale",
			"(Landroid/icu/util/ULocale;)Z",
			arg0.object()
		);
	}
	void LocaleList::setDefault(android::os::LocaleList arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.LocaleList",
			"setDefault",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	jint LocaleList::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocaleList::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::util::Locale LocaleList::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/util/Locale;",
			arg0
		);
	}
	java::util::Locale LocaleList::getFirstMatch(jarray arg0)
	{
		return callObjectMethod(
			"getFirstMatch",
			"([Ljava/lang/String;)Ljava/util/Locale;",
			arg0
		);
	}
	jint LocaleList::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint LocaleList::indexOf(java::util::Locale arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	jboolean LocaleList::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint LocaleList::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring LocaleList::toLanguageTags()
	{
		return callObjectMethod(
			"toLanguageTags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocaleList::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocaleList::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

