#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class UnicodeSet_SpanCondition : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONDITION_COUNT();
		static QAndroidJniObject CONTAINED();
		static QAndroidJniObject NOT_CONTAINED();
		static QAndroidJniObject SIMPLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject UnicodeSet_SpanCondition::CONDITION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONDITION_COUNT",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::CONTAINED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::NOT_CONTAINED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"NOT_CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::SIMPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"SIMPLE",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	
	// Constructors
	void UnicodeSet_SpanCondition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet$SpanCondition",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UnicodeSet_SpanCondition::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet_SpanCondition::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray UnicodeSet_SpanCondition::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"values",
			"()[Landroid/icu/text/UnicodeSet$SpanCondition;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSet_SpanCondition : public __jni_impl::android::icu::text::UnicodeSet_SpanCondition
	{
	public:
		UnicodeSet_SpanCondition(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSet_SpanCondition()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

