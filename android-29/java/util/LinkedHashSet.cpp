#include "./LinkedHashSet.hpp"

namespace java::util
{
	// Fields
	
	LinkedHashSet::LinkedHashSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkedHashSet::LinkedHashSet()
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"()V"
		);
	}
	LinkedHashSet::LinkedHashSet(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"(I)V",
			arg0
		);
	}
	LinkedHashSet::LinkedHashSet(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	LinkedHashSet::LinkedHashSet(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"(IF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject LinkedHashSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

