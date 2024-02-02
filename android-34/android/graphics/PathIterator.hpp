#pragma once

#include "../../JFloatArray.hpp"
#include "./PathIterator_Segment.def.hpp"
#include "../../JObject.hpp"
#include "./PathIterator.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint PathIterator::VERB_CLOSE()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_CLOSE"
		);
	}
	inline jint PathIterator::VERB_CONIC()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_CONIC"
		);
	}
	inline jint PathIterator::VERB_CUBIC()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_CUBIC"
		);
	}
	inline jint PathIterator::VERB_DONE()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_DONE"
		);
	}
	inline jint PathIterator::VERB_LINE()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_LINE"
		);
	}
	inline jint PathIterator::VERB_MOVE()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_MOVE"
		);
	}
	inline jint PathIterator::VERB_QUAD()
	{
		return getStaticField<jint>(
			"android.graphics.PathIterator",
			"VERB_QUAD"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean PathIterator::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	inline android::graphics::PathIterator_Segment PathIterator::next() const
	{
		return callObjectMethod(
			"next",
			"()Landroid/graphics/PathIterator$Segment;"
		);
	}
	inline jint PathIterator::next(JFloatArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"next",
			"([FI)I",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline jint PathIterator::peek() const
	{
		return callMethod<jint>(
			"peek",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
