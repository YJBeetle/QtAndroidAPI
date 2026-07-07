#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PropertyPath_PathSegment.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint PropertyPath_PathSegment::NON_REPEATED_CARDINALITY()
	{
		return getStaticField<jint>(
			"android.app.appsearch.PropertyPath$PathSegment",
			"NON_REPEATED_CARDINALITY"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::appsearch::PropertyPath_PathSegment PropertyPath_PathSegment::create(JString arg0)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.PropertyPath$PathSegment",
			"create",
			"(Ljava/lang/String;)Landroid/app/appsearch/PropertyPath$PathSegment;",
			arg0.object<jstring>()
		);
	}
	inline android::app::appsearch::PropertyPath_PathSegment PropertyPath_PathSegment::create(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.PropertyPath$PathSegment",
			"create",
			"(Ljava/lang/String;I)Landroid/app/appsearch/PropertyPath$PathSegment;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean PropertyPath_PathSegment::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PropertyPath_PathSegment::getPropertyIndex() const
	{
		return callMethod<jint>(
			"getPropertyIndex",
			"()I"
		);
	}
	inline JString PropertyPath_PathSegment::getPropertyName() const
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PropertyPath_PathSegment::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PropertyPath_PathSegment::toString() const
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
