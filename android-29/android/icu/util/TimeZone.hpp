#pragma once

#ifndef ANDROID_ICU_UTIL_TIMEZONE
#define ANDROID_ICU_UTIL_TIMEZONE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class TimeZone_SystemTimeZoneType;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::icu::util
{
	class TimeZone : public __JniBaseClass
	{
	public:
		// Fields
		static jint GENERIC_LOCATION();
		static QAndroidJniObject GMT_ZONE();
		static jint LONG();
		static jint LONG_GENERIC();
		static jint LONG_GMT();
		static jint SHORT();
		static jint SHORT_COMMONLY_USED();
		static jint SHORT_GENERIC();
		static jint SHORT_GMT();
		static jint TIMEZONE_ICU();
		static jint TIMEZONE_JDK();
		static QAndroidJniObject UNKNOWN_ZONE();
		static QAndroidJniObject UNKNOWN_ZONE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		static QAndroidJniObject getDefault();
		jboolean isFrozen();
		QAndroidJniObject freeze();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void getOffset(jlong arg0, jboolean arg1, jintArray arg2);
		static QAndroidJniObject getRegion(jstring arg0);
		QAndroidJniObject getID();
		QAndroidJniObject getDisplayName();
		QAndroidJniObject getDisplayName(jboolean arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2);
		QAndroidJniObject getDisplayName(jboolean arg0, jint arg1);
		QAndroidJniObject getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		QAndroidJniObject getDisplayName(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getDisplayName(__jni_impl::java::util::Locale arg0);
		jint getDSTSavings();
		jboolean hasSameRules(__jni_impl::android::icu::util::TimeZone arg0);
		static QAndroidJniObject getTimeZone(jstring arg0);
		static QAndroidJniObject getTimeZone(jstring arg0, jint arg1);
		static QAndroidJniObject getAvailableIDs(jint arg0);
		static QAndroidJniObject getAvailableIDs(jstring arg0);
		static QAndroidJniObject getAvailableIDs();
		static QAndroidJniObject getAvailableIDs(__jni_impl::android::icu::util::TimeZone_SystemTimeZoneType arg0, jstring arg1, __jni_impl::java::lang::Integer arg2);
		jint getRawOffset();
		jboolean inDaylightTime(__jni_impl::java::util::Date arg0);
		jboolean useDaylightTime();
		void setID(jstring arg0);
		void setRawOffset(jint arg0);
		jboolean observesDaylightTime();
		static QAndroidJniObject getFrozenTimeZone(jstring arg0);
		static jint countEquivalentIDs(jstring arg0);
		static QAndroidJniObject getEquivalentID(jstring arg0, jint arg1);
		static QAndroidJniObject getTZDataVersion();
		static QAndroidJniObject getCanonicalID(jstring arg0, jbooleanArray arg1);
		static QAndroidJniObject getCanonicalID(jstring arg0);
		static QAndroidJniObject getWindowsID(jstring arg0);
		static QAndroidJniObject getIDForWindowsID(jstring arg0, jstring arg1);
		QAndroidJniObject cloneAsThawed();
	};
} // namespace __jni_impl::android::icu::util

#include "ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "TimeZone_SystemTimeZoneType.hpp"
#include "../../../java/lang/Integer.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint TimeZone::GENERIC_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"GENERIC_LOCATION");
	}
	QAndroidJniObject TimeZone::GMT_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone",
			"GMT_ZONE",
			"Landroid/icu/util/TimeZone;");
	}
	jint TimeZone::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG");
	}
	jint TimeZone::LONG_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GENERIC");
	}
	jint TimeZone::LONG_GMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GMT");
	}
	jint TimeZone::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT");
	}
	jint TimeZone::SHORT_COMMONLY_USED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_COMMONLY_USED");
	}
	jint TimeZone::SHORT_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GENERIC");
	}
	jint TimeZone::SHORT_GMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GMT");
	}
	jint TimeZone::TIMEZONE_ICU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_ICU");
	}
	jint TimeZone::TIMEZONE_JDK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_JDK");
	}
	QAndroidJniObject TimeZone::UNKNOWN_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE",
			"Landroid/icu/util/TimeZone;");
	}
	QAndroidJniObject TimeZone::UNKNOWN_ZONE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TimeZone::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TimeZone",
			"()V");
	}
	
	// Methods
	jboolean TimeZone::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint TimeZone::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject TimeZone::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TimeZone::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getDefault",
			"()Landroid/icu/util/TimeZone;");
	}
	jboolean TimeZone::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z");
	}
	QAndroidJniObject TimeZone::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/util/TimeZone;");
	}
	jint TimeZone::getOffset(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0);
	}
	jint TimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(IIIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void TimeZone::getOffset(jlong arg0, jboolean arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"getOffset",
			"(JZ[I)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject TimeZone::getRegion(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getRegion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TimeZone::getID()
	{
		return __thiz.callObjectMethod(
			"getID",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TimeZone::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TimeZone::getDisplayName(jboolean arg0, jint arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZILandroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject TimeZone::getDisplayName(jboolean arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject TimeZone::getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject TimeZone::getDisplayName(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TimeZone::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	jint TimeZone::getDSTSavings()
	{
		return __thiz.callMethod<jint>(
			"getDSTSavings",
			"()I");
	}
	jboolean TimeZone::hasSameRules(__jni_impl::android::icu::util::TimeZone arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasSameRules",
			"(Landroid/icu/util/TimeZone;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TimeZone::getTimeZone(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0);
	}
	QAndroidJniObject TimeZone::getTimeZone(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;I)Landroid/icu/util/TimeZone;",
			arg0,
			arg1);
	}
	QAndroidJniObject TimeZone::getAvailableIDs(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TimeZone::getAvailableIDs(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TimeZone::getAvailableIDs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject TimeZone::getAvailableIDs(__jni_impl::android::icu::util::TimeZone_SystemTimeZoneType arg0, jstring arg1, __jni_impl::java::lang::Integer arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jint TimeZone::getRawOffset()
	{
		return __thiz.callMethod<jint>(
			"getRawOffset",
			"()I");
	}
	jboolean TimeZone::inDaylightTime(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object());
	}
	jboolean TimeZone::useDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"useDaylightTime",
			"()Z");
	}
	void TimeZone::setID(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TimeZone::setRawOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0);
	}
	jboolean TimeZone::observesDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"observesDaylightTime",
			"()Z");
	}
	QAndroidJniObject TimeZone::getFrozenTimeZone(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getFrozenTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0);
	}
	jint TimeZone::countEquivalentIDs(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.util.TimeZone",
			"countEquivalentIDs",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject TimeZone::getEquivalentID(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getEquivalentID",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject TimeZone::getTZDataVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTZDataVersion",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TimeZone::getCanonicalID(jstring arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;[Z)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject TimeZone::getCanonicalID(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TimeZone::getWindowsID(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getWindowsID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TimeZone::getIDForWindowsID(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getIDForWindowsID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject TimeZone::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/util/TimeZone;");
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class TimeZone : public __jni_impl::android::icu::util::TimeZone
	{
	public:
		TimeZone(QAndroidJniObject obj) { __thiz = obj; }
		TimeZone()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_TIMEZONE

