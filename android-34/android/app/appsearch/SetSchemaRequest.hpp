#pragma once

#include "./SetSchemaRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint SetSchemaRequest::READ_ASSISTANT_APP_SEARCH_DATA()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SetSchemaRequest",
			"READ_ASSISTANT_APP_SEARCH_DATA"
		);
	}
	inline jint SetSchemaRequest::READ_CALENDAR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SetSchemaRequest",
			"READ_CALENDAR"
		);
	}
	inline jint SetSchemaRequest::READ_CONTACTS()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SetSchemaRequest",
			"READ_CONTACTS"
		);
	}
	inline jint SetSchemaRequest::READ_EXTERNAL_STORAGE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SetSchemaRequest",
			"READ_EXTERNAL_STORAGE"
		);
	}
	inline jint SetSchemaRequest::READ_HOME_APP_SEARCH_DATA()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SetSchemaRequest",
			"READ_HOME_APP_SEARCH_DATA"
		);
	}
	inline jint SetSchemaRequest::READ_SMS()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SetSchemaRequest",
			"READ_SMS"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SetSchemaRequest::getMigrators() const
	{
		return callObjectMethod(
			"getMigrators",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SetSchemaRequest::getRequiredPermissionsForSchemaTypeVisibility() const
	{
		return callObjectMethod(
			"getRequiredPermissionsForSchemaTypeVisibility",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
