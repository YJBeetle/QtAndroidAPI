#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaRouter_RouteCategory.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MediaRouter_RouteCategory::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString MediaRouter_RouteCategory::getName(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JObject MediaRouter_RouteCategory::getRoutes(JObject arg0) const
	{
		return callObjectMethod(
			"getRoutes",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jint MediaRouter_RouteCategory::getSupportedTypes() const
	{
		return callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	inline jboolean MediaRouter_RouteCategory::isGroupable() const
	{
		return callMethod<jboolean>(
			"isGroupable",
			"()Z"
		);
	}
	inline JString MediaRouter_RouteCategory::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

