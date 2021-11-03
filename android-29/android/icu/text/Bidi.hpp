#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JCharArray;
class JIntArray;
class JObjectArray;
namespace android::icu::text
{
	class BidiClassifier;
}
namespace android::icu::text
{
	class BidiRun;
}
class JString;
class JString;

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
		Bidi(JString arg0, jint arg1);
		Bidi(JCharArray arg0, jint arg1, JByteArray arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static jbyte getBaseDirection(JString arg0);
		static JIntArray invertMap(JIntArray arg0);
		static JIntArray reorderLogical(JByteArray arg0);
		static JIntArray reorderVisual(JByteArray arg0);
		static void reorderVisually(JByteArray arg0, jint arg1, JObjectArray arg2, jint arg3, jint arg4);
		static jboolean requiresBidi(JCharArray arg0, jint arg1, jint arg2);
		static JString writeReverse(JString arg0, jint arg1);
		jboolean baseIsLeftToRight() const;
		jint countParagraphs() const;
		jint countRuns() const;
		android::icu::text::Bidi createLineBidi(jint arg0, jint arg1) const;
		jint getBaseLevel() const;
		android::icu::text::BidiClassifier getCustomClassifier() const;
		jint getCustomizedClass(jint arg0) const;
		jbyte getDirection() const;
		jint getLength() const;
		jbyte getLevelAt(jint arg0) const;
		JByteArray getLevels() const;
		jint getLogicalIndex(jint arg0) const;
		JIntArray getLogicalMap() const;
		android::icu::text::BidiRun getLogicalRun(jint arg0) const;
		jbyte getParaLevel() const;
		android::icu::text::BidiRun getParagraph(jint arg0) const;
		android::icu::text::BidiRun getParagraphByIndex(jint arg0) const;
		jint getParagraphIndex(jint arg0) const;
		jint getProcessedLength() const;
		jint getReorderingMode() const;
		jint getReorderingOptions() const;
		jint getResultLength() const;
		jint getRunCount() const;
		jint getRunLevel(jint arg0) const;
		jint getRunLimit(jint arg0) const;
		jint getRunStart(jint arg0) const;
		JCharArray getText() const;
		JString getTextAsString() const;
		jint getVisualIndex(jint arg0) const;
		JIntArray getVisualMap() const;
		android::icu::text::BidiRun getVisualRun(jint arg0) const;
		jboolean isInverse() const;
		jboolean isLeftToRight() const;
		jboolean isMixed() const;
		jboolean isOrderParagraphsLTR() const;
		jboolean isRightToLeft() const;
		void orderParagraphsLTR(jboolean arg0) const;
		void setContext(JString arg0, JString arg1) const;
		void setCustomClassifier(android::icu::text::BidiClassifier arg0) const;
		void setInverse(jboolean arg0) const;
		android::icu::text::Bidi setLine(jint arg0, jint arg1) const;
		void setPara(JObject arg0) const;
		void setPara(JCharArray arg0, jbyte arg1, JByteArray arg2) const;
		void setPara(JString arg0, jbyte arg1, JByteArray arg2) const;
		void setReorderingMode(jint arg0) const;
		void setReorderingOptions(jint arg0) const;
		JString writeReordered(jint arg0) const;
	};
} // namespace android::icu::text

