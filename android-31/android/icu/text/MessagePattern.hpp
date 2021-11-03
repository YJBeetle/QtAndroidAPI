#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class MessagePattern_ApostropheMode;
}
namespace android::icu::text
{
	class MessagePattern_Part;
}
namespace android::icu::text
{
	class MessagePattern_Part_Type;
}

namespace android::icu::text
{
	class MessagePattern : public JObject
	{
	public:
		// Fields
		static jint ARG_NAME_NOT_NUMBER();
		static jint ARG_NAME_NOT_VALID();
		static jdouble NO_NUMERIC_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MessagePattern(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern(QJniObject obj);
		
		// Constructors
		MessagePattern();
		MessagePattern(android::icu::text::MessagePattern_ApostropheMode arg0);
		MessagePattern(jstring arg0);
		
		// Methods
		static jint validateArgumentName(jstring arg0);
		jstring autoQuoteApostropheDeep();
		void clear();
		void clearPatternAndSetApostropheMode(android::icu::text::MessagePattern_ApostropheMode arg0);
		jobject clone();
		android::icu::text::MessagePattern cloneAsThawed();
		jint countParts();
		jboolean equals(jobject arg0);
		android::icu::text::MessagePattern freeze();
		android::icu::text::MessagePattern_ApostropheMode getApostropheMode();
		jint getLimitPartIndex(jint arg0);
		jdouble getNumericValue(android::icu::text::MessagePattern_Part arg0);
		android::icu::text::MessagePattern_Part getPart(jint arg0);
		android::icu::text::MessagePattern_Part_Type getPartType(jint arg0);
		jint getPatternIndex(jint arg0);
		jstring getPatternString();
		jdouble getPluralOffset(jint arg0);
		jstring getSubstring(android::icu::text::MessagePattern_Part arg0);
		jboolean hasNamedArguments();
		jboolean hasNumberedArguments();
		jint hashCode();
		jboolean isFrozen();
		android::icu::text::MessagePattern parse(jstring arg0);
		android::icu::text::MessagePattern parseChoiceStyle(jstring arg0);
		android::icu::text::MessagePattern parsePluralStyle(jstring arg0);
		android::icu::text::MessagePattern parseSelectStyle(jstring arg0);
		jboolean partSubstringMatches(android::icu::text::MessagePattern_Part arg0, jstring arg1);
		jstring toString();
	};
} // namespace android::icu::text

