#pragma once

#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./Observable.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline Observable::Observable()
		: JObject(
			"android.database.Observable",
			"()V"
		) {}
	
	// Methods
	inline void Observable::registerObserver(JObject arg0) const
	{
		callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Observable::unregisterAll() const
	{
		callMethod<void>(
			"unregisterAll",
			"()V"
		);
	}
	inline void Observable::unregisterObserver(JObject arg0) const
	{
		callMethod<void>(
			"unregisterObserver",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::database

// Base class headers

