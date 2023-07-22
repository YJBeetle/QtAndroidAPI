#pragma once

#include "../../JObject.hpp"
#include "./Vector.def.hpp"
#include "./Observable.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Observable::Observable()
		: JObject(
			"java.util.Observable",
			"()V"
		) {}
	
	// Methods
	inline void Observable::addObserver(JObject arg0) const
	{
		callMethod<void>(
			"addObserver",
			"(Ljava/util/Observer;)V",
			arg0.object()
		);
	}
	inline jint Observable::countObservers() const
	{
		return callMethod<jint>(
			"countObservers",
			"()I"
		);
	}
	inline void Observable::deleteObserver(JObject arg0) const
	{
		callMethod<void>(
			"deleteObserver",
			"(Ljava/util/Observer;)V",
			arg0.object()
		);
	}
	inline void Observable::deleteObservers() const
	{
		callMethod<void>(
			"deleteObservers",
			"()V"
		);
	}
	inline jboolean Observable::hasChanged() const
	{
		return callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	inline void Observable::notifyObservers() const
	{
		callMethod<void>(
			"notifyObservers",
			"()V"
		);
	}
	inline void Observable::notifyObservers(JObject arg0) const
	{
		callMethod<void>(
			"notifyObservers",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
