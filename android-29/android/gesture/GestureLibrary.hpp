#pragma once

#include "./Gesture.def.hpp"
#include "./GestureStore.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./GestureLibrary.def.hpp"

namespace android::gesture
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void GestureLibrary::addGesture(JString arg0, android::gesture::Gesture arg1) const
	{
		callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject GestureLibrary::getGestureEntries() const
	{
		return callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	inline java::util::ArrayList GestureLibrary::getGestures(JString arg0) const
	{
		return callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline jint GestureLibrary::getOrientationStyle() const
	{
		return callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	inline jint GestureLibrary::getSequenceType() const
	{
		return callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	inline jboolean GestureLibrary::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline jboolean GestureLibrary::load() const
	{
		return callMethod<jboolean>(
			"load",
			"()Z"
		);
	}
	inline java::util::ArrayList GestureLibrary::recognize(android::gesture::Gesture arg0) const
	{
		return callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	inline void GestureLibrary::removeEntry(JString arg0) const
	{
		callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void GestureLibrary::removeGesture(JString arg0, android::gesture::Gesture arg1) const
	{
		callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean GestureLibrary::save() const
	{
		return callMethod<jboolean>(
			"save",
			"()Z"
		);
	}
	inline void GestureLibrary::setOrientationStyle(jint arg0) const
	{
		callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	inline void GestureLibrary::setSequenceType(jint arg0) const
	{
		callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

// Base class headers

