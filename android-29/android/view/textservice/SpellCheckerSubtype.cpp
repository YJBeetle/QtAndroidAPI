#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
#include "./SpellCheckerSubtype.hpp"

namespace android::view::textservice
{
	// Fields
	QAndroidJniObject SpellCheckerSubtype::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SpellCheckerSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SpellCheckerSubtype::SpellCheckerSubtype(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SpellCheckerSubtype::SpellCheckerSubtype(jint &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SpellCheckerSubtype",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SpellCheckerSubtype::SpellCheckerSubtype(jint &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SpellCheckerSubtype",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jboolean SpellCheckerSubtype::containsExtraValueKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SpellCheckerSubtype::containsExtraValueKey(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint SpellCheckerSubtype::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SpellCheckerSubtype::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SpellCheckerSubtype::getDisplayName(android::content::Context arg0, jstring arg1, android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring SpellCheckerSubtype::getDisplayName(android::content::Context arg0, const QString &arg1, android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring SpellCheckerSubtype::getExtraValue()
	{
		return __thiz.callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SpellCheckerSubtype::getExtraValueOf(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring SpellCheckerSubtype::getExtraValueOf(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring SpellCheckerSubtype::getLanguageTag()
	{
		return __thiz.callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SpellCheckerSubtype::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SpellCheckerSubtype::getNameResId()
	{
		return __thiz.callMethod<jint>(
			"getNameResId",
			"()I"
		);
	}
	jint SpellCheckerSubtype::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SpellCheckerSubtype::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textservice

