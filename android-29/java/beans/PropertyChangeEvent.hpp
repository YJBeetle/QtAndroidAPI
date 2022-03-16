#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "./PropertyChangeEvent.def.hpp"

namespace java::beans
{
	// Fields
	
	// Constructors
	inline PropertyChangeEvent::PropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3)
		: java::util::EventObject(
			"java.beans.PropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jobject>(),
			arg3.object<jobject>()
		) {}
	
	// Methods
	inline JObject PropertyChangeEvent::getNewValue() const
	{
		return callObjectMethod(
			"getNewValue",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject PropertyChangeEvent::getOldValue() const
	{
		return callObjectMethod(
			"getOldValue",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject PropertyChangeEvent::getPropagationId() const
	{
		return callObjectMethod(
			"getPropagationId",
			"()Ljava/lang/Object;"
		);
	}
	inline JString PropertyChangeEvent::getPropertyName() const
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	inline void PropertyChangeEvent::setPropagationId(JObject arg0) const
	{
		callMethod<void>(
			"setPropagationId",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline JString PropertyChangeEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::beans

// Base class headers
#include "../util/EventObject.hpp"

