#pragma once

#ifndef ANDROID_ICU_TEXT_SEARCHITERATOR_ELEMENTCOMPARISONTYPE
#define ANDROID_ICU_TEXT_SEARCHITERATOR_ELEMENTCOMPARISONTYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class SearchIterator_ElementComparisonType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject STANDARD_ELEMENT_COMPARISON();
		static QAndroidJniObject PATTERN_BASE_WEIGHT_IS_WILDCARD();
		static QAndroidJniObject ANY_BASE_WEIGHT_IS_WILDCARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject SearchIterator_ElementComparisonType::STANDARD_ELEMENT_COMPARISON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"STANDARD_ELEMENT_COMPARISON",
			"Landroid/icu/text/SearchIterator$ElementComparisonType;");
	}
	QAndroidJniObject SearchIterator_ElementComparisonType::PATTERN_BASE_WEIGHT_IS_WILDCARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"PATTERN_BASE_WEIGHT_IS_WILDCARD",
			"Landroid/icu/text/SearchIterator$ElementComparisonType;");
	}
	QAndroidJniObject SearchIterator_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"ANY_BASE_WEIGHT_IS_WILDCARD",
			"Landroid/icu/text/SearchIterator$ElementComparisonType;");
	}
	
	// Constructors
	void SearchIterator_ElementComparisonType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SearchIterator_ElementComparisonType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"values",
			"()[Landroid/icu/text/SearchIterator$ElementComparisonType;");
	}
	QAndroidJniObject SearchIterator_ElementComparisonType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/SearchIterator$ElementComparisonType;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class SearchIterator_ElementComparisonType : public __jni_impl::android::icu::text::SearchIterator_ElementComparisonType
	{
	public:
		SearchIterator_ElementComparisonType(QAndroidJniObject obj) { __thiz = obj; }
		SearchIterator_ElementComparisonType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_SEARCHITERATOR_ELEMENTCOMPARISONTYPE

