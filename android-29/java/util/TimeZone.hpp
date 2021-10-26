#pragma once

#ifndef JAVA_UTIL_TIMEZONE
#define JAVA_UTIL_TIMEZONE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::util
{
	class TimeZone : public __JniBaseClass
	{
	public:
		// Fields
		static jint SHORT();
		static jint LONG();
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject clone();
		static QAndroidJniObject getDefault();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		QAndroidJniObject toZoneId();
		static void setDefault(__jni_impl::java::util::TimeZone arg0);
		jstring getID();
		jstring getDisplayName(jboolean arg0, jint arg1);
		jstring getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		jstring getDisplayName(__jni_impl::java::util::Locale arg0);
		jstring getDisplayName();
		jint getDSTSavings();
		jboolean hasSameRules(__jni_impl::java::util::TimeZone arg0);
		static QAndroidJniObject getTimeZone(jstring arg0);
		static QAndroidJniObject getTimeZone(const QString &arg0);
		static QAndroidJniObject getTimeZone(__jni_impl::java::time::ZoneId arg0);
		static jarray getAvailableIDs(jint arg0);
		static jarray getAvailableIDs();
		jint getRawOffset();
		jboolean inDaylightTime(__jni_impl::java::util::Date arg0);
		jboolean useDaylightTime();
		void setID(jstring arg0);
		void setID(const QString &arg0);
		void setRawOffset(jint arg0);
		jboolean observesDaylightTime();
	};
} // namespace __jni_impl::java::util

#include "../time/ZoneId.hpp"
#include "Locale.hpp"
#include "Date.hpp"

namespace __jni_impl::java::util
{
	// Fields
	jint TimeZone::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.TimeZone",
			"SHORT"
		);
	}
	jint TimeZone::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.TimeZone",
			"LONG"
		);
	}
	
	// Constructors
	void TimeZone::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TimeZone",
			"()V"
		);
	}
	
	// Methods
	jobject TimeZone::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TimeZone::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getDefault",
			"()Ljava/util/TimeZone;"
		);
	}
	jint TimeZone::getOffset(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
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
			arg5
		);
	}
	QAndroidJniObject TimeZone::toZoneId()
	{
		return __thiz.callObjectMethod(
			"toZoneId",
			"()Ljava/time/ZoneId;"
		);
	}
	void TimeZone::setDefault(__jni_impl::java::util::TimeZone arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.TimeZone",
			"setDefault",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	jstring TimeZone::getID()
	{
		return __thiz.callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TimeZone::getDSTSavings()
	{
		return __thiz.callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	jboolean TimeZone::hasSameRules(__jni_impl::java::util::TimeZone arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasSameRules",
			"(Ljava/util/TimeZone;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZone::getTimeZone(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Ljava/util/TimeZone;",
			arg0
		);
	}
	QAndroidJniObject TimeZone::getTimeZone(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Ljava/util/TimeZone;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeZone::getTimeZone(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/time/ZoneId;)Ljava/util/TimeZone;",
			arg0.__jniObject().object()
		);
	}
	jarray TimeZone::getAvailableIDs(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray TimeZone::getAvailableIDs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint TimeZone::getRawOffset()
	{
		return __thiz.callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	jboolean TimeZone::inDaylightTime(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TimeZone::useDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
	void TimeZone::setID(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TimeZone::setID(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TimeZone::setRawOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	jboolean TimeZone::observesDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class TimeZone : public __jni_impl::java::util::TimeZone
	{
	public:
		TimeZone(QAndroidJniObject obj) { __thiz = obj; }
		TimeZone()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_TIMEZONE

