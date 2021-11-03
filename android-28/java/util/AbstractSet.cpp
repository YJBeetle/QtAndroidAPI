#include "../../JObject.hpp"
#include "./AbstractSet.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	AbstractSet::AbstractSet(QJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AbstractSet::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AbstractSet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AbstractSet::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
} // namespace java::util

