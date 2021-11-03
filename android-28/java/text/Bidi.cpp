#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "./Bidi.hpp"

namespace java::text
{
	// Fields
	jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_DEFAULT_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_DEFAULT_RIGHT_TO_LEFT"
		);
	}
	jint Bidi::DIRECTION_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	
	// QJniObject forward
	Bidi::Bidi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Bidi::Bidi(JObject arg0)
		: JObject(
			"java.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	Bidi::Bidi(JString arg0, jint arg1)
		: JObject(
			"java.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	Bidi::Bidi(JCharArray arg0, jint arg1, JByteArray arg2, jint arg3, jint arg4, jint arg5)
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
	void Bidi::reorderVisually(JByteArray arg0, jint arg1, JObjectArray arg2, jint arg3, jint arg4)
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
	jboolean Bidi::requiresBidi(JCharArray arg0, jint arg1, jint arg2)
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
	jboolean Bidi::baseIsLeftToRight()
	{
		return callMethod<jboolean>(
			"baseIsLeftToRight",
			"()Z"
		);
	}
	java::text::Bidi Bidi::createLineBidi(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"createLineBidi",
			"(II)Ljava/text/Bidi;",
			arg0,
			arg1
		);
	}
	jint Bidi::getBaseLevel()
	{
		return callMethod<jint>(
			"getBaseLevel",
			"()I"
		);
	}
	jint Bidi::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint Bidi::getLevelAt(jint arg0)
	{
		return callMethod<jint>(
			"getLevelAt",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getRunCount()
	{
		return callMethod<jint>(
			"getRunCount",
			"()I"
		);
	}
	jint Bidi::getRunLevel(jint arg0)
	{
		return callMethod<jint>(
			"getRunLevel",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getRunLimit(jint arg0)
	{
		return callMethod<jint>(
			"getRunLimit",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getRunStart(jint arg0)
	{
		return callMethod<jint>(
			"getRunStart",
			"(I)I",
			arg0
		);
	}
	jboolean Bidi::isLeftToRight()
	{
		return callMethod<jboolean>(
			"isLeftToRight",
			"()Z"
		);
	}
	jboolean Bidi::isMixed()
	{
		return callMethod<jboolean>(
			"isMixed",
			"()Z"
		);
	}
	jboolean Bidi::isRightToLeft()
	{
		return callMethod<jboolean>(
			"isRightToLeft",
			"()Z"
		);
	}
	JString Bidi::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

