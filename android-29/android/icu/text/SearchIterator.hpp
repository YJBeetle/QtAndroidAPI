#pragma once

#ifndef ANDROID_ICU_TEXT_SEARCHITERATOR
#define ANDROID_ICU_TEXT_SEARCHITERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class BreakIterator;
}
namespace __jni_impl::android::icu::text
{
	class SearchIterator_ElementComparisonType;
}

namespace __jni_impl::android::icu::text
{
	class SearchIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint next();
		jint last();
		jint first();
		QAndroidJniObject getTarget();
		void setTarget(__jni_impl::__JniBaseClass arg0);
		void reset();
		jint getIndex();
		void setIndex(jint arg0);
		jint previous();
		jint following(jint arg0);
		jint preceding(jint arg0);
		void setOverlapping(jboolean arg0);
		void setBreakIterator(__jni_impl::android::icu::text::BreakIterator arg0);
		jint getMatchStart();
		jint getMatchLength();
		QAndroidJniObject getBreakIterator();
		jstring getMatchedText();
		jboolean isOverlapping();
		void setElementComparisonType(__jni_impl::android::icu::text::SearchIterator_ElementComparisonType arg0);
		QAndroidJniObject getElementComparisonType();
	};
} // namespace __jni_impl::android::icu::text

#include "BreakIterator.hpp"
#include "SearchIterator_ElementComparisonType.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint SearchIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.SearchIterator",
			"DONE"
		);
	}
	
	// Constructors
	void SearchIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SearchIterator",
			"(V)V");
	}
	
	// Methods
	jint SearchIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint SearchIterator::last()
	{
		return __thiz.callMethod<jint>(
			"last",
			"()I"
		);
	}
	jint SearchIterator::first()
	{
		return __thiz.callMethod<jint>(
			"first",
			"()I"
		);
	}
	QAndroidJniObject SearchIterator::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/text/CharacterIterator;"
		);
	}
	void SearchIterator::setTarget(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void SearchIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint SearchIterator::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	void SearchIterator::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	jint SearchIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I"
		);
	}
	jint SearchIterator::following(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	jint SearchIterator::preceding(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	void SearchIterator::setOverlapping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOverlapping",
			"(Z)V",
			arg0
		);
	}
	void SearchIterator::setBreakIterator(__jni_impl::android::icu::text::BreakIterator arg0)
	{
		__thiz.callMethod<void>(
			"setBreakIterator",
			"(Landroid/icu/text/BreakIterator;)V",
			arg0.__jniObject().object()
		);
	}
	jint SearchIterator::getMatchStart()
	{
		return __thiz.callMethod<jint>(
			"getMatchStart",
			"()I"
		);
	}
	jint SearchIterator::getMatchLength()
	{
		return __thiz.callMethod<jint>(
			"getMatchLength",
			"()I"
		);
	}
	QAndroidJniObject SearchIterator::getBreakIterator()
	{
		return __thiz.callObjectMethod(
			"getBreakIterator",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	jstring SearchIterator::getMatchedText()
	{
		return __thiz.callObjectMethod(
			"getMatchedText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SearchIterator::isOverlapping()
	{
		return __thiz.callMethod<jboolean>(
			"isOverlapping",
			"()Z"
		);
	}
	void SearchIterator::setElementComparisonType(__jni_impl::android::icu::text::SearchIterator_ElementComparisonType arg0)
	{
		__thiz.callMethod<void>(
			"setElementComparisonType",
			"(Landroid/icu/text/SearchIterator$ElementComparisonType;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SearchIterator::getElementComparisonType()
	{
		return __thiz.callObjectMethod(
			"getElementComparisonType",
			"()Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class SearchIterator : public __jni_impl::android::icu::text::SearchIterator
	{
	public:
		SearchIterator(QAndroidJniObject obj) { __thiz = obj; }
		SearchIterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_SEARCHITERATOR

