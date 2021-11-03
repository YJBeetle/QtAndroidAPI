#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class BidiClassifier;
}
namespace android::icu::text
{
	class BidiRun;
}

namespace android::icu::text
{
	class Bidi : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Bidi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Bidi(QAndroidJniObject obj);
		
		// Constructors
		Bidi();
		Bidi(JObject arg0);
		Bidi(jint arg0, jint arg1);
		Bidi(jstring arg0, jint arg1);
		Bidi(jcharArray arg0, jint arg1, jbyteArray arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static jbyte getBaseDirection(jstring arg0);
		static jintArray invertMap(jintArray arg0);
		static jintArray reorderLogical(jbyteArray arg0);
		static jintArray reorderVisual(jbyteArray arg0);
		static void reorderVisually(jbyteArray arg0, jint arg1, jobjectArray arg2, jint arg3, jint arg4);
		static jboolean requiresBidi(jcharArray arg0, jint arg1, jint arg2);
		static jstring writeReverse(jstring arg0, jint arg1);
		jboolean baseIsLeftToRight();
		jint countParagraphs();
		jint countRuns();
		android::icu::text::Bidi createLineBidi(jint arg0, jint arg1);
		jint getBaseLevel();
		android::icu::text::BidiClassifier getCustomClassifier();
		jint getCustomizedClass(jint arg0);
		jbyte getDirection();
		jint getLength();
		jbyte getLevelAt(jint arg0);
		jbyteArray getLevels();
		jint getLogicalIndex(jint arg0);
		jintArray getLogicalMap();
		android::icu::text::BidiRun getLogicalRun(jint arg0);
		jbyte getParaLevel();
		android::icu::text::BidiRun getParagraph(jint arg0);
		android::icu::text::BidiRun getParagraphByIndex(jint arg0);
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
		android::icu::text::BidiRun getVisualRun(jint arg0);
		jboolean isInverse();
		jboolean isLeftToRight();
		jboolean isMixed();
		jboolean isOrderParagraphsLTR();
		jboolean isRightToLeft();
		void orderParagraphsLTR(jboolean arg0);
		void setContext(jstring arg0, jstring arg1);
		void setCustomClassifier(android::icu::text::BidiClassifier arg0);
		void setInverse(jboolean arg0);
		android::icu::text::Bidi setLine(jint arg0, jint arg1);
		void setPara(JObject arg0);
		void setPara(jcharArray arg0, jbyte arg1, jbyteArray arg2);
		void setPara(jstring arg0, jbyte arg1, jbyteArray arg2);
		void setReorderingMode(jint arg0);
		void setReorderingOptions(jint arg0);
		jstring writeReordered(jint arg0);
	};
} // namespace android::icu::text

