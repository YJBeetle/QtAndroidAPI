#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "./Bidi.def.hpp"

namespace java::text
{
	// Fields
	inline jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_DEFAULT_LEFT_TO_RIGHT"
		);
	}
	inline jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_DEFAULT_RIGHT_TO_LEFT"
		);
	}
	inline jint Bidi::DIRECTION_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	inline jint Bidi::DIRECTION_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	
	// Constructors
	inline Bidi::Bidi(JObject arg0)
		: JObject(
			"java.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	inline Bidi::Bidi(JString arg0, jint arg1)
		: JObject(
			"java.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline Bidi::Bidi(JCharArray arg0, jint arg1, JByteArray arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"java.text.Bidi",
			"([CI[BIII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2.object<jbyteArray>(),
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline void Bidi::reorderVisually(JByteArray arg0, jint arg1, JObjectArray arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"java.text.Bidi",
			"reorderVisually",
			"([BI[Ljava/lang/Object;II)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object<jobjectArray>(),
			arg3,
			arg4
		);
	}
	inline jboolean Bidi::requiresBidi(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"java.text.Bidi",
			"requiresBidi",
			"([CII)Z",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean Bidi::baseIsLeftToRight() const
	{
		return callMethod<jboolean>(
			"baseIsLeftToRight",
			"()Z"
		);
	}
	inline java::text::Bidi Bidi::createLineBidi(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"createLineBidi",
			"(II)Ljava/text/Bidi;",
			arg0,
			arg1
		);
	}
	inline jint Bidi::getBaseLevel() const
	{
		return callMethod<jint>(
			"getBaseLevel",
			"()I"
		);
	}
	inline jint Bidi::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint Bidi::getLevelAt(jint arg0) const
	{
		return callMethod<jint>(
			"getLevelAt",
			"(I)I",
			arg0
		);
	}
	inline jint Bidi::getRunCount() const
	{
		return callMethod<jint>(
			"getRunCount",
			"()I"
		);
	}
	inline jint Bidi::getRunLevel(jint arg0) const
	{
		return callMethod<jint>(
			"getRunLevel",
			"(I)I",
			arg0
		);
	}
	inline jint Bidi::getRunLimit(jint arg0) const
	{
		return callMethod<jint>(
			"getRunLimit",
			"(I)I",
			arg0
		);
	}
	inline jint Bidi::getRunStart(jint arg0) const
	{
		return callMethod<jint>(
			"getRunStart",
			"(I)I",
			arg0
		);
	}
	inline jboolean Bidi::isLeftToRight() const
	{
		return callMethod<jboolean>(
			"isLeftToRight",
			"()Z"
		);
	}
	inline jboolean Bidi::isMixed() const
	{
		return callMethod<jboolean>(
			"isMixed",
			"()Z"
		);
	}
	inline jboolean Bidi::isRightToLeft() const
	{
		return callMethod<jboolean>(
			"isRightToLeft",
			"()Z"
		);
	}
	inline JString Bidi::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
