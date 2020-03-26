#pragma once

#ifndef JAVA_TIME_ZONEID
#define JAVA_TIME_ZONEID

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::zone
{
	class ZoneRules;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::time::format
{
	class TextStyle;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time
{
	class ZoneId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject SHORT_IDS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		static QAndroidJniObject of(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject of(jstring arg0);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jstring getId();
		static QAndroidJniObject systemDefault();
		QAndroidJniObject getRules();
		static QAndroidJniObject getAvailableZoneIds();
		static QAndroidJniObject ofOffset(jstring arg0, __jni_impl::java::time::ZoneOffset arg1);
		QAndroidJniObject normalized();
		jstring getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "zone/ZoneRules.hpp"
#include "ZoneOffset.hpp"
#include "format/TextStyle.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject ZoneId::SHORT_IDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneId",
			"SHORT_IDS",
			"Ljava/util/Map;"
		);
	}
	
	// Constructors
	void ZoneId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.ZoneId",
			"(V)V");
	}
	
	// Methods
	jboolean ZoneId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZoneId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZoneId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ZoneId::of(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/time/ZoneId;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneId::of(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneId;",
			arg0
		);
	}
	QAndroidJniObject ZoneId::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;",
			arg0.__jniObject().object()
		);
	}
	jstring ZoneId::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ZoneId::systemDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"systemDefault",
			"()Ljava/time/ZoneId;"
		);
	}
	QAndroidJniObject ZoneId::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	QAndroidJniObject ZoneId::getAvailableZoneIds()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"getAvailableZoneIds",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject ZoneId::ofOffset(jstring arg0, __jni_impl::java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"ofOffset",
			"(Ljava/lang/String;Ljava/time/ZoneOffset;)Ljava/time/ZoneId;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZoneId::normalized()
	{
		return __thiz.callObjectMethod(
			"normalized",
			"()Ljava/time/ZoneId;"
		);
	}
	jstring ZoneId::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class ZoneId : public __jni_impl::java::time::ZoneId
	{
	public:
		ZoneId(QAndroidJniObject obj) { __thiz = obj; }
		ZoneId()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_ZONEID

