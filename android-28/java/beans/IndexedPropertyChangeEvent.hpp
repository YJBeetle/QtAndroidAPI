#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "./IndexedPropertyChangeEvent.def.hpp"

namespace java::beans
{
	// Fields
	
	// Constructors
	inline IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3, jint arg4)
		: java::beans::PropertyChangeEvent(
			"java.beans.IndexedPropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jobject>(),
			arg3.object<jobject>(),
			arg4
		) {}
	
	// Methods
	inline jint IndexedPropertyChangeEvent::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
} // namespace java::beans

// Base class headers
#include "../util/EventObject.hpp"
#include "./PropertyChangeEvent.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::beans;
#endif
