#include "../icu/util/ULocale.hpp"
#include "./Parcel.hpp"
#include "../../java/util/Locale.hpp"
#include "./LocaleList.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject LocaleList::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.LocaleList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	LocaleList::LocaleList(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocaleList::LocaleList(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.LocaleList",
			"([Ljava/util/Locale;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject LocaleList::forLanguageTags(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"forLanguageTags",
			"(Ljava/lang/String;)Landroid/os/LocaleList;",
			arg0
		);
	}
	QAndroidJniObject LocaleList::getAdjustedDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"getAdjustedDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	QAndroidJniObject LocaleList::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"getDefault",
			"()Landroid/os/LocaleList;"
		);
	}
	QAndroidJniObject LocaleList::getEmptyLocaleList()
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
			arg0.__jniObject().object()
		);
	}
	void LocaleList::setDefault(android::os::LocaleList arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.LocaleList",
			"setDefault",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	jint LocaleList::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocaleList::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LocaleList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/util/Locale;",
			arg0
		);
	}
	QAndroidJniObject LocaleList::getFirstMatch(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getFirstMatch",
			"([Ljava/lang/String;)Ljava/util/Locale;",
			arg0
		);
	}
	jint LocaleList::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint LocaleList::indexOf(java::util::Locale arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/util/Locale;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean LocaleList::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint LocaleList::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring LocaleList::toLanguageTags()
	{
		return __thiz.callObjectMethod(
			"toLanguageTags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocaleList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocaleList::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

