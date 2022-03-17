#pragma once

#include "./SetSchemaRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SetSchemaRequest::getMigrators() const
	{
		return callObjectMethod(
			"getMigrators",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SetSchemaRequest::getSchemas() const
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	inline JObject SetSchemaRequest::getSchemasNotDisplayedBySystem() const
	{
		return callObjectMethod(
			"getSchemasNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	inline JObject SetSchemaRequest::getSchemasVisibleToPackages() const
	{
		return callObjectMethod(
			"getSchemasVisibleToPackages",
			"()Ljava/util/Map;"
		);
	}
	inline jint SetSchemaRequest::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline jboolean SetSchemaRequest::isForceOverride() const
	{
		return callMethod<jboolean>(
			"isForceOverride",
			"()Z"
		);
	}
} // namespace android::app::appsearch

// Base class headers

