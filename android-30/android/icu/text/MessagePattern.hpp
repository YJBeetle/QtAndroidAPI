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
class JObject;
class JString;

namespace android::icu::text
{
	class MessagePattern : public JObject
	{
	public:
		// Fields
		static jint ARG_NAME_NOT_NUMBER();
		static jint ARG_NAME_NOT_VALID();
		static jdouble NO_NUMERIC_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePattern(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern(QAndroidJniObject obj);
		
		// Constructors
		MessagePattern();
		MessagePattern(android::icu::text::MessagePattern_ApostropheMode arg0);
		MessagePattern(JString arg0);
		
		// Methods
		static jint validateArgumentName(JString arg0);
		JString autoQuoteApostropheDeep();
		void clear();
		void clearPatternAndSetApostropheMode(android::icu::text::MessagePattern_ApostropheMode arg0);
		JObject clone();
		android::icu::text::MessagePattern cloneAsThawed();
		jint countParts();
		jboolean equals(JObject arg0);
		android::icu::text::MessagePattern freeze();
		android::icu::text::MessagePattern_ApostropheMode getApostropheMode();
		jint getLimitPartIndex(jint arg0);
		jdouble getNumericValue(android::icu::text::MessagePattern_Part arg0);
		android::icu::text::MessagePattern_Part getPart(jint arg0);
		android::icu::text::MessagePattern_Part_Type getPartType(jint arg0);
		jint getPatternIndex(jint arg0);
		JString getPatternString();
		jdouble getPluralOffset(jint arg0);
		JString getSubstring(android::icu::text::MessagePattern_Part arg0);
		jboolean hasNamedArguments();
		jboolean hasNumberedArguments();
		jint hashCode();
		jboolean isFrozen();
		android::icu::text::MessagePattern parse(JString arg0);
		android::icu::text::MessagePattern parseChoiceStyle(JString arg0);
		android::icu::text::MessagePattern parsePluralStyle(JString arg0);
		android::icu::text::MessagePattern parseSelectStyle(JString arg0);
		jboolean partSubstringMatches(android::icu::text::MessagePattern_Part arg0, JString arg1);
		JString toString();
	};
} // namespace android::icu::text

