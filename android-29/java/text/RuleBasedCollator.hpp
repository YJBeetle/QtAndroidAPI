#pragma once

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
		void __constructor(const QString &arg0);
		
		// Methods
		jobject clone();
		jint compare(jstring arg0, jstring arg1);
		jint compare(const QString &arg0, const QString &arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getCollationElementIterator(jstring arg0);
		QAndroidJniObject getCollationElementIterator(const QString &arg0);
		QAndroidJniObject getCollationElementIterator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCollationKey(jstring arg0);
		QAndroidJniObject getCollationKey(const QString &arg0);
		jstring getRules();
		jint hashCode();
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
			arg0
		);
	}
	void RuleBasedCollator::__constructor(const QString &arg0)
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
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(__jni_impl::__JniBaseClass arg0)
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

