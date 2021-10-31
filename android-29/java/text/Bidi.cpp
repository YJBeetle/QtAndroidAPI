#include "./Bidi.hpp"

namespace java::text
{
	// Fields
	jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_DEFAULT_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_DEFAULT_RIGHT_TO_LEFT"
		);
	}
	jint Bidi::DIRECTION_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Bidi",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	
	// QAndroidJniObject forward
	Bidi::Bidi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Bidi::Bidi(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	Bidi::Bidi(jstring arg0, jint arg1)
		: __JniBaseClass(
			"java.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	Bidi::Bidi(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5)
		: __JniBaseClass(
			"java.text.Bidi",
			"([CI[BIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	void Bidi::reorderVisually(jbyteArray arg0, jint arg1, jobjectArray arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.text.Bidi",
			"reorderVisually",
			"([BI[Ljava/lang/Object;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean Bidi::requiresBidi(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.text.Bidi",
			"requiresBidi",
			"([CII)Z",
			arg0,
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
	jstring Bidi::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

