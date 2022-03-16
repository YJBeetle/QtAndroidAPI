#pragma once

#include "../../../JObject.hpp"

class JDoubleArray;
class JIntArray;
class JLongArray;
class JObjectArray;
class JString;
namespace java::lang
{
	class Double;
}
namespace java::lang
{
	class IllegalStateException;
}
namespace java::lang
{
	class Integer;
}
namespace java::lang
{
	class Long;
}
class JObject;
namespace java::lang
{
	class StringBuilder;
}
namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class DoubleSummaryStatistics;
}
namespace java::util
{
	class HashMap;
}
namespace java::util
{
	class HashSet;
}
namespace java::util
{
	class IntSummaryStatistics;
}
namespace java::util
{
	class LongSummaryStatistics;
}
namespace java::util
{
	class Optional;
}
namespace java::util
{
	class StringJoiner;
}

namespace java::util::stream
{
	class Collectors : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Collectors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Collectors(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject averagingDouble(JObject arg0);
		static JObject averagingInt(JObject arg0);
		static JObject averagingLong(JObject arg0);
		static JObject collectingAndThen(JObject arg0, JObject arg1);
		static JObject counting();
		static JObject filtering(JObject arg0, JObject arg1);
		static JObject flatMapping(JObject arg0, JObject arg1);
		static JObject groupingBy(JObject arg0);
		static JObject groupingBy(JObject arg0, JObject arg1);
		static JObject groupingBy(JObject arg0, JObject arg1, JObject arg2);
		static JObject groupingByConcurrent(JObject arg0);
		static JObject groupingByConcurrent(JObject arg0, JObject arg1);
		static JObject groupingByConcurrent(JObject arg0, JObject arg1, JObject arg2);
		static JObject joining();
		static JObject joining(JString arg0);
		static JObject joining(JString arg0, JString arg1, JString arg2);
		static JObject mapping(JObject arg0, JObject arg1);
		static JObject maxBy(JObject arg0);
		static JObject minBy(JObject arg0);
		static JObject partitioningBy(JObject arg0);
		static JObject partitioningBy(JObject arg0, JObject arg1);
		static JObject reducing(JObject arg0);
		static JObject reducing(JObject arg0, JObject arg1);
		static JObject reducing(JObject arg0, JObject arg1, JObject arg2);
		static JObject summarizingDouble(JObject arg0);
		static JObject summarizingInt(JObject arg0);
		static JObject summarizingLong(JObject arg0);
		static JObject summingDouble(JObject arg0);
		static JObject summingInt(JObject arg0);
		static JObject summingLong(JObject arg0);
		static JObject teeing(JObject arg0, JObject arg1, JObject arg2);
		static JObject toCollection(JObject arg0);
		static JObject toConcurrentMap(JObject arg0, JObject arg1);
		static JObject toConcurrentMap(JObject arg0, JObject arg1, JObject arg2);
		static JObject toConcurrentMap(JObject arg0, JObject arg1, JObject arg2, JObject arg3);
		static JObject toList();
		static JObject toMap(JObject arg0, JObject arg1);
		static JObject toMap(JObject arg0, JObject arg1, JObject arg2);
		static JObject toMap(JObject arg0, JObject arg1, JObject arg2, JObject arg3);
		static JObject toSet();
		static JObject toUnmodifiableList();
		static JObject toUnmodifiableMap(JObject arg0, JObject arg1);
		static JObject toUnmodifiableMap(JObject arg0, JObject arg1, JObject arg2);
		static JObject toUnmodifiableSet();
	};
} // namespace java::util::stream

