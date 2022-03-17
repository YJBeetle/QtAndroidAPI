#pragma once

#include "./Gesture.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./GestureStore.def.hpp"

namespace android::gesture
{
	// Fields
	inline jint GestureStore::ORIENTATION_INVARIANT()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"ORIENTATION_INVARIANT"
		);
	}
	inline jint GestureStore::ORIENTATION_SENSITIVE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"ORIENTATION_SENSITIVE"
		);
	}
	inline jint GestureStore::SEQUENCE_INVARIANT()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"SEQUENCE_INVARIANT"
		);
	}
	inline jint GestureStore::SEQUENCE_SENSITIVE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"SEQUENCE_SENSITIVE"
		);
	}
	
	// Constructors
	inline GestureStore::GestureStore()
		: JObject(
			"android.gesture.GestureStore",
			"()V"
		) {}
	
	// Methods
	inline void GestureStore::addGesture(JString arg0, android::gesture::Gesture arg1) const
	{
		callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject GestureStore::getGestureEntries() const
	{
		return callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	inline java::util::ArrayList GestureStore::getGestures(JString arg0) const
	{
		return callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline jint GestureStore::getOrientationStyle() const
	{
		return callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	inline jint GestureStore::getSequenceType() const
	{
		return callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	inline jboolean GestureStore::hasChanged() const
	{
		return callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	inline void GestureStore::load(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void GestureStore::load(java::io::InputStream arg0, jboolean arg1) const
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline java::util::ArrayList GestureStore::recognize(android::gesture::Gesture arg0) const
	{
		return callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	inline void GestureStore::removeEntry(JString arg0) const
	{
		callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void GestureStore::removeGesture(JString arg0, android::gesture::Gesture arg1) const
	{
		callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void GestureStore::save(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline void GestureStore::save(java::io::OutputStream arg0, jboolean arg1) const
	{
		callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void GestureStore::setOrientationStyle(jint arg0) const
	{
		callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	inline void GestureStore::setSequenceType(jint arg0) const
	{
		callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::gesture;
#endif
