#pragma once

#ifndef JAVA_TEXT_COLLATOR
#define JAVA_TEXT_COLLATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::text
{
	class CollationKey;
}

namespace __jni_impl::java::text
{
	class Collator : public __JniBaseClass
	{
	public:
		// Fields
		static jint PRIMARY();
		static jint SECONDARY();
		static jint TERTIARY();
		static jint IDENTICAL();
		static jint NO_DECOMPOSITION();
		static jint CANONICAL_DECOMPOSITION();
		static jint FULL_DECOMPOSITION();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jstring arg0, jstring arg1);
		jboolean equals(const QString &arg0, const QString &arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		jint compare(jobject arg0, jobject arg1);
		jint compare(jstring arg0, jstring arg1);
		jint compare(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static jarray getAvailableLocales();
		void setStrength(jint arg0);
		void setDecomposition(jint arg0);
		jint getStrength();
		jint getDecomposition();
		QAndroidJniObject getCollationKey(jstring arg0);
		QAndroidJniObject getCollationKey(const QString &arg0);
	};
} // namespace __jni_impl::java::text

#include "../util/Locale.hpp"
#include "CollationKey.hpp"

namespace __jni_impl::java::text
{
	// Fields
	jint Collator::PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"PRIMARY"
		);
	}
	jint Collator::SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"SECONDARY"
		);
	}
	jint Collator::TERTIARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"TERTIARY"
		);
	}
	jint Collator::IDENTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"IDENTICAL"
		);
	}
	jint Collator::NO_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"NO_DECOMPOSITION"
		);
	}
	jint Collator::CANONICAL_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"CANONICAL_DECOMPOSITION"
		);
	}
	jint Collator::FULL_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.Collator",
			"FULL_DECOMPOSITION"
		);
	}
	
	// Constructors
	void Collator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.Collator",
			"(V)V");
	}
	
	// Methods
	jboolean Collator::equals(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean Collator::equals(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean Collator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Collator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject Collator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Collator::compare(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint Collator::compare(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Collator::compare(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Collator::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Collator",
			"getInstance",
			"()Ljava/text/Collator;"
		);
	}
	QAndroidJniObject Collator::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Collator",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/Collator;",
			arg0.__jniObject().object()
		);
	}
	jarray Collator::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	void Collator::setStrength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
	void Collator::setDecomposition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	jint Collator::getStrength()
	{
		return __thiz.callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	jint Collator::getDecomposition()
	{
		return __thiz.callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	QAndroidJniObject Collator::getCollationKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0
		);
	}
	QAndroidJniObject Collator::getCollationKey(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class Collator : public __jni_impl::java::text::Collator
	{
	public:
		Collator(QAndroidJniObject obj) { __thiz = obj; }
		Collator()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_COLLATOR

