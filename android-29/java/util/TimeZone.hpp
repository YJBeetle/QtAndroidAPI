#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::util
{
	class TimeZone : public __JniBaseClass
	{
	public:
		// Fields
		static jint LONG();
		static jint SHORT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray getAvailableIDs();
		static jarray getAvailableIDs(jint arg0);
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getTimeZone(jstring arg0);
		static QAndroidJniObject getTimeZone(const QString &arg0);
		static QAndroidJniObject getTimeZone(__jni_impl::java::time::ZoneId arg0);
		static void setDefault(__jni_impl::java::util::TimeZone arg0);
		jobject clone();
		jint getDSTSavings();
		jstring getDisplayName();
		jstring getDisplayName(__jni_impl::java::util::Locale arg0);
		jstring getDisplayName(jboolean arg0, jint arg1);
		jstring getDisplayName(jboolean arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		jstring getID();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint getRawOffset();
		jboolean hasSameRules(__jni_impl::java::util::TimeZone arg0);
		jboolean inDaylightTime(__jni_impl::java::util::Date arg0);
		jboolean observesDaylightTime();
		void setID(jstring arg0);
		void setID(const QString &arg0);
		void setRawOffset(jint arg0);
		QAndroidJniObject toZoneId();
		jboolean useDaylightTime();
	};
} // namespace __jni_impl::java::util

#include "../time/ZoneId.hpp"
#include "Date.hpp"
#include "Locale.hpp"

namespace __jni_impl::java::util
{
	// Fields
	jint TimeZone::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.TimeZone",
			"LONG"
		);
	}
	jint TimeZone::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.TimeZone",
			"SHORT"
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
	jarray TimeZone::getAvailableIDs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		).object<jarray>();
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
	QAndroidJniObject TimeZone::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.TimeZone",
			"getDefault",
			"()Ljava/util/TimeZone;"
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
	void TimeZone::setDefault(__jni_impl::java::util::TimeZone arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.TimeZone",
			"setDefault",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	jobject TimeZone::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint TimeZone::getDSTSavings()
	{
		return __thiz.callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	jstring TimeZone::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
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
	jstring TimeZone::getID()
	{
		return __thiz.callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint TimeZone::getRawOffset()
	{
		return __thiz.callMethod<jint>(
			"getRawOffset",
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
	jboolean TimeZone::inDaylightTime(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TimeZone::observesDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"observesDaylightTime",
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
	QAndroidJniObject TimeZone::toZoneId()
	{
		return __thiz.callObjectMethod(
			"toZoneId",
			"()Ljava/time/ZoneId;"
		);
	}
	jboolean TimeZone::useDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"useDaylightTime",
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

