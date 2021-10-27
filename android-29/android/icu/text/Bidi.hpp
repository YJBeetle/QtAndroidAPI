#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class BidiClassifier;
}
namespace __jni_impl::android::icu::text
{
	class BidiRun;
}

namespace __jni_impl::android::icu::text
{
	class Bidi : public __JniBaseClass
	{
	public:
		// Fields
		static jint DIRECTION_DEFAULT_LEFT_TO_RIGHT();
		static jint DIRECTION_DEFAULT_RIGHT_TO_LEFT();
		static jint DIRECTION_LEFT_TO_RIGHT();
		static jint DIRECTION_RIGHT_TO_LEFT();
		static jshort DO_MIRRORING();
		static jshort INSERT_LRM_FOR_NUMERIC();
		static jshort KEEP_BASE_COMBINING();
		static jbyte LEVEL_DEFAULT_LTR();
		static jbyte LEVEL_DEFAULT_RTL();
		static jbyte LEVEL_OVERRIDE();
		static jbyte LTR();
		static jint MAP_NOWHERE();
		static jbyte MAX_EXPLICIT_LEVEL();
		static jbyte MIXED();
		static jbyte NEUTRAL();
		static jint OPTION_DEFAULT();
		static jint OPTION_INSERT_MARKS();
		static jint OPTION_REMOVE_CONTROLS();
		static jint OPTION_STREAMING();
		static jshort OUTPUT_REVERSE();
		static jshort REMOVE_BIDI_CONTROLS();
		static jshort REORDER_DEFAULT();
		static jshort REORDER_GROUP_NUMBERS_WITH_R();
		static jshort REORDER_INVERSE_FOR_NUMBERS_SPECIAL();
		static jshort REORDER_INVERSE_LIKE_DIRECT();
		static jshort REORDER_INVERSE_NUMBERS_AS_L();
		static jshort REORDER_NUMBERS_SPECIAL();
		static jshort REORDER_RUNS_ONLY();
		static jbyte RTL();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static jbyte getBaseDirection(jstring arg0);
		static jbyte getBaseDirection(const QString &arg0);
		static jintArray invertMap(jintArray arg0);
		static jintArray reorderLogical(jbyteArray arg0);
		static jintArray reorderVisual(jbyteArray arg0);
		static void reorderVisually(jbyteArray arg0, jint arg1, jobjectArray arg2, jint arg3, jint arg4);
		static jboolean requiresBidi(jcharArray arg0, jint arg1, jint arg2);
		static jstring writeReverse(jstring arg0, jint arg1);
		static jstring writeReverse(const QString &arg0, jint arg1);
		jboolean baseIsLeftToRight();
		jint countParagraphs();
		jint countRuns();
		QAndroidJniObject createLineBidi(jint arg0, jint arg1);
		jint getBaseLevel();
		QAndroidJniObject getCustomClassifier();
		jint getCustomizedClass(jint arg0);
		jbyte getDirection();
		jint getLength();
		jbyte getLevelAt(jint arg0);
		jbyteArray getLevels();
		jint getLogicalIndex(jint arg0);
		jintArray getLogicalMap();
		QAndroidJniObject getLogicalRun(jint arg0);
		jbyte getParaLevel();
		QAndroidJniObject getParagraph(jint arg0);
		QAndroidJniObject getParagraphByIndex(jint arg0);
		jint getParagraphIndex(jint arg0);
		jint getProcessedLength();
		jint getReorderingMode();
		jint getReorderingOptions();
		jint getResultLength();
		jint getRunCount();
		jint getRunLevel(jint arg0);
		jint getRunLimit(jint arg0);
		jint getRunStart(jint arg0);
		jcharArray getText();
		jstring getTextAsString();
		jint getVisualIndex(jint arg0);
		jintArray getVisualMap();
		QAndroidJniObject getVisualRun(jint arg0);
		jboolean isInverse();
		jboolean isLeftToRight();
		jboolean isMixed();
		jboolean isOrderParagraphsLTR();
		jboolean isRightToLeft();
		void orderParagraphsLTR(jboolean arg0);
		void setContext(jstring arg0, jstring arg1);
		void setContext(const QString &arg0, const QString &arg1);
		void setCustomClassifier(__jni_impl::android::icu::text::BidiClassifier arg0);
		void setInverse(jboolean arg0);
		QAndroidJniObject setLine(jint arg0, jint arg1);
		void setPara(__jni_impl::__JniBaseClass arg0);
		void setPara(jcharArray arg0, jbyte arg1, jbyteArray arg2);
		void setPara(jstring arg0, jbyte arg1, jbyteArray arg2);
		void setPara(const QString &arg0, jbyte arg1, jbyteArray arg2);
		void setReorderingMode(jint arg0);
		void setReorderingOptions(jint arg0);
		jstring writeReordered(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "./BidiClassifier.hpp"
#include "./BidiRun.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_DEFAULT_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_DEFAULT_RIGHT_TO_LEFT"
		);
	}
	jint Bidi::DIRECTION_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	jshort Bidi::DO_MIRRORING()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"DO_MIRRORING"
		);
	}
	jshort Bidi::INSERT_LRM_FOR_NUMERIC()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"INSERT_LRM_FOR_NUMERIC"
		);
	}
	jshort Bidi::KEEP_BASE_COMBINING()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"KEEP_BASE_COMBINING"
		);
	}
	jbyte Bidi::LEVEL_DEFAULT_LTR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_DEFAULT_LTR"
		);
	}
	jbyte Bidi::LEVEL_DEFAULT_RTL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_DEFAULT_RTL"
		);
	}
	jbyte Bidi::LEVEL_OVERRIDE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_OVERRIDE"
		);
	}
	jbyte Bidi::LTR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LTR"
		);
	}
	jint Bidi::MAP_NOWHERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"MAP_NOWHERE"
		);
	}
	jbyte Bidi::MAX_EXPLICIT_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"MAX_EXPLICIT_LEVEL"
		);
	}
	jbyte Bidi::MIXED()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"MIXED"
		);
	}
	jbyte Bidi::NEUTRAL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"NEUTRAL"
		);
	}
	jint Bidi::OPTION_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_DEFAULT"
		);
	}
	jint Bidi::OPTION_INSERT_MARKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_INSERT_MARKS"
		);
	}
	jint Bidi::OPTION_REMOVE_CONTROLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_REMOVE_CONTROLS"
		);
	}
	jint Bidi::OPTION_STREAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_STREAMING"
		);
	}
	jshort Bidi::OUTPUT_REVERSE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"OUTPUT_REVERSE"
		);
	}
	jshort Bidi::REMOVE_BIDI_CONTROLS()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REMOVE_BIDI_CONTROLS"
		);
	}
	jshort Bidi::REORDER_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_DEFAULT"
		);
	}
	jshort Bidi::REORDER_GROUP_NUMBERS_WITH_R()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_GROUP_NUMBERS_WITH_R"
		);
	}
	jshort Bidi::REORDER_INVERSE_FOR_NUMBERS_SPECIAL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_FOR_NUMBERS_SPECIAL"
		);
	}
	jshort Bidi::REORDER_INVERSE_LIKE_DIRECT()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_LIKE_DIRECT"
		);
	}
	jshort Bidi::REORDER_INVERSE_NUMBERS_AS_L()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_NUMBERS_AS_L"
		);
	}
	jshort Bidi::REORDER_NUMBERS_SPECIAL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_NUMBERS_SPECIAL"
		);
	}
	jshort Bidi::REORDER_RUNS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_RUNS_ONLY"
		);
	}
	jbyte Bidi::RTL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"RTL"
		);
	}
	
	// Constructors
	void Bidi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Bidi",
			"()V"
		);
	}
	void Bidi::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void Bidi::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Bidi",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Bidi::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Bidi::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Bidi",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bidi::__constructor(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Bidi",
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
	jbyte Bidi::getBaseDirection(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"android.icu.text.Bidi",
			"getBaseDirection",
			"(Ljava/lang/CharSequence;)B",
			arg0
		);
	}
	jbyte Bidi::getBaseDirection(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"android.icu.text.Bidi",
			"getBaseDirection",
			"(Ljava/lang/CharSequence;)B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jintArray Bidi::invertMap(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Bidi",
			"invertMap",
			"([I)[I",
			arg0
		).object<jintArray>();
	}
	jintArray Bidi::reorderLogical(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Bidi",
			"reorderLogical",
			"([B)[I",
			arg0
		).object<jintArray>();
	}
	jintArray Bidi::reorderVisual(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Bidi",
			"reorderVisual",
			"([B)[I",
			arg0
		).object<jintArray>();
	}
	void Bidi::reorderVisually(jbyteArray arg0, jint arg1, jobjectArray arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.icu.text.Bidi",
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
			"android.icu.text.Bidi",
			"requiresBidi",
			"([CII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jstring Bidi::writeReverse(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Bidi",
			"writeReverse",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Bidi::writeReverse(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Bidi",
			"writeReverse",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jboolean Bidi::baseIsLeftToRight()
	{
		return __thiz.callMethod<jboolean>(
			"baseIsLeftToRight",
			"()Z"
		);
	}
	jint Bidi::countParagraphs()
	{
		return __thiz.callMethod<jint>(
			"countParagraphs",
			"()I"
		);
	}
	jint Bidi::countRuns()
	{
		return __thiz.callMethod<jint>(
			"countRuns",
			"()I"
		);
	}
	QAndroidJniObject Bidi::createLineBidi(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createLineBidi",
			"(II)Landroid/icu/text/Bidi;",
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
	QAndroidJniObject Bidi::getCustomClassifier()
	{
		return __thiz.callObjectMethod(
			"getCustomClassifier",
			"()Landroid/icu/text/BidiClassifier;"
		);
	}
	jint Bidi::getCustomizedClass(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getCustomizedClass",
			"(I)I",
			arg0
		);
	}
	jbyte Bidi::getDirection()
	{
		return __thiz.callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	jint Bidi::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jbyte Bidi::getLevelAt(jint arg0)
	{
		return __thiz.callMethod<jbyte>(
			"getLevelAt",
			"(I)B",
			arg0
		);
	}
	jbyteArray Bidi::getLevels()
	{
		return __thiz.callObjectMethod(
			"getLevels",
			"()[B"
		).object<jbyteArray>();
	}
	jint Bidi::getLogicalIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLogicalIndex",
			"(I)I",
			arg0
		);
	}
	jintArray Bidi::getLogicalMap()
	{
		return __thiz.callObjectMethod(
			"getLogicalMap",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject Bidi::getLogicalRun(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLogicalRun",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	jbyte Bidi::getParaLevel()
	{
		return __thiz.callMethod<jbyte>(
			"getParaLevel",
			"()B"
		);
	}
	QAndroidJniObject Bidi::getParagraph(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getParagraph",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	QAndroidJniObject Bidi::getParagraphByIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getParagraphByIndex",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	jint Bidi::getParagraphIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphIndex",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getProcessedLength()
	{
		return __thiz.callMethod<jint>(
			"getProcessedLength",
			"()I"
		);
	}
	jint Bidi::getReorderingMode()
	{
		return __thiz.callMethod<jint>(
			"getReorderingMode",
			"()I"
		);
	}
	jint Bidi::getReorderingOptions()
	{
		return __thiz.callMethod<jint>(
			"getReorderingOptions",
			"()I"
		);
	}
	jint Bidi::getResultLength()
	{
		return __thiz.callMethod<jint>(
			"getResultLength",
			"()I"
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
	jcharArray Bidi::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()[C"
		).object<jcharArray>();
	}
	jstring Bidi::getTextAsString()
	{
		return __thiz.callObjectMethod(
			"getTextAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Bidi::getVisualIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getVisualIndex",
			"(I)I",
			arg0
		);
	}
	jintArray Bidi::getVisualMap()
	{
		return __thiz.callObjectMethod(
			"getVisualMap",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject Bidi::getVisualRun(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getVisualRun",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	jboolean Bidi::isInverse()
	{
		return __thiz.callMethod<jboolean>(
			"isInverse",
			"()Z"
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
	jboolean Bidi::isOrderParagraphsLTR()
	{
		return __thiz.callMethod<jboolean>(
			"isOrderParagraphsLTR",
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
	void Bidi::orderParagraphsLTR(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"orderParagraphsLTR",
			"(Z)V",
			arg0
		);
	}
	void Bidi::setContext(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Bidi::setContext(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Bidi::setCustomClassifier(__jni_impl::android::icu::text::BidiClassifier arg0)
	{
		__thiz.callMethod<void>(
			"setCustomClassifier",
			"(Landroid/icu/text/BidiClassifier;)V",
			arg0.__jniObject().object()
		);
	}
	void Bidi::setInverse(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInverse",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Bidi::setLine(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setLine",
			"(II)Landroid/icu/text/Bidi;",
			arg0,
			arg1
		);
	}
	void Bidi::setPara(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPara",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void Bidi::setPara(jcharArray arg0, jbyte arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"setPara",
			"([CB[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bidi::setPara(jstring arg0, jbyte arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"setPara",
			"(Ljava/lang/String;B[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bidi::setPara(const QString &arg0, jbyte arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"setPara",
			"(Ljava/lang/String;B[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void Bidi::setReorderingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReorderingMode",
			"(I)V",
			arg0
		);
	}
	void Bidi::setReorderingOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReorderingOptions",
			"(I)V",
			arg0
		);
	}
	jstring Bidi::writeReordered(jint arg0)
	{
		return __thiz.callObjectMethod(
			"writeReordered",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Bidi : public __jni_impl::android::icu::text::Bidi
	{
	public:
		Bidi(QAndroidJniObject obj) { __thiz = obj; }
		Bidi()
		{
			__constructor();
		}
		Bidi(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Bidi(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Bidi(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Bidi(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::icu::text

