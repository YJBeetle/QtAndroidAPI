#pragma once

#include "./ContentValues.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./ContentQueryMap.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ContentQueryMap::ContentQueryMap(JObject arg0, JString arg1, jboolean arg2, android::os::Handler arg3)
		: java::util::Observable(
			"android.content.ContentQueryMap",
			"(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline void ContentQueryMap::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject ContentQueryMap::getRows() const
	{
		return callObjectMethod(
			"getRows",
			"()Ljava/util/Map;"
		);
	}
	inline android::content::ContentValues ContentQueryMap::getValues(JString arg0) const
	{
		return callObjectMethod(
			"getValues",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0.object<jstring>()
		);
	}
	inline void ContentQueryMap::requery() const
	{
		callMethod<void>(
			"requery",
			"()V"
		);
	}
	inline void ContentQueryMap::setKeepUpdated(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepUpdated",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

// Base class headers
#include "../../java/util/Observable.hpp"

