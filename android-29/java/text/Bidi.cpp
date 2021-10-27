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
	
	Bidi::Bidi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Bidi::Bidi(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	Bidi::Bidi(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	Bidi::Bidi(const QString &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.Bidi",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	Bidi::Bidi(jcharArray &arg0, jint &arg1, jbyteArray &arg2, jint &arg3, jint &arg4, jint &arg5)
	{
		__thiz = QAndroidJniObject(
			"java.text.Bidi",
			"([CI[BIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
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
		return __thiz.callMethod<jboolean>(
			"baseIsLeftToRight",
			"()Z"
		);
	}
	QAndroidJniObject Bidi::createLineBidi(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createLineBidi",
			"(II)Ljava/text/Bidi;",
			arg0,
			arg1
		);
	}
	jint Bidi::getBaseLevel()
	{
		return __thiz.callMethod<jint>(
			"getBaseLevel",
			"()I"
		);
	}
	jint Bidi::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint Bidi::getLevelAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLevelAt",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getRunCount()
	{
		return __thiz.callMethod<jint>(
			"getRunCount",
			"()I"
		);
	}
	jint Bidi::getRunLevel(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRunLevel",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getRunLimit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRunLimit",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getRunStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRunStart",
			"(I)I",
			arg0
		);
	}
	jboolean Bidi::isLeftToRight()
	{
		return __thiz.callMethod<jboolean>(
			"isLeftToRight",
			"()Z"
		);
	}
	jboolean Bidi::isMixed()
	{
		return __thiz.callMethod<jboolean>(
			"isMixed",
			"()Z"
		);
	}
	jboolean Bidi::isRightToLeft()
	{
		return __thiz.callMethod<jboolean>(
			"isRightToLeft",
			"()Z"
		);
	}
	jstring Bidi::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

