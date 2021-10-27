#pragma once

#ifndef ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR
#define ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class RuleBasedCollator;
}
namespace __jni_impl::android::icu::text
{
	class UCharacterIterator;
}

namespace __jni_impl::android::icu::text
{
	class CollationElementIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint IGNORABLE();
		static jint NULLORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint primaryOrder(jint arg0);
		static jint secondaryOrder(jint arg0);
		static jint tertiaryOrder(jint arg0);
		jboolean equals(jobject arg0);
		jint getMaxExpansion(jint arg0);
		jint getOffset();
		jint hashCode();
		jint next();
		jint previous();
		void reset();
		void setOffset(jint arg0);
		void setText(__jni_impl::android::icu::text::UCharacterIterator arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setText(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "RuleBasedCollator.hpp"
#include "UCharacterIterator.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint CollationElementIterator::IGNORABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"IGNORABLE"
		);
	}
	jint CollationElementIterator::NULLORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	// Constructors
	void CollationElementIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CollationElementIterator",
			"(V)V");
	}
	
	// Methods
	jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::secondaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"secondaryOrder",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)I",
			arg0
		);
	}
	jboolean CollationElementIterator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CollationElementIterator::getMaxExpansion(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaxExpansion",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint CollationElementIterator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CollationElementIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint CollationElementIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void CollationElementIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void CollationElementIterator::setOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOffset",
			"(I)V",
			arg0
		);
	}
	void CollationElementIterator::setText(__jni_impl::android::icu::text::UCharacterIterator arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Landroid/icu/text/UCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void CollationElementIterator::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CollationElementIterator::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CollationElementIterator::setText(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CollationElementIterator : public __jni_impl::android::icu::text::CollationElementIterator
	{
	public:
		CollationElementIterator(QAndroidJniObject obj) { __thiz = obj; }
		CollationElementIterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_COLLATIONELEMENTITERATOR

