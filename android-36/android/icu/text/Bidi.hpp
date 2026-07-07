#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JObjectArray.hpp"
#include "./BidiClassifier.def.hpp"
#include "./BidiRun.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Bidi.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_DEFAULT_LEFT_TO_RIGHT"
		);
	}
	inline jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_DEFAULT_RIGHT_TO_LEFT"
		);
	}
	inline jint Bidi::DIRECTION_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	inline jint Bidi::DIRECTION_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	inline jshort Bidi::DO_MIRRORING()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"DO_MIRRORING"
		);
	}
	inline jshort Bidi::INSERT_LRM_FOR_NUMERIC()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"INSERT_LRM_FOR_NUMERIC"
		);
	}
	inline jshort Bidi::KEEP_BASE_COMBINING()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"KEEP_BASE_COMBINING"
		);
	}
	inline jbyte Bidi::LEVEL_DEFAULT_LTR()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_DEFAULT_LTR"
		);
	}
	inline jbyte Bidi::LEVEL_DEFAULT_RTL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_DEFAULT_RTL"
		);
	}
	inline jbyte Bidi::LEVEL_OVERRIDE()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LEVEL_OVERRIDE"
		);
	}
	inline jbyte Bidi::LTR()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"LTR"
		);
	}
	inline jint Bidi::MAP_NOWHERE()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"MAP_NOWHERE"
		);
	}
	inline jbyte Bidi::MAX_EXPLICIT_LEVEL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"MAX_EXPLICIT_LEVEL"
		);
	}
	inline jbyte Bidi::MIXED()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"MIXED"
		);
	}
	inline jbyte Bidi::NEUTRAL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"NEUTRAL"
		);
	}
	inline jint Bidi::OPTION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_DEFAULT"
		);
	}
	inline jint Bidi::OPTION_INSERT_MARKS()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_INSERT_MARKS"
		);
	}
	inline jint Bidi::OPTION_REMOVE_CONTROLS()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_REMOVE_CONTROLS"
		);
	}
	inline jint Bidi::OPTION_STREAMING()
	{
		return getStaticField<jint>(
			"android.icu.text.Bidi",
			"OPTION_STREAMING"
		);
	}
	inline jshort Bidi::OUTPUT_REVERSE()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"OUTPUT_REVERSE"
		);
	}
	inline jshort Bidi::REMOVE_BIDI_CONTROLS()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REMOVE_BIDI_CONTROLS"
		);
	}
	inline jshort Bidi::REORDER_DEFAULT()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_DEFAULT"
		);
	}
	inline jshort Bidi::REORDER_GROUP_NUMBERS_WITH_R()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_GROUP_NUMBERS_WITH_R"
		);
	}
	inline jshort Bidi::REORDER_INVERSE_FOR_NUMBERS_SPECIAL()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_FOR_NUMBERS_SPECIAL"
		);
	}
	inline jshort Bidi::REORDER_INVERSE_LIKE_DIRECT()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_LIKE_DIRECT"
		);
	}
	inline jshort Bidi::REORDER_INVERSE_NUMBERS_AS_L()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_INVERSE_NUMBERS_AS_L"
		);
	}
	inline jshort Bidi::REORDER_NUMBERS_SPECIAL()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_NUMBERS_SPECIAL"
		);
	}
	inline jshort Bidi::REORDER_RUNS_ONLY()
	{
		return getStaticField<jshort>(
			"android.icu.text.Bidi",
			"REORDER_RUNS_ONLY"
		);
	}
	inline jbyte Bidi::RTL()
	{
		return getStaticField<jbyte>(
			"android.icu.text.Bidi",
			"RTL"
		);
	}
	
	// Constructors
	inline Bidi::Bidi()
		: JObject(
			"android.icu.text.Bidi",
			"()V"
		) {}
	inline Bidi::Bidi(JObject arg0)
		: JObject(
			"android.icu.text.Bidi",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	inline Bidi::Bidi(jint arg0, jint arg1)
		: JObject(
			"android.icu.text.Bidi",
			"(II)V",
			arg0,
			arg1
		) {}
	inline Bidi::Bidi(JString arg0, jint arg1)
		: JObject(
			"android.icu.text.Bidi",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline Bidi::Bidi(JCharArray arg0, jint arg1, JByteArray arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.icu.text.Bidi",
			"([CI[BIII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2.object<jbyteArray>(),
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline jbyte Bidi::getBaseDirection(JString arg0)
	{
		return callStaticMethod<jbyte>(
			"android.icu.text.Bidi",
			"getBaseDirection",
			"(Ljava/lang/CharSequence;)B",
			arg0.object<jstring>()
		);
	}
	inline JIntArray Bidi::invertMap(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"invertMap",
			"([I)[I",
			arg0.object<jintArray>()
		);
	}
	inline JIntArray Bidi::reorderLogical(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"reorderLogical",
			"([B)[I",
			arg0.object<jbyteArray>()
		);
	}
	inline JIntArray Bidi::reorderVisual(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"reorderVisual",
			"([B)[I",
			arg0.object<jbyteArray>()
		);
	}
	inline void Bidi::reorderVisually(JByteArray arg0, jint arg1, JObjectArray arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.icu.text.Bidi",
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
			"android.icu.text.Bidi",
			"requiresBidi",
			"([CII)Z",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline JString Bidi::writeReverse(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Bidi",
			"writeReverse",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean Bidi::baseIsLeftToRight() const
	{
		return callMethod<jboolean>(
			"baseIsLeftToRight",
			"()Z"
		);
	}
	inline jint Bidi::countParagraphs() const
	{
		return callMethod<jint>(
			"countParagraphs",
			"()I"
		);
	}
	inline jint Bidi::countRuns() const
	{
		return callMethod<jint>(
			"countRuns",
			"()I"
		);
	}
	inline android::icu::text::Bidi Bidi::createLineBidi(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"createLineBidi",
			"(II)Landroid/icu/text/Bidi;",
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
	inline android::icu::text::BidiClassifier Bidi::getCustomClassifier() const
	{
		return callObjectMethod(
			"getCustomClassifier",
			"()Landroid/icu/text/BidiClassifier;"
		);
	}
	inline jint Bidi::getCustomizedClass(jint arg0) const
	{
		return callMethod<jint>(
			"getCustomizedClass",
			"(I)I",
			arg0
		);
	}
	inline jbyte Bidi::getDirection() const
	{
		return callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	inline jint Bidi::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jbyte Bidi::getLevelAt(jint arg0) const
	{
		return callMethod<jbyte>(
			"getLevelAt",
			"(I)B",
			arg0
		);
	}
	inline JByteArray Bidi::getLevels() const
	{
		return callObjectMethod(
			"getLevels",
			"()[B"
		);
	}
	inline jint Bidi::getLogicalIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getLogicalIndex",
			"(I)I",
			arg0
		);
	}
	inline JIntArray Bidi::getLogicalMap() const
	{
		return callObjectMethod(
			"getLogicalMap",
			"()[I"
		);
	}
	inline android::icu::text::BidiRun Bidi::getLogicalRun(jint arg0) const
	{
		return callObjectMethod(
			"getLogicalRun",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	inline jbyte Bidi::getParaLevel() const
	{
		return callMethod<jbyte>(
			"getParaLevel",
			"()B"
		);
	}
	inline android::icu::text::BidiRun Bidi::getParagraph(jint arg0) const
	{
		return callObjectMethod(
			"getParagraph",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	inline android::icu::text::BidiRun Bidi::getParagraphByIndex(jint arg0) const
	{
		return callObjectMethod(
			"getParagraphByIndex",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	inline jint Bidi::getParagraphIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphIndex",
			"(I)I",
			arg0
		);
	}
	inline jint Bidi::getProcessedLength() const
	{
		return callMethod<jint>(
			"getProcessedLength",
			"()I"
		);
	}
	inline jint Bidi::getReorderingMode() const
	{
		return callMethod<jint>(
			"getReorderingMode",
			"()I"
		);
	}
	inline jint Bidi::getReorderingOptions() const
	{
		return callMethod<jint>(
			"getReorderingOptions",
			"()I"
		);
	}
	inline jint Bidi::getResultLength() const
	{
		return callMethod<jint>(
			"getResultLength",
			"()I"
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
	inline JCharArray Bidi::getText() const
	{
		return callObjectMethod(
			"getText",
			"()[C"
		);
	}
	inline JString Bidi::getTextAsString() const
	{
		return callObjectMethod(
			"getTextAsString",
			"()Ljava/lang/String;"
		);
	}
	inline jint Bidi::getVisualIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getVisualIndex",
			"(I)I",
			arg0
		);
	}
	inline JIntArray Bidi::getVisualMap() const
	{
		return callObjectMethod(
			"getVisualMap",
			"()[I"
		);
	}
	inline android::icu::text::BidiRun Bidi::getVisualRun(jint arg0) const
	{
		return callObjectMethod(
			"getVisualRun",
			"(I)Landroid/icu/text/BidiRun;",
			arg0
		);
	}
	inline jboolean Bidi::isInverse() const
	{
		return callMethod<jboolean>(
			"isInverse",
			"()Z"
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
	inline jboolean Bidi::isOrderParagraphsLTR() const
	{
		return callMethod<jboolean>(
			"isOrderParagraphsLTR",
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
	inline void Bidi::orderParagraphsLTR(jboolean arg0) const
	{
		callMethod<void>(
			"orderParagraphsLTR",
			"(Z)V",
			arg0
		);
	}
	inline void Bidi::setContext(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setContext",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Bidi::setCustomClassifier(android::icu::text::BidiClassifier arg0) const
	{
		callMethod<void>(
			"setCustomClassifier",
			"(Landroid/icu/text/BidiClassifier;)V",
			arg0.object()
		);
	}
	inline void Bidi::setInverse(jboolean arg0) const
	{
		callMethod<void>(
			"setInverse",
			"(Z)V",
			arg0
		);
	}
	inline android::icu::text::Bidi Bidi::setLine(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLine",
			"(II)Landroid/icu/text/Bidi;",
			arg0,
			arg1
		);
	}
	inline void Bidi::setPara(JObject arg0) const
	{
		callMethod<void>(
			"setPara",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		);
	}
	inline void Bidi::setPara(JCharArray arg0, jbyte arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"setPara",
			"([CB[B)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline void Bidi::setPara(JString arg0, jbyte arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"setPara",
			"(Ljava/lang/String;B[B)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline void Bidi::setReorderingMode(jint arg0) const
	{
		callMethod<void>(
			"setReorderingMode",
			"(I)V",
			arg0
		);
	}
	inline void Bidi::setReorderingOptions(jint arg0) const
	{
		callMethod<void>(
			"setReorderingOptions",
			"(I)V",
			arg0
		);
	}
	inline JString Bidi::writeReordered(jint arg0) const
	{
		return callObjectMethod(
			"writeReordered",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
