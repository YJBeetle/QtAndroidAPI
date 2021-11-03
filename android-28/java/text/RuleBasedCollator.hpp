#pragma once

#include "./Collator.hpp"

class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class CollationElementIterator;
}
namespace java::text
{
	class CollationKey;
}

namespace java::text
{
	class RuleBasedCollator : public java::text::Collator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RuleBasedCollator(const char *className, const char *sig, Ts...agv) : java::text::Collator(className, sig, std::forward<Ts>(agv)...) {}
		RuleBasedCollator(QAndroidJniObject obj);
		
		// Constructors
		RuleBasedCollator(JString arg0);
		
		// Methods
		JObject clone();
		jint compare(JString arg0, JString arg1);
		jboolean equals(JObject arg0);
		java::text::CollationElementIterator getCollationElementIterator(JString arg0);
		java::text::CollationElementIterator getCollationElementIterator(JObject arg0);
		java::text::CollationKey getCollationKey(JString arg0);
		JString getRules();
		jint hashCode();
	};
} // namespace java::text

