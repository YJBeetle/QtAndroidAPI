#pragma once

#include "./PropertyPath_PathSegment.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PropertyPath.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline PropertyPath::PropertyPath(JString arg0)
		: JObject(
			"android.app.appsearch.PropertyPath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline PropertyPath::PropertyPath(JObject arg0)
		: JObject(
			"android.app.appsearch.PropertyPath",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean PropertyPath::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::app::appsearch::PropertyPath_PathSegment PropertyPath::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Landroid/app/appsearch/PropertyPath$PathSegment;",
			arg0
		);
	}
	inline jint PropertyPath::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject PropertyPath::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint PropertyPath::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString PropertyPath::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
