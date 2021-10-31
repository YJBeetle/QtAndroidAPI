#include "./Spliterators.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Spliterators::Spliterators(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Spliterators::emptyDoubleSpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyDoubleSpliterator",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
	QAndroidJniObject Spliterators::emptyIntSpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyIntSpliterator",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
	QAndroidJniObject Spliterators::emptyLongSpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyLongSpliterator",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
	QAndroidJniObject Spliterators::emptySpliterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"emptySpliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject Spliterators::iterator(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"iterator",
			"(Ljava/util/Spliterator;)Ljava/util/Iterator;",
			arg0.object()
		);
	}
	QAndroidJniObject Spliterators::spliterator(jobjectArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;I)Ljava/util/Spliterator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Collection;I)Ljava/util/Spliterator;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(__JniBaseClass arg0, jlong arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Iterator;JI)Ljava/util/Spliterator;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Spliterators::spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;III)Ljava/util/Spliterator;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliterator(jdoubleArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DI)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DIII)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliterator(jintArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([II)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([IIII)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliterator(jlongArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JI)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Spliterators::spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JIII)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Spliterators::spliteratorUnknownSize(__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Spliterators",
			"spliteratorUnknownSize",
			"(Ljava/util/Iterator;I)Ljava/util/Spliterator;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::util

