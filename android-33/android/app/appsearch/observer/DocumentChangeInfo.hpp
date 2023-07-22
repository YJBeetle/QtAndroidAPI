#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./DocumentChangeInfo.def.hpp"

namespace android::app::appsearch::observer
{
	// Fields
	
	// Constructors
	inline DocumentChangeInfo::DocumentChangeInfo(JString arg0, JString arg1, JString arg2, JString arg3, JObject arg4)
		: JObject(
			"android.app.appsearch.observer.DocumentChangeInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object()
		) {}
	
	// Methods
	inline jboolean DocumentChangeInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DocumentChangeInfo::getChangedDocumentIds() const
	{
		return callObjectMethod(
			"getChangedDocumentIds",
			"()Ljava/util/Set;"
		);
	}
	inline JString DocumentChangeInfo::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	inline JString DocumentChangeInfo::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline JString DocumentChangeInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString DocumentChangeInfo::getSchemaName() const
	{
		return callObjectMethod(
			"getSchemaName",
			"()Ljava/lang/String;"
		);
	}
	inline jint DocumentChangeInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DocumentChangeInfo::toString() const
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
