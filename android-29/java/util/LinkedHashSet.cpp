#include "./LinkedHashSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	LinkedHashSet::LinkedHashSet(QAndroidJniObject obj) : java::util::HashSet(obj) {}
	
	// Constructors
	LinkedHashSet::LinkedHashSet()
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"()V"
		) {}
	LinkedHashSet::LinkedHashSet(jint arg0)
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"(I)V",
			arg0
		) {}
	LinkedHashSet::LinkedHashSet(__JniBaseClass arg0)
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	LinkedHashSet::LinkedHashSet(jint arg0, jfloat arg1)
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	QAndroidJniObject LinkedHashSet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

