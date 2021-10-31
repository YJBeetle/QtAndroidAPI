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
		
		Collectors(QAndroidJniObject obj);
		// Constructors
		Collectors() = default;
		
		// Methods
		static QAndroidJniObject averagingDouble(__JniBaseClass arg0);
		static QAndroidJniObject averagingInt(__JniBaseClass arg0);
		static QAndroidJniObject averagingLong(__JniBaseClass arg0);
		static QAndroidJniObject collectingAndThen(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject counting();
		static QAndroidJniObject filtering(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject flatMapping(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject groupingBy(__JniBaseClass arg0);
		static QAndroidJniObject groupingBy(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject groupingBy(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject groupingByConcurrent(__JniBaseClass arg0);
		static QAndroidJniObject groupingByConcurrent(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject groupingByConcurrent(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject joining();
		static QAndroidJniObject joining(jstring arg0);
		static QAndroidJniObject joining(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject mapping(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject maxBy(__JniBaseClass arg0);
		static QAndroidJniObject minBy(__JniBaseClass arg0);
		static QAndroidJniObject partitioningBy(__JniBaseClass arg0);
		static QAndroidJniObject partitioningBy(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject reducing(__JniBaseClass arg0);
		static QAndroidJniObject reducing(jobject arg0, __JniBaseClass arg1);
		static QAndroidJniObject reducing(jobject arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject summarizingDouble(__JniBaseClass arg0);
		static QAndroidJniObject summarizingInt(__JniBaseClass arg0);
		static QAndroidJniObject summarizingLong(__JniBaseClass arg0);
		static QAndroidJniObject summingDouble(__JniBaseClass arg0);
		static QAndroidJniObject summingInt(__JniBaseClass arg0);
		static QAndroidJniObject summingLong(__JniBaseClass arg0);
		static QAndroidJniObject teeing(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject toCollection(__JniBaseClass arg0);
		static QAndroidJniObject toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		static QAndroidJniObject toList();
		static QAndroidJniObject toMap(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject toMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject toMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		static QAndroidJniObject toSet();
		static QAndroidJniObject toUnmodifiableList();
		static QAndroidJniObject toUnmodifiableMap(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject toUnmodifiableMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject toUnmodifiableSet();
	};
} // namespace java::util::stream

