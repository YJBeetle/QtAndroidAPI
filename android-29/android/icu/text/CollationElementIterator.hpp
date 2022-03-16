#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class RuleBasedCollator;
}
namespace android::icu::text
{
	class UCharacterIterator;
}
class JObject;
class JString;

namespace android::icu::text
{
	class CollationElementIterator : public JObject
	{
	public:
		// Fields
		static jint IGNORABLE();
		static jint NULLORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationElementIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationElementIterator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint primaryOrder(jint arg0);
		static jint secondaryOrder(jint arg0);
		static jint tertiaryOrder(jint arg0);
		jboolean equals(JObject arg0) const;
		jint getMaxExpansion(jint arg0) const;
		jint getOffset() const;
		jint hashCode() const;
		jint next() const;
		jint previous() const;
		void reset() const;
		void setOffset(jint arg0) const;
		void setText(android::icu::text::UCharacterIterator arg0) const;
		void setText(JString arg0) const;
		void setText(JObject arg0) const;
	};
} // namespace android::icu::text

