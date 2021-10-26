#pragma once

#ifndef JAVA_UTIL_STREAM_COLLECTOR_CHARACTERISTICS
#define JAVA_UTIL_STREAM_COLLECTOR_CHARACTERISTICS

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::util::stream
{
	class Collector_Characteristics : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONCURRENT();
		static QAndroidJniObject UNORDERED();
		static QAndroidJniObject IDENTITY_FINISH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::java::util::stream


namespace __jni_impl::java::util::stream
{
	// Fields
	QAndroidJniObject Collector_Characteristics::CONCURRENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"CONCURRENT",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	QAndroidJniObject Collector_Characteristics::UNORDERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"UNORDERED",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	QAndroidJniObject Collector_Characteristics::IDENTITY_FINISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"IDENTITY_FINISH",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	
	// Constructors
	void Collector_Characteristics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.stream.Collector$Characteristics",
			"(V)V");
	}
	
	// Methods
	jarray Collector_Characteristics::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"values",
			"()[Ljava/util/stream/Collector$Characteristics;"
		).object<jarray>();
	}
	QAndroidJniObject Collector_Characteristics::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			arg0
		);
	}
	QAndroidJniObject Collector_Characteristics::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::util::stream

namespace java::util::stream
{
	class Collector_Characteristics : public __jni_impl::java::util::stream::Collector_Characteristics
	{
	public:
		Collector_Characteristics(QAndroidJniObject obj) { __thiz = obj; }
		Collector_Characteristics()
		{
			__constructor();
		}
	};
} // namespace java::util::stream

#endif // JAVA_UTIL_STREAM_COLLECTOR_CHARACTERISTICS

