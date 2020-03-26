#pragma once

#ifndef ANDROID_ICU_TEXT_ALPHABETICINDEX
#define ANDROID_ICU_TEXT_ALPHABETICINDEX

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class RuleBasedCollator;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}
namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_ImmutableIndex;
}

namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::icu::text::RuleBasedCollator arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		
		// Methods
		QAndroidJniObject iterator();
		QAndroidJniObject getCollator();
		jint getBucketCount();
		jint getBucketIndex(jstring arg0);
		QAndroidJniObject setOverflowLabel(jstring arg0);
		QAndroidJniObject addLabels(jarray arg0);
		QAndroidJniObject addLabels(__jni_impl::android::icu::text::UnicodeSet arg0);
		jstring getUnderflowLabel();
		QAndroidJniObject setUnderflowLabel(jstring arg0);
		jstring getOverflowLabel();
		QAndroidJniObject setInflowLabel(jstring arg0);
		jstring getInflowLabel();
		jint getMaxLabelCount();
		QAndroidJniObject setMaxLabelCount(jint arg0);
		QAndroidJniObject buildImmutableIndex();
		QAndroidJniObject getBucketLabels();
		QAndroidJniObject addRecord(jstring arg0, jobject arg1);
		QAndroidJniObject clearRecords();
		jint getRecordCount();
	};
} // namespace __jni_impl::android::icu::text

#include "RuleBasedCollator.hpp"
#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"
#include "UnicodeSet.hpp"
#include "AlphabeticIndex_ImmutableIndex.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void AlphabeticIndex::__constructor(__jni_impl::android::icu::text::RuleBasedCollator arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.__jniObject().object());
	}
	void AlphabeticIndex::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void AlphabeticIndex::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject AlphabeticIndex::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject AlphabeticIndex::getCollator()
	{
		return __thiz.callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	jint AlphabeticIndex::getBucketCount()
	{
		return __thiz.callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	jint AlphabeticIndex::getBucketIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::setOverflowLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setOverflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::addLabels(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"addLabels",
			"([Landroid/icu/util/ULocale;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::addLabels(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"addLabels",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/AlphabeticIndex;",
			arg0.__jniObject().object()
		);
	}
	jstring AlphabeticIndex::getUnderflowLabel()
	{
		return __thiz.callObjectMethod(
			"getUnderflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AlphabeticIndex::setUnderflowLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUnderflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	jstring AlphabeticIndex::getOverflowLabel()
	{
		return __thiz.callObjectMethod(
			"getOverflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AlphabeticIndex::setInflowLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setInflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	jstring AlphabeticIndex::getInflowLabel()
	{
		return __thiz.callObjectMethod(
			"getInflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AlphabeticIndex::getMaxLabelCount()
	{
		return __thiz.callMethod<jint>(
			"getMaxLabelCount",
			"()I"
		);
	}
	QAndroidJniObject AlphabeticIndex::setMaxLabelCount(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxLabelCount",
			"(I)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::buildImmutableIndex()
	{
		return __thiz.callObjectMethod(
			"buildImmutableIndex",
			"()Landroid/icu/text/AlphabeticIndex$ImmutableIndex;"
		);
	}
	QAndroidJniObject AlphabeticIndex::getBucketLabels()
	{
		return __thiz.callObjectMethod(
			"getBucketLabels",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AlphabeticIndex::addRecord(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"addRecord",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Landroid/icu/text/AlphabeticIndex;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AlphabeticIndex::clearRecords()
	{
		return __thiz.callObjectMethod(
			"clearRecords",
			"()Landroid/icu/text/AlphabeticIndex;"
		);
	}
	jint AlphabeticIndex::getRecordCount()
	{
		return __thiz.callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class AlphabeticIndex : public __jni_impl::android::icu::text::AlphabeticIndex
	{
	public:
		AlphabeticIndex(QAndroidJniObject obj) { __thiz = obj; }
		AlphabeticIndex(__jni_impl::android::icu::text::RuleBasedCollator arg0)
		{
			__constructor(
				arg0);
		}
		AlphabeticIndex(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		AlphabeticIndex(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_ALPHABETICINDEX

