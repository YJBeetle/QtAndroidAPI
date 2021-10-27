#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONENAMES
#define ANDROID_ICU_TEXT_TIMEZONENAMES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class TimeZoneNames_NameType;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::text
{
	class TimeZoneNames : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getTZDBInstance(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getAvailableMetaZoneIDs();
		QAndroidJniObject getAvailableMetaZoneIDs(jstring arg0);
		QAndroidJniObject getAvailableMetaZoneIDs(const QString &arg0);
		jstring getDisplayName(jstring arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1, jlong arg2);
		jstring getDisplayName(const QString &arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1, jlong arg2);
		jstring getExemplarLocationName(jstring arg0);
		jstring getExemplarLocationName(const QString &arg0);
		jstring getMetaZoneDisplayName(jstring arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1);
		jstring getMetaZoneDisplayName(const QString &arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1);
		jstring getMetaZoneID(jstring arg0, jlong arg1);
		jstring getMetaZoneID(const QString &arg0, jlong arg1);
		jstring getReferenceZoneID(jstring arg0, jstring arg1);
		jstring getReferenceZoneID(const QString &arg0, const QString &arg1);
		jstring getTimeZoneDisplayName(jstring arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1);
		jstring getTimeZoneDisplayName(const QString &arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "TimeZoneNames_NameType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void TimeZoneNames::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneNames",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TimeZoneNames::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneNames::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneNames;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneNames::getTZDBInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getTZDBInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneNames::getAvailableMetaZoneIDs()
	{
		return __thiz.callObjectMethod(
			"getAvailableMetaZoneIDs",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject TimeZoneNames::getAvailableMetaZoneIDs(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAvailableMetaZoneIDs",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneNames::getAvailableMetaZoneIDs(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAvailableMetaZoneIDs",
			"(Ljava/lang/String;)Ljava/util/Set;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TimeZoneNames::getDisplayName(jstring arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneNames::getDisplayName(const QString &arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneNames::getExemplarLocationName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExemplarLocationName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZoneNames::getExemplarLocationName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExemplarLocationName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneDisplayName(jstring arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1)
	{
		return __thiz.callObjectMethod(
			"getMetaZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneDisplayName(const QString &arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1)
	{
		return __thiz.callObjectMethod(
			"getMetaZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneID(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"getMetaZoneID",
			"(Ljava/lang/String;J)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneID(const QString &arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"getMetaZoneID",
			"(Ljava/lang/String;J)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getReferenceZoneID(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getReferenceZoneID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getReferenceZoneID(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getReferenceZoneID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring TimeZoneNames::getTimeZoneDisplayName(jstring arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1)
	{
		return __thiz.callObjectMethod(
			"getTimeZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZoneNames::getTimeZoneDisplayName(const QString &arg0, __jni_impl::android::icu::text::TimeZoneNames_NameType arg1)
	{
		return __thiz.callObjectMethod(
			"getTimeZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneNames : public __jni_impl::android::icu::text::TimeZoneNames
	{
	public:
		TimeZoneNames(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneNames()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONENAMES

