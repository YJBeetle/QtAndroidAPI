#pragma once

#include "../../../JDoubleArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JString.hpp"
#include "../../lang/Double.def.hpp"
#include "../../lang/IllegalStateException.def.hpp"
#include "../../lang/Integer.def.hpp"
#include "../../lang/Long.def.hpp"
#include "../../../JObject.hpp"
#include "../../lang/StringBuilder.def.hpp"
#include "../ArrayList.def.hpp"
#include "../DoubleSummaryStatistics.def.hpp"
#include "../HashMap.def.hpp"
#include "../HashSet.def.hpp"
#include "../IntSummaryStatistics.def.hpp"
#include "../LongSummaryStatistics.def.hpp"
#include "../Optional.def.hpp"
#include "../StringJoiner.def.hpp"
#include "./Collectors.def.hpp"

namespace java::util::stream
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Collectors::averagingDouble(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::averagingInt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::averagingLong(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::collectingAndThen(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"collectingAndThen",
			"(Ljava/util/stream/Collector;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::counting()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"counting",
			"()Ljava/util/stream/Collector;"
		);
	}
	inline JObject Collectors::filtering(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"filtering",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::flatMapping(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"flatMapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::groupingBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::groupingBy(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::groupingBy(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::groupingByConcurrent(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::groupingByConcurrent(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::groupingByConcurrent(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::joining()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"()Ljava/util/stream/Collector;"
		);
	}
	inline JObject Collectors::joining(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0.object<jstring>()
		);
	}
	inline JObject Collectors::joining(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JObject Collectors::mapping(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"mapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::maxBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"maxBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::minBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"minBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::partitioningBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::partitioningBy(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::reducing(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::reducing(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject Collectors::reducing(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::summarizingDouble(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::summarizingInt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::summarizingLong(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::summingDouble(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::summingInt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::summingLong(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::teeing(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"teeing",
			"(Ljava/util/stream/Collector;Ljava/util/stream/Collector;Ljava/util/function/BiFunction;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::toCollection(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toCollection",
			"(Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	inline JObject Collectors::toConcurrentMap(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::toConcurrentMap(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::toConcurrentMap(JObject arg0, JObject arg1, JObject arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JObject Collectors::toList()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toList",
			"()Ljava/util/stream/Collector;"
		);
	}
	inline JObject Collectors::toMap(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::toMap(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::toMap(JObject arg0, JObject arg1, JObject arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JObject Collectors::toSet()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toSet",
			"()Ljava/util/stream/Collector;"
		);
	}
	inline JObject Collectors::toUnmodifiableList()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableList",
			"()Ljava/util/stream/Collector;"
		);
	}
	inline JObject Collectors::toUnmodifiableMap(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Collectors::toUnmodifiableMap(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Collectors::toUnmodifiableSet()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableSet",
			"()Ljava/util/stream/Collector;"
		);
	}
} // namespace java::util::stream

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::stream;
#endif
