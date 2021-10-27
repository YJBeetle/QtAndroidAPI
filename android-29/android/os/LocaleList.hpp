#pragma once

#ifndef ANDROID_OS_LOCALELIST
#define ANDROID_OS_LOCALELIST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::os
{
	class LocaleList : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jarray arg0);
		
		// Methods
		static QAndroidJniObject forLanguageTags(jstring arg0);
		static QAndroidJniObject forLanguageTags(const QString &arg0);
		static QAndroidJniObject getAdjustedDefault();
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getEmptyLocaleList();
		static jboolean isPseudoLocale(__jni_impl::android::icu::util::ULocale arg0);
		static void setDefault(__jni_impl::android::os::LocaleList arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject get(jint arg0);
		QAndroidJniObject getFirstMatch(jarray arg0);
		jint hashCode();
		jint indexOf(__jni_impl::java::util::Locale arg0);
		jboolean isEmpty();
		jint size();
		jstring toLanguageTags();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "../icu/util/ULocale.hpp"
#include "Parcel.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::os
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
	
	// Constructors
	void LocaleList::__constructor(jarray arg0)
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
	QAndroidJniObject LocaleList::forLanguageTags(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.LocaleList",
			"forLanguageTags",
			"(Ljava/lang/String;)Landroid/os/LocaleList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean LocaleList::isPseudoLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.LocaleList",
			"isPseudoLocale",
			"(Landroid/icu/util/ULocale;)Z",
			arg0.__jniObject().object()
		);
	}
	void LocaleList::setDefault(__jni_impl::android::os::LocaleList arg0)
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
	jint LocaleList::indexOf(__jni_impl::java::util::Locale arg0)
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
	void LocaleList::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class LocaleList : public __jni_impl::android::os::LocaleList
	{
	public:
		LocaleList(QAndroidJniObject obj) { __thiz = obj; }
		LocaleList(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_LOCALELIST

