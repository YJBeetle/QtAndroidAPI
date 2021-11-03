#include "../../lang/Double.hpp"
#include "../../lang/IllegalStateException.hpp"
#include "../../lang/Integer.hpp"
#include "../../lang/Long.hpp"
#include "../../lang/StringBuilder.hpp"
#include "../ArrayList.hpp"
#include "../DoubleSummaryStatistics.hpp"
#include "../HashMap.hpp"
#include "../HashSet.hpp"
#include "../IntSummaryStatistics.hpp"
#include "../LongSummaryStatistics.hpp"
#include "../Optional.hpp"
#include "../StringJoiner.hpp"
#include "./Collectors.hpp"

namespace java::util::stream
{
	// Fields
	
	// QJniObject forward
	Collectors::Collectors(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Collectors::averagingDouble(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::averagingInt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::averagingLong(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::collectingAndThen(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"collectingAndThen",
			"(Ljava/util/stream/Collector;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::counting()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"counting",
			"()Ljava/util/stream/Collector;"
		);
	}
	JObject Collectors::filtering(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"filtering",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::flatMapping(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"flatMapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::groupingBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::groupingBy(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::groupingBy(JObject arg0, JObject arg1, JObject arg2)
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
	JObject Collectors::groupingByConcurrent(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::groupingByConcurrent(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::groupingByConcurrent(JObject arg0, JObject arg1, JObject arg2)
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
	JObject Collectors::joining()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"()Ljava/util/stream/Collector;"
		);
	}
	JObject Collectors::joining(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0
		);
	}
	JObject Collectors::joining(jstring arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject Collectors::mapping(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"mapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::maxBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"maxBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::minBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"minBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::partitioningBy(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::partitioningBy(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::reducing(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::reducing(jobject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0,
			arg1.object()
		);
	}
	JObject Collectors::reducing(jobject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject Collectors::summarizingDouble(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::summarizingInt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::summarizingLong(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::summingDouble(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::summingInt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::summingLong(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::teeing(JObject arg0, JObject arg1, JObject arg2)
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
	JObject Collectors::toCollection(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toCollection",
			"(Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	JObject Collectors::toConcurrentMap(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::toConcurrentMap(JObject arg0, JObject arg1, JObject arg2)
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
	JObject Collectors::toConcurrentMap(JObject arg0, JObject arg1, JObject arg2, JObject arg3)
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
	JObject Collectors::toList()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toList",
			"()Ljava/util/stream/Collector;"
		);
	}
	JObject Collectors::toMap(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::toMap(JObject arg0, JObject arg1, JObject arg2)
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
	JObject Collectors::toMap(JObject arg0, JObject arg1, JObject arg2, JObject arg3)
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
	JObject Collectors::toSet()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toSet",
			"()Ljava/util/stream/Collector;"
		);
	}
	JObject Collectors::toUnmodifiableList()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableList",
			"()Ljava/util/stream/Collector;"
		);
	}
	JObject Collectors::toUnmodifiableMap(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collectors::toUnmodifiableMap(JObject arg0, JObject arg1, JObject arg2)
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
	JObject Collectors::toUnmodifiableSet()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableSet",
			"()Ljava/util/stream/Collector;"
		);
	}
} // namespace java::util::stream

