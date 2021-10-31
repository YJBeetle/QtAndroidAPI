#include "./AbstractSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractSet::AbstractSet(QAndroidJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AbstractSet::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AbstractSet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AbstractSet::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
} // namespace java::util

