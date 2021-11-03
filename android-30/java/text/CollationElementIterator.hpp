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
		CollationElementIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint primaryOrder(jint arg0);
		static jshort secondaryOrder(jint arg0);
		static jshort tertiaryOrder(jint arg0);
		jint getMaxExpansion(jint arg0);
		jint getOffset();
		jint next();
		jint previous();
		void reset();
		void setOffset(jint arg0);
		void setText(JString arg0);
		void setText(JObject arg0);
	};
} // namespace java::text

