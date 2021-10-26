#pragma once

#ifndef ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_UILISTITEM
#define ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_UILISTITEM

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}

namespace __jni_impl::android::icu::text
{
	class LocaleDisplayNames_UiListItem : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject minimized();
		QAndroidJniObject modified();
		jstring nameInDisplayLocale();
		jstring nameInSelf();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1, jstring arg2, jstring arg3);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1, const QString &arg2, const QString &arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		static QAndroidJniObject getComparator(__jni_impl::__JniBaseClass arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject LocaleDisplayNames_UiListItem::minimized()
	{
		return __thiz.getObjectField(
			"minimized",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject LocaleDisplayNames_UiListItem::modified()
	{
		return __thiz.getObjectField(
			"modified",
			"Landroid/icu/util/ULocale;"
		);
	}
	jstring LocaleDisplayNames_UiListItem::nameInDisplayLocale()
	{
		return __thiz.getObjectField(
			"nameInDisplayLocale",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocaleDisplayNames_UiListItem::nameInSelf()
	{
		return __thiz.getObjectField(
			"nameInSelf",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void LocaleDisplayNames_UiListItem::__constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void LocaleDisplayNames_UiListItem::__constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
	jboolean LocaleDisplayNames_UiListItem::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocaleDisplayNames_UiListItem::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocaleDisplayNames_UiListItem::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject LocaleDisplayNames_UiListItem::getComparator(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"getComparator",
			"(Ljava/util/Comparator;Z)Ljava/util/Comparator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class LocaleDisplayNames_UiListItem : public __jni_impl::android::icu::text::LocaleDisplayNames_UiListItem
	{
	public:
		LocaleDisplayNames_UiListItem(QAndroidJniObject obj) { __thiz = obj; }
		LocaleDisplayNames_UiListItem(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_UILISTITEM

