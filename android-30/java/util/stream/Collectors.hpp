#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class Collectors : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Collectors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Collectors(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass averagingDouble(__JniBaseClass arg0);
		static __JniBaseClass averagingInt(__JniBaseClass arg0);
		static __JniBaseClass averagingLong(__JniBaseClass arg0);
		static __JniBaseClass collectingAndThen(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass counting();
		static __JniBaseClass filtering(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass flatMapping(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass groupingBy(__JniBaseClass arg0);
		static __JniBaseClass groupingBy(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass groupingBy(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass groupingByConcurrent(__JniBaseClass arg0);
		static __JniBaseClass groupingByConcurrent(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass groupingByConcurrent(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass joining();
		static __JniBaseClass joining(jstring arg0);
		static __JniBaseClass joining(jstring arg0, jstring arg1, jstring arg2);
		static __JniBaseClass mapping(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass maxBy(__JniBaseClass arg0);
		static __JniBaseClass minBy(__JniBaseClass arg0);
		static __JniBaseClass partitioningBy(__JniBaseClass arg0);
		static __JniBaseClass partitioningBy(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass reducing(__JniBaseClass arg0);
		static __JniBaseClass reducing(jobject arg0, __JniBaseClass arg1);
		static __JniBaseClass reducing(jobject arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass summarizingDouble(__JniBaseClass arg0);
		static __JniBaseClass summarizingInt(__JniBaseClass arg0);
		static __JniBaseClass summarizingLong(__JniBaseClass arg0);
		static __JniBaseClass summingDouble(__JniBaseClass arg0);
		static __JniBaseClass summingInt(__JniBaseClass arg0);
		static __JniBaseClass summingLong(__JniBaseClass arg0);
		static __JniBaseClass teeing(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass toCollection(__JniBaseClass arg0);
		static __JniBaseClass toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		static __JniBaseClass toList();
		static __JniBaseClass toMap(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass toMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass toMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		static __JniBaseClass toSet();
		static __JniBaseClass toUnmodifiableList();
		static __JniBaseClass toUnmodifiableMap(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass toUnmodifiableMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass toUnmodifiableSet();
	};
} // namespace java::util::stream

