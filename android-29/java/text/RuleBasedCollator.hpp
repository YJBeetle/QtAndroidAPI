#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Collator.hpp"

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
		
		RuleBasedCollator(QAndroidJniObject obj);
		// Constructors
		RuleBasedCollator(jstring &arg0);
		RuleBasedCollator(const QString &arg0);
		RuleBasedCollator() = default;
		
		// Methods
		jobject clone();
		jint compare(jstring arg0, jstring arg1);
		jint compare(const QString &arg0, const QString &arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getCollationElementIterator(jstring arg0);
		QAndroidJniObject getCollationElementIterator(const QString &arg0);
		QAndroidJniObject getCollationElementIterator(__JniBaseClass arg0);
		QAndroidJniObject getCollationKey(jstring arg0);
		QAndroidJniObject getCollationKey(const QString &arg0);
		jstring getRules();
		jint hashCode();
	};
} // namespace java::text

