#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class RuleBasedCollator;
}

namespace java::text
{
	class CollationElementIterator : public JObject
	{
	public:
		// Fields
		static jint NULLORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationElementIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationElementIterator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint primaryOrder(jint arg0);
		static jshort secondaryOrder(jint arg0);
		static jshort tertiaryOrder(jint arg0);
		jint getMaxExpansion(jint arg0) const;
		jint getOffset() const;
		jint next() const;
		jint previous() const;
		void reset() const;
		void setOffset(jint arg0) const;
		void setText(JString arg0) const;
		void setText(JObject arg0) const;
	};
} // namespace java::text

