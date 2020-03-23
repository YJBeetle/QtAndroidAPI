#pragma once

#ifndef ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE
#define ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textservice
{
	class SpellCheckerSubtype : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getLocale();
		QAndroidJniObject getDisplayName(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::content::pm::ApplicationInfo arg2);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getNameResId();
		QAndroidJniObject getLanguageTag();
		QAndroidJniObject getExtraValue();
		jboolean containsExtraValueKey(jstring arg0);
		QAndroidJniObject getExtraValueOf(jstring arg0);
	};
} // namespace __jni_impl::android::view::textservice

#include "../../content/Context.hpp"
#include "../../content/pm/ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textservice
{
	// Fields
	QAndroidJniObject SpellCheckerSubtype::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SpellCheckerSubtype",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void SpellCheckerSubtype::__constructor(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SpellCheckerSubtype",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean SpellCheckerSubtype::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint SpellCheckerSubtype::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject SpellCheckerSubtype::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpellCheckerSubtype::getDisplayName(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::content::pm::ApplicationInfo arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jint SpellCheckerSubtype::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SpellCheckerSubtype::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint SpellCheckerSubtype::getNameResId()
	{
		return __thiz.callMethod<jint>(
			"getNameResId",
			"()I");
	}
	QAndroidJniObject SpellCheckerSubtype::getLanguageTag()
	{
		return __thiz.callObjectMethod(
			"getLanguageTag",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpellCheckerSubtype::getExtraValue()
	{
		return __thiz.callObjectMethod(
			"getExtraValue",
			"()Ljava/lang/String;");
	}
	jboolean SpellCheckerSubtype::containsExtraValueKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsExtraValueKey",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject SpellCheckerSubtype::getExtraValueOf(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExtraValueOf",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class SpellCheckerSubtype : public __jni_impl::android::view::textservice::SpellCheckerSubtype
	{
	public:
		SpellCheckerSubtype(QAndroidJniObject obj) { __thiz = obj; }
		SpellCheckerSubtype(jint arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::textservice

#endif // ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE

