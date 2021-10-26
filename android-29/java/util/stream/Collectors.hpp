#pragma once

#ifndef JAVA_UTIL_STREAM_COLLECTORS
#define JAVA_UTIL_STREAM_COLLECTORS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class IllegalStateException;
}
namespace __jni_impl::java::util
{
	class DoubleSummaryStatistics;
}
namespace __jni_impl::java::util
{
	class LongSummaryStatistics;
}
namespace __jni_impl::java::util
{
	class IntSummaryStatistics;
}
namespace __jni_impl::java::util
{
	class HashMap;
}
namespace __jni_impl::java::util
{
	class Optional;
}
namespace __jni_impl::java::lang
{
	class Double;
}
namespace __jni_impl::java::lang
{
	class Long;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::java::util
{
	class StringJoiner;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::util::stream
{
	class Collectors : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject joining(jstring arg0);
		static QAndroidJniObject joining(const QString &arg0);
		static QAndroidJniObject joining(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject joining(const QString &arg0, const QString &arg1, const QString &arg2);
		static QAndroidJniObject joining();
		static QAndroidJniObject toList();
		static QAndroidJniObject toMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject toMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject toMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		static QAndroidJniObject toSet();
		static QAndroidJniObject toCollection(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject groupingBy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject groupingBy(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject groupingBy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject maxBy(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject minBy(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject summingLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject reducing(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject reducing(jobject arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject reducing(jobject arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject groupingByConcurrent(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject groupingByConcurrent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject groupingByConcurrent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject partitioningBy(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject partitioningBy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject collectingAndThen(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject toConcurrentMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject toConcurrentMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject toConcurrentMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		static QAndroidJniObject toUnmodifiableList();
		static QAndroidJniObject toUnmodifiableSet();
		static QAndroidJniObject mapping(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject flatMapping(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject filtering(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject counting();
		static QAndroidJniObject summingInt(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject summingDouble(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject averagingInt(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject averagingLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject averagingDouble(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject toUnmodifiableMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject toUnmodifiableMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject summarizingInt(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject summarizingLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject summarizingDouble(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject teeing(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::java::util::stream

#include "../../lang/IllegalStateException.hpp"
#include "../DoubleSummaryStatistics.hpp"
#include "../LongSummaryStatistics.hpp"
#include "../IntSummaryStatistics.hpp"
#include "../HashMap.hpp"
#include "../Optional.hpp"
#include "../../lang/Double.hpp"
#include "../../lang/Long.hpp"
#include "../../lang/Integer.hpp"
#include "../StringJoiner.hpp"
#include "../../lang/StringBuilder.hpp"

namespace __jni_impl::java::util::stream
{
	// Fields
	
	// Constructors
	void Collectors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.stream.Collectors",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Collectors::joining(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0
		);
	}
	QAndroidJniObject Collectors::joining(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Collectors::joining(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Collectors::joining(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject Collectors::joining()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"()Ljava/util/stream/Collector;"
		);
	}
	QAndroidJniObject Collectors::toList()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toList",
			"()Ljava/util/stream/Collector;"
		);
	}
	QAndroidJniObject Collectors::toMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toSet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toSet",
			"()Ljava/util/stream/Collector;"
		);
	}
	QAndroidJniObject Collectors::toCollection(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toCollection",
			"(Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::groupingBy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::groupingBy(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::groupingBy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::maxBy(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"maxBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::minBy(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"minBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::summingLong(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::reducing(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::reducing(jobject arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::reducing(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::groupingByConcurrent(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::groupingByConcurrent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::groupingByConcurrent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::partitioningBy(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::partitioningBy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::collectingAndThen(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"collectingAndThen",
			"(Ljava/util/stream/Collector;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toConcurrentMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toConcurrentMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toConcurrentMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toUnmodifiableList()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableList",
			"()Ljava/util/stream/Collector;"
		);
	}
	QAndroidJniObject Collectors::toUnmodifiableSet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableSet",
			"()Ljava/util/stream/Collector;"
		);
	}
	QAndroidJniObject Collectors::mapping(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"mapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::flatMapping(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"flatMapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::filtering(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"filtering",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::counting()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"counting",
			"()Ljava/util/stream/Collector;"
		);
	}
	QAndroidJniObject Collectors::summingInt(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::summingDouble(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::averagingInt(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::averagingLong(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::averagingDouble(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toUnmodifiableMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::toUnmodifiableMap(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::summarizingInt(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::summarizingLong(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::summarizingDouble(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collectors::teeing(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collectors",
			"teeing",
			"(Ljava/util/stream/Collector;Ljava/util/stream/Collector;Ljava/util/function/BiFunction;)Ljava/util/stream/Collector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::stream

namespace java::util::stream
{
	class Collectors : public __jni_impl::java::util::stream::Collectors
	{
	public:
		Collectors(QAndroidJniObject obj) { __thiz = obj; }
		Collectors()
		{
			__constructor();
		}
	};
} // namespace java::util::stream

#endif // JAVA_UTIL_STREAM_COLLECTORS

