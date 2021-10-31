#pragma once

#include "../../__JniBaseClass.hpp"

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
	class CollationElementIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint NULLORDER();
		
		CollationElementIterator(QAndroidJniObject obj);
		// Constructors
		CollationElementIterator() = default;
		
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
		void setText(jstring arg0);
		void setText(__JniBaseClass arg0);
	};
} // namespace java::text

