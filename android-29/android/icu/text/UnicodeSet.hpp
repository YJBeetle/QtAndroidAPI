#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODESET
#define ANDROID_ICU_TEXT_UNICODESET

#include "UnicodeFilter.hpp"

namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet_ComparisonStyle;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet_SpanCondition;
}

namespace __jni_impl::android::icu::text
{
	class UnicodeSet : public __jni_impl::android::icu::text::UnicodeFilter
	{
	public:
		// Fields
		static jint ADD_CASE_MAPPINGS();
		static QAndroidJniObject ALL_CODE_POINTS();
		static jint CASE();
		static jint CASE_INSENSITIVE();
		static QAndroidJniObject EMPTY();
		static jint IGNORE_SPACE();
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jstring arg0, __jni_impl::java::text::ParsePosition arg1, __jni_impl::__JniBaseClass arg2);
		void __constructor(jstring arg0, __jni_impl::java::text::ParsePosition arg1, __jni_impl::__JniBaseClass arg2, jint arg3);
		void __constructor();
		void __constructor(__jni_impl::android::icu::text::UnicodeSet arg0);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jintArray arg0);
		
		// Methods
		QAndroidJniObject add(jstring arg0);
		QAndroidJniObject add(jint arg0);
		QAndroidJniObject add(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject add(jint arg0, jint arg1);
		QAndroidJniObject remove(jint arg0);
		QAndroidJniObject remove(jint arg0, jint arg1);
		QAndroidJniObject remove(jstring arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject clone();
		jint compareTo(__jni_impl::__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::icu::text::UnicodeSet arg0);
		jint compareTo(__jni_impl::android::icu::text::UnicodeSet arg0, __jni_impl::android::icu::text::UnicodeSet_ComparisonStyle arg1);
		jint indexOf(jint arg0);
		QAndroidJniObject clear();
		jint charAt(jint arg0);
		jboolean isEmpty();
		jint matches(__jni_impl::__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3);
		jint size();
		QAndroidJniObject iterator();
		jboolean contains(jint arg0, jint arg1);
		jboolean contains(jstring arg0);
		jboolean contains(jint arg0);
		static QAndroidJniObject from(jstring arg0);
		QAndroidJniObject addAll(__jni_impl::android::icu::text::UnicodeSet arg0);
		QAndroidJniObject addAll(jint arg0, jint arg1);
		QAndroidJniObject addAll(jstring arg0);
		QAndroidJniObject addAll(jarray arg0);
		QAndroidJniObject addAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject set(__jni_impl::android::icu::text::UnicodeSet arg0);
		QAndroidJniObject set(jint arg0, jint arg1);
		jboolean isFrozen();
		QAndroidJniObject freeze();
		jboolean containsAll(__jni_impl::android::icu::text::UnicodeSet arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean containsAll(jstring arg0);
		QAndroidJniObject retainAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject retainAll(jstring arg0);
		QAndroidJniObject retainAll(__jni_impl::android::icu::text::UnicodeSet arg0);
		QAndroidJniObject removeAll(jstring arg0);
		QAndroidJniObject removeAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject removeAll(__jni_impl::android::icu::text::UnicodeSet arg0);
		QAndroidJniObject complement(jstring arg0);
		QAndroidJniObject complement(jint arg0, jint arg1);
		QAndroidJniObject complement();
		QAndroidJniObject complement(jint arg0);
		QAndroidJniObject applyPattern(jstring arg0, jboolean arg1);
		QAndroidJniObject applyPattern(jstring arg0, jint arg1);
		QAndroidJniObject applyPattern(jstring arg0);
		QAndroidJniObject toPattern(jboolean arg0);
		QAndroidJniObject strings();
		QAndroidJniObject compact();
		QAndroidJniObject retain(jint arg0);
		QAndroidJniObject retain(jint arg0, jint arg1);
		QAndroidJniObject retain(jstring arg0);
		QAndroidJniObject cloneAsThawed();
		QAndroidJniObject _generatePattern(__jni_impl::java::lang::StringBuffer arg0, jboolean arg1);
		QAndroidJniObject _generatePattern(__jni_impl::java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2);
		jboolean matchesIndexValue(jint arg0);
		void addMatchSetTo(__jni_impl::android::icu::text::UnicodeSet arg0);
		QAndroidJniObject complementAll(jstring arg0);
		QAndroidJniObject complementAll(__jni_impl::android::icu::text::UnicodeSet arg0);
		QAndroidJniObject removeAllStrings();
		static QAndroidJniObject fromAll(jstring arg0);
		jboolean containsNone(__jni_impl::android::icu::text::UnicodeSet arg0);
		jboolean containsNone(__jni_impl::__JniBaseClass arg0);
		jboolean containsNone(jint arg0, jint arg1);
		jboolean containsNone(jstring arg0);
		jboolean containsSome(__jni_impl::__JniBaseClass arg0);
		jboolean containsSome(jstring arg0);
		jboolean containsSome(__jni_impl::android::icu::text::UnicodeSet arg0);
		jboolean containsSome(jint arg0, jint arg1);
		jint getRangeCount();
		jint getRangeStart(jint arg0);
		jint getRangeEnd(jint arg0);
		QAndroidJniObject addAllTo(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject applyIntPropertyValue(jint arg0, jint arg1);
		QAndroidJniObject applyPropertyAlias(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject applyPropertyAlias(jstring arg0, jstring arg1);
		QAndroidJniObject closeOver(jint arg0);
		jint span(jstring arg0, jint arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2);
		jint span(jstring arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1);
		jint spanBack(jstring arg0, jint arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2);
		jint spanBack(jstring arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1);
		QAndroidJniObject ranges();
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/text/ParsePosition.hpp"
#include "UnicodeSet_ComparisonStyle.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "UnicodeSet_SpanCondition.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint UnicodeSet::ADD_CASE_MAPPINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"ADD_CASE_MAPPINGS");
	}
	QAndroidJniObject UnicodeSet::ALL_CODE_POINTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"ALL_CODE_POINTS",
			"Landroid/icu/text/UnicodeSet;");
	}
	jint UnicodeSet::CASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE");
	}
	jint UnicodeSet::CASE_INSENSITIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"CASE_INSENSITIVE");
	}
	QAndroidJniObject UnicodeSet::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet",
			"EMPTY",
			"Landroid/icu/text/UnicodeSet;");
	}
	jint UnicodeSet::IGNORE_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"IGNORE_SPACE");
	}
	jint UnicodeSet::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MAX_VALUE");
	}
	jint UnicodeSet::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSet",
			"MIN_VALUE");
	}
	
	// Constructors
	void UnicodeSet::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void UnicodeSet::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	void UnicodeSet::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void UnicodeSet::__constructor(jstring arg0, __jni_impl::java::text::ParsePosition arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void UnicodeSet::__constructor(jstring arg0, __jni_impl::java::text::ParsePosition arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	void UnicodeSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"()V");
	}
	void UnicodeSet::__constructor(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object());
	}
	void UnicodeSet::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"(II)V",
			arg0,
			arg1);
	}
	void UnicodeSet::__constructor(jintArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet",
			"([I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject UnicodeSet::add(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::add(jint arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::add(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::add(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::remove(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::remove(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	jboolean UnicodeSet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject UnicodeSet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint UnicodeSet::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject UnicodeSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint UnicodeSet::compareTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Iterable;)I",
			arg0.__jniObject().object());
	}
	jint UnicodeSet::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint UnicodeSet::compareTo(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;)I",
			arg0.__jniObject().object());
	}
	jint UnicodeSet::compareTo(__jni_impl::android::icu::text::UnicodeSet arg0, __jni_impl::android::icu::text::UnicodeSet_ComparisonStyle arg1)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$ComparisonStyle;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jint UnicodeSet::indexOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(I)I",
			arg0);
	}
	QAndroidJniObject UnicodeSet::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Landroid/icu/text/UnicodeSet;");
	}
	jint UnicodeSet::charAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"charAt",
			"(I)I",
			arg0);
	}
	jboolean UnicodeSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint UnicodeSet::matches(__jni_impl::__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	jint UnicodeSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject UnicodeSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean UnicodeSet::contains(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean UnicodeSet::contains(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/CharSequence;)Z",
			arg0);
	}
	jboolean UnicodeSet::contains(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject UnicodeSet::from(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"from",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::addAll(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::addAll(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::addAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::addAll(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"([Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::set(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"set",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::set(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	jboolean UnicodeSet::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z");
	}
	QAndroidJniObject UnicodeSet::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/UnicodeSet;");
	}
	jboolean UnicodeSet::containsAll(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.__jniObject().object());
	}
	jboolean UnicodeSet::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/Iterable;)Z",
			arg0.__jniObject().object());
	}
	jboolean UnicodeSet::containsAll(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject UnicodeSet::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"retainAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::retainAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"retainAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::retainAll(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"retainAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::removeAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"removeAll",
			"(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::removeAll(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"removeAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::complement(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"complement",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::complement(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"complement",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::complement()
	{
		return __thiz.callObjectMethod(
			"complement",
			"()Landroid/icu/text/UnicodeSet;");
	}
	QAndroidJniObject UnicodeSet::complement(jint arg0)
	{
		return __thiz.callObjectMethod(
			"complement",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::applyPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"applyPattern",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::toPattern(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"(Z)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::strings()
	{
		return __thiz.callObjectMethod(
			"strings",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject UnicodeSet::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Landroid/icu/text/UnicodeSet;");
	}
	QAndroidJniObject UnicodeSet::retain(jint arg0)
	{
		return __thiz.callObjectMethod(
			"retain",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::retain(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"retain",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::retain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"retain",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/UnicodeSet;");
	}
	QAndroidJniObject UnicodeSet::_generatePattern(__jni_impl::java::lang::StringBuffer arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;Z)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject UnicodeSet::_generatePattern(__jni_impl::java::lang::StringBuffer arg0, jboolean arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"_generatePattern",
			"(Ljava/lang/StringBuffer;ZZ)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jboolean UnicodeSet::matchesIndexValue(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matchesIndexValue",
			"(I)Z",
			arg0);
	}
	void UnicodeSet::addMatchSetTo(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		__thiz.callMethod<void>(
			"addMatchSetTo",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::complementAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"complementAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	QAndroidJniObject UnicodeSet::complementAll(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"complementAll",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::removeAllStrings()
	{
		return __thiz.callObjectMethod(
			"removeAllStrings",
			"()Landroid/icu/text/UnicodeSet;");
	}
	QAndroidJniObject UnicodeSet::fromAll(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet",
			"fromAll",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	jboolean UnicodeSet::containsNone(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.__jniObject().object());
	}
	jboolean UnicodeSet::containsNone(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/Iterable;)Z",
			arg0.__jniObject().object());
	}
	jboolean UnicodeSet::containsNone(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean UnicodeSet::containsNone(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsNone",
			"(Ljava/lang/CharSequence;)Z",
			arg0);
	}
	jboolean UnicodeSet::containsSome(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/Iterable;)Z",
			arg0.__jniObject().object());
	}
	jboolean UnicodeSet::containsSome(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(Ljava/lang/CharSequence;)Z",
			arg0);
	}
	jboolean UnicodeSet::containsSome(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(Landroid/icu/text/UnicodeSet;)Z",
			arg0.__jniObject().object());
	}
	jboolean UnicodeSet::containsSome(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"containsSome",
			"(II)Z",
			arg0,
			arg1);
	}
	jint UnicodeSet::getRangeCount()
	{
		return __thiz.callMethod<jint>(
			"getRangeCount",
			"()I");
	}
	jint UnicodeSet::getRangeStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRangeStart",
			"(I)I",
			arg0);
	}
	jint UnicodeSet::getRangeEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRangeEnd",
			"(I)I",
			arg0);
	}
	QAndroidJniObject UnicodeSet::addAllTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addAllTo",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::applyIntPropertyValue(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"applyIntPropertyValue",
			"(II)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::applyPropertyAlias(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::applyPropertyAlias(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"applyPropertyAlias",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/UnicodeSet;",
			arg0,
			arg1);
	}
	QAndroidJniObject UnicodeSet::closeOver(jint arg0)
	{
		return __thiz.callObjectMethod(
			"closeOver",
			"(I)Landroid/icu/text/UnicodeSet;",
			arg0);
	}
	jint UnicodeSet::span(jstring arg0, jint arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jint UnicodeSet::span(jstring arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callMethod<jint>(
			"span",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.__jniObject().object());
	}
	jint UnicodeSet::spanBack(jstring arg0, jint arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jint UnicodeSet::spanBack(jstring arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callMethod<jint>(
			"spanBack",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject UnicodeSet::ranges()
	{
		return __thiz.callObjectMethod(
			"ranges",
			"()Ljava/lang/Iterable;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSet : public __jni_impl::android::icu::text::UnicodeSet
	{
	public:
		UnicodeSet(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSet(jstring arg0)
		{
			__constructor(
				arg0);
		}
		UnicodeSet(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		UnicodeSet(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		UnicodeSet(jstring arg0, __jni_impl::java::text::ParsePosition arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		UnicodeSet(jstring arg0, __jni_impl::java::text::ParsePosition arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		UnicodeSet()
		{
			__constructor();
		}
		UnicodeSet(__jni_impl::android::icu::text::UnicodeSet arg0)
		{
			__constructor(
				arg0);
		}
		UnicodeSet(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		UnicodeSet(jintArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODESET

