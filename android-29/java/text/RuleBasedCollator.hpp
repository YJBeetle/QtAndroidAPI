#pragma once

#ifndef JAVA_TEXT_RULEBASEDCOLLATOR
#define JAVA_TEXT_RULEBASEDCOLLATOR

#include "../../__JniBaseClass.hpp"
#include "Collator.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class CollationElementIterator;
}
namespace __jni_impl::java::text
{
	class CollationKey;
}

namespace __jni_impl::java::text
{
	class RuleBasedCollator : public __jni_impl::java::text::Collator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		jint compare(jstring arg0, jstring arg1);
		QAndroidJniObject getRules();
		QAndroidJniObject getCollationElementIterator(jstring arg0);
		QAndroidJniObject getCollationElementIterator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCollationKey(jstring arg0);
	};
} // namespace __jni_impl::java::text

#include "../lang/StringBuffer.hpp"
#include "CollationElementIterator.hpp"
#include "CollationKey.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void RuleBasedCollator::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean RuleBasedCollator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint RuleBasedCollator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject RuleBasedCollator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint RuleBasedCollator::compare(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1);
	}
	QAndroidJniObject RuleBasedCollator::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Ljava/text/CollationElementIterator;",
			arg0);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject RuleBasedCollator::getCollationKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class RuleBasedCollator : public __jni_impl::java::text::RuleBasedCollator
	{
	public:
		RuleBasedCollator(QAndroidJniObject obj) { __thiz = obj; }
		RuleBasedCollator(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_RULEBASEDCOLLATOR

