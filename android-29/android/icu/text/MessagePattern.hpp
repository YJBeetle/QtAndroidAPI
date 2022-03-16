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
		MessagePattern(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MessagePattern();
		MessagePattern(android::icu::text::MessagePattern_ApostropheMode arg0);
		MessagePattern(JString arg0);
		
		// Methods
		static jint validateArgumentName(JString arg0);
		JString autoQuoteApostropheDeep() const;
		void clear() const;
		void clearPatternAndSetApostropheMode(android::icu::text::MessagePattern_ApostropheMode arg0) const;
		JObject clone() const;
		android::icu::text::MessagePattern cloneAsThawed() const;
		jint countParts() const;
		jboolean equals(JObject arg0) const;
		android::icu::text::MessagePattern freeze() const;
		android::icu::text::MessagePattern_ApostropheMode getApostropheMode() const;
		jint getLimitPartIndex(jint arg0) const;
		jdouble getNumericValue(android::icu::text::MessagePattern_Part arg0) const;
		android::icu::text::MessagePattern_Part getPart(jint arg0) const;
		android::icu::text::MessagePattern_Part_Type getPartType(jint arg0) const;
		jint getPatternIndex(jint arg0) const;
		JString getPatternString() const;
		jdouble getPluralOffset(jint arg0) const;
		JString getSubstring(android::icu::text::MessagePattern_Part arg0) const;
		jboolean hasNamedArguments() const;
		jboolean hasNumberedArguments() const;
		jint hashCode() const;
		jboolean isFrozen() const;
		android::icu::text::MessagePattern parse(JString arg0) const;
		android::icu::text::MessagePattern parseChoiceStyle(JString arg0) const;
		android::icu::text::MessagePattern parsePluralStyle(JString arg0) const;
		android::icu::text::MessagePattern parseSelectStyle(JString arg0) const;
		jboolean partSubstringMatches(android::icu::text::MessagePattern_Part arg0, JString arg1) const;
		JString toString() const;
	};
} // namespace android::icu::text

