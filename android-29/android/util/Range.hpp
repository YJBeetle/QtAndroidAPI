#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Range.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline Range::Range(JObject arg0, JObject arg1)
		: JObject(
			"android.util.Range",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::util::Range Range::create(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.util.Range",
			"create",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Range::clamp(JObject arg0) const
	{
		return callObjectMethod(
			"clamp",
			"(Ljava/lang/Comparable;)Ljava/lang/Comparable;",
			arg0.object()
		);
	}
	inline jboolean Range::contains(android::util::Range arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/util/Range;)Z",
			arg0.object()
		);
	}
	inline jboolean Range::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Comparable;)Z",
			arg0.object()
		);
	}
	inline jboolean Range::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::util::Range Range::extend(android::util::Range arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.object()
		);
	}
	inline android::util::Range Range::extend(JObject arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object()
		);
	}
	inline android::util::Range Range::extend(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Range::getLower() const
	{
		return callObjectMethod(
			"getLower",
			"()Ljava/lang/Comparable;"
		);
	}
	inline JObject Range::getUpper() const
	{
		return callObjectMethod(
			"getUpper",
			"()Ljava/lang/Comparable;"
		);
	}
	inline jint Range::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::util::Range Range::intersect(android::util::Range arg0) const
	{
		return callObjectMethod(
			"intersect",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.object()
		);
	}
	inline android::util::Range Range::intersect(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"intersect",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString Range::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers

