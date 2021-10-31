#include "./AlphabeticIndex_ImmutableIndex.hpp"
#include "./RuleBasedCollator.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./AlphabeticIndex.hpp"

namespace android::icu::text
{
	// Fields
	
	AlphabeticIndex::AlphabeticIndex(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlphabeticIndex::AlphabeticIndex(android::icu::text::RuleBasedCollator arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.__jniObject().object()
		);
	}
	AlphabeticIndex::AlphabeticIndex(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	AlphabeticIndex::AlphabeticIndex(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AlphabeticIndex::addLabels(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"addLabels",
			"([Landroid/icu/util/ULocale;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::addLabels(android::icu::text::UnicodeSet arg0)
	{
		return __thiz.callObjectMethod(
			"addLabels",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/AlphabeticIndex;",
			arg0.__jniObject().object()
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
	QAndroidJniObject AlphabeticIndex::buildImmutableIndex()
	{
		return __thiz.callObjectMethod(
			"buildImmutableIndex",
			"()Landroid/icu/text/AlphabeticIndex$ImmutableIndex;"
		);
	}
	QAndroidJniObject AlphabeticIndex::clearRecords()
	{
		return __thiz.callObjectMethod(
			"clearRecords",
			"()Landroid/icu/text/AlphabeticIndex;"
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
	QAndroidJniObject AlphabeticIndex::getBucketLabels()
	{
		return __thiz.callObjectMethod(
			"getBucketLabels",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AlphabeticIndex::getCollator()
	{
		return __thiz.callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
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
	jstring AlphabeticIndex::getOverflowLabel()
	{
		return __thiz.callObjectMethod(
			"getOverflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AlphabeticIndex::getRecordCount()
	{
		return __thiz.callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	jstring AlphabeticIndex::getUnderflowLabel()
	{
		return __thiz.callObjectMethod(
			"getUnderflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AlphabeticIndex::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject AlphabeticIndex::setInflowLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setInflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
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
	QAndroidJniObject AlphabeticIndex::setOverflowLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setOverflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::setUnderflowLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUnderflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
} // namespace android::icu::text

