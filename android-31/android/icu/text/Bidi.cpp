#include "./BidiClassifier.hpp"
#include "./BidiRun.hpp"
#include "./Bidi.hpp"

namespace android::icu::text
{
	// Fields
	jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_DEFAULT_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_DEFAULT_RIGHT_TO_LEFT"
		);
	}
	jint Bidi::DIRECTION_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	jint Bidi::DIRECTION_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	jshort Bidi::DO_MIRRORING()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"DO_MIRRORING"
		);
	}
	jshort Bidi::INSERT_LRM_FOR_NUMERIC()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"INSERT_LRM_FOR_NUMERIC"
		);
	}
	jshort Bidi::KEEP_BASE_COMBINING()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"KEEP_BASE_COMBINING"
		);
	}
	jbyte Bidi::LEVEL_DEFAULT_LTR()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_DEFAULT_LTR"
		);
	}
	jbyte Bidi::LEVEL_DEFAULT_RTL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_DEFAULT_RTL"
		);
	}
	jbyte Bidi::LEVEL_OVERRIDE()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_OVERRIDE"
		);
	}
	jbyte Bidi::LTR()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LTR"
		);
	}
	jint Bidi::MAP_NOWHERE()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"MAP_NOWHERE"
		);
	}
	jbyte Bidi::MAX_EXPLICIT_LEVEL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"MAX_EXPLICIT_LEVEL"
		);
	}
	jbyte Bidi::MIXED()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"MIXED"
		);
	}
	jbyte Bidi::NEUTRAL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"NEUTRAL"
		);
	}
	jint Bidi::OPTION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_DEFAULT"
		);
	}
	jint Bidi::OPTION_INSERT_MARKS()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_INSERT_MARKS"
		);
	}
	jint Bidi::OPTION_REMOVE_CONTROLS()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_REMOVE_CONTROLS"
		);
	}
	jint Bidi::OPTION_STREAMING()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_STREAMING"
		);
	}
	jshort Bidi::OUTPUT_REVERSE()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"OUTPUT_REVERSE"
		);
	}
	jshort Bidi::REMOVE_BIDI_CONTROLS()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REMOVE_BIDI_CONTROLS"
		);
	}
	jshort Bidi::REORDER_DEFAULT()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_DEFAULT"
		);
	}
	jshort Bidi::REORDER_GROUP_NUMBERS_WITH_R()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_GROUP_NUMBERS_WITH_R"
		);
	}
	jshort Bidi::REORDER_INVERSE_FOR_NUMBERS_SPECIAL()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_FOR_NUMBERS_SPECIAL"
		);
	}
	jshort Bidi::REORDER_INVERSE_LIKE_DIRECT()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_LIKE_DIRECT"
		);
	}
	jshort Bidi::REORDER_INVERSE_NUMBERS_AS_L()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_NUMBERS_AS_L"
		);
	}
	jshort Bidi::REORDER_NUMBERS_SPECIAL()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_NUMBERS_SPECIAL"
		);
	}
	jshort Bidi::REORDER_RUNS_ONLY()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_RUNS_ONLY"
		);
	}
	jbyte Bidi::RTL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"RTL"
		);
	}
	
	// QAndroidJniObject forward
	Bidi::Bidi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Bidi::Bidi()
		: JObject(
			"android.icu.text.Bidi",
			"()V"
		) {}
	Bidi::Bidi(JObject arg0)
		: JObject(
			"android.icu.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	Bidi::Bidi(jint arg0, jint arg1)
		: JObject(
			"android.icu.text.Bidi",
			"(II)V",
			arg0,
			arg1
		) {}
	Bidi::Bidi(jstring arg0, jint arg1)
		: JObject(
			"android.icu.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	Bidi::Bidi(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.icu.text.Bidi",
			"([CI[BIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jbyte Bidi::getBaseDirection(jstring arg0)
	{
		return callStaticMethod<jbyte>(
			"android.icu.text.Bidi",
			"getBaseDirection",
			"(Ljava/lang/CharSequence;)B",
			arg0
		);
	}
	jintArray Bidi::invertMap(jintArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"invertMap",
			"([I)[I",
			arg0
		).object<jintArray>();
	}
	jintArray Bidi::reorderLogical(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"reorderLogical",
			"([B)[I",
			arg0
		).object<jintArray>();
	}
	jintArray Bidi::reorderVisual(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"reorderVisual",
			"([B)[I",
			arg0
		).object<jintArray>();
	}
	void Bidi::reorderVisually(jbyteArray arg0, jint arg1, jobjectArray arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
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
		return callStaticMethod<jboolean>(
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
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"writeReverse",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jboolean Bidi::baseIsLeftToRight()
	{
		return callMethod<jboolean>(
			"baseIsLeftToRight",
			"()Z"
		);
	}
	jint Bidi::countParagraphs()
	{
		return callMethod<jint>(
			"countParagraphs",
			"()I"
		);
	}
	jint Bidi::countRuns()
	{
		return callMethod<jint>(
			"countRuns",
			"()I"
		);
	}
	android::icu::text::Bidi Bidi::createLineBidi(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"createLineBidi",
			"(II)Landroid/icu/text/Bidi;",
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
	android::icu::text::BidiClassifier Bidi::getCustomClassifier()
	{
		return callObjectMethod(
			"getCustomClassifier",
			"()Landroid/icu/text/BidiClassifier;"
		);
	}
	jint Bidi::getCustomizedClass(jint arg0)
	{
		return callMethod<jint>(
			"getCustomizedClass",
			"(I)I",
			arg0
		);
	}
	jbyte Bidi::getDirection()
	{
		return callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	jint Bidi::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jbyte Bidi::getLevelAt(jint arg0)
	{
		return callMethod<jbyte>(
			"getLevelAt",
			"(I)B",
			arg0
		);
	}
	jbyteArray Bidi::getLevels()
	{
		return callObjectMethod(
			"getLevels",
			"()[B"
		).object<jbyteArray>();
	}
	jint Bidi::getLogicalIndex(jint arg0)
	{
		return callMethod<jint>(
			"getLogicalIndex",
			"(I)I",
			arg0
		);
	}
	jintArray Bidi::getLogicalMap()
	{
		return callObjectMethod(
			"getLogicalMap",
			"()[I"
		).object<jintArray>();
	}
	android::icu::text::BidiRun Bidi::getLogicalRun(jint arg0)
	{
		return callObjectMethod(
			"getLogicalRun",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	jbyte Bidi::getParaLevel()
	{
		return callMethod<jbyte>(
			"getParaLevel",
			"()B"
		);
	}
	android::icu::text::BidiRun Bidi::getParagraph(jint arg0)
	{
		return callObjectMethod(
			"getParagraph",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	android::icu::text::BidiRun Bidi::getParagraphByIndex(jint arg0)
	{
		return callObjectMethod(
			"getParagraphByIndex",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	jint Bidi::getParagraphIndex(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphIndex",
			"(I)I",
			arg0
		);
	}
	jint Bidi::getProcessedLength()
	{
		return callMethod<jint>(
			"getProcessedLength",
			"()I"
		);
	}
	jint Bidi::getReorderingMode()
	{
		return callMethod<jint>(
			"getReorderingMode",
			"()I"
		);
	}
	jint Bidi::getReorderingOptions()
	{
		return callMethod<jint>(
			"getReorderingOptions",
			"()I"
		);
	}
	jint Bidi::getResultLength()
	{
		return callMethod<jint>(
			"getResultLength",
			"()I"
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
	jcharArray Bidi::getText()
	{
		return callObjectMethod(
			"getText",
			"()[C"
		).object<jcharArray>();
	}
	jstring Bidi::getTextAsString()
	{
		return callObjectMethod(
			"getTextAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Bidi::getVisualIndex(jint arg0)
	{
		return callMethod<jint>(
			"getVisualIndex",
			"(I)I",
			arg0
		);
	}
	jintArray Bidi::getVisualMap()
	{
		return callObjectMethod(
			"getVisualMap",
			"()[I"
		).object<jintArray>();
	}
	android::icu::text::BidiRun Bidi::getVisualRun(jint arg0)
	{
		return callObjectMethod(
			"getVisualRun",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	jboolean Bidi::isInverse()
	{
		return callMethod<jboolean>(
			"isInverse",
			"()Z"
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
	jboolean Bidi::isOrderParagraphsLTR()
	{
		return callMethod<jboolean>(
			"isOrderParagraphsLTR",
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
	void Bidi::orderParagraphsLTR(jboolean arg0)
	{
		callMethod<void>(
			"orderParagraphsLTR",
			"(Z)V",
			arg0
		);
	}
	void Bidi::setContext(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setContext",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Bidi::setCustomClassifier(android::icu::text::BidiClassifier arg0)
	{
		callMethod<void>(
			"setCustomClassifier",
			"(Landroid/icu/text/BidiClassifier;)V",
			arg0.object()
		);
	}
	void Bidi::setInverse(jboolean arg0)
	{
		callMethod<void>(
			"setInverse",
			"(Z)V",
			arg0
		);
	}
	android::icu::text::Bidi Bidi::setLine(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setLine",
			"(II)Landroid/icu/text/Bidi;",
			arg0,
			arg1
		);
	}
	void Bidi::setPara(JObject arg0)
	{
		callMethod<void>(
			"setPara",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		);
	}
	void Bidi::setPara(jcharArray arg0, jbyte arg1, jbyteArray arg2)
	{
		callMethod<void>(
			"setPara",
			"([CB[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bidi::setPara(jstring arg0, jbyte arg1, jbyteArray arg2)
	{
		callMethod<void>(
			"setPara",
			"(Ljava/lang/String;B[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bidi::setReorderingMode(jint arg0)
	{
		callMethod<void>(
			"setReorderingMode",
			"(I)V",
			arg0
		);
	}
	void Bidi::setReorderingOptions(jint arg0)
	{
		callMethod<void>(
			"setReorderingOptions",
			"(I)V",
			arg0
		);
	}
	jstring Bidi::writeReordered(jint arg0)
	{
		return callObjectMethod(
			"writeReordered",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::text

