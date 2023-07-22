#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./SchemaChangeInfo.def.hpp"

namespace android::app::appsearch::observer
{
	// Fields
	
	// Constructors
	inline SchemaChangeInfo::SchemaChangeInfo(JString arg0, JString arg1, JObject arg2)
		: JObject(
			"android.app.appsearch.observer.SchemaChangeInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jboolean SchemaChangeInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SchemaChangeInfo::getChangedSchemaNames() const
	{
		return callObjectMethod(
			"getChangedSchemaNames",
			"()Ljava/util/Set;"
		);
	}
	inline JString SchemaChangeInfo::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SchemaChangeInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint SchemaChangeInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SchemaChangeInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch::observer

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch::observer;
#endif
