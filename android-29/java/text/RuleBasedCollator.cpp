#include "../lang/StringBuffer.hpp"
#include "./CollationElementIterator.hpp"
#include "./CollationKey.hpp"
#include "./RuleBasedCollator.hpp"

namespace java::text
{
	// Fields
	
	RuleBasedCollator::RuleBasedCollator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RuleBasedCollator::RuleBasedCollator(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RuleBasedCollator::RuleBasedCollator(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jobject RuleBasedCollator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint RuleBasedCollator::compare(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint RuleBasedCollator::compare(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean RuleBasedCollator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Ljava/text/CollationElementIterator;",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Ljava/text/CollationElementIterator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationKey(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring RuleBasedCollator::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RuleBasedCollator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::text

