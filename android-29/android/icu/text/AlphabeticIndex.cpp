#include "./AlphabeticIndex_ImmutableIndex.hpp"
#include "./RuleBasedCollator.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./AlphabeticIndex.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	AlphabeticIndex::AlphabeticIndex(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlphabeticIndex::AlphabeticIndex(android::icu::text::RuleBasedCollator arg0)
		: __JniBaseClass(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object()
		) {}
	AlphabeticIndex::AlphabeticIndex(android::icu::util::ULocale arg0)
		: __JniBaseClass(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	AlphabeticIndex::AlphabeticIndex(java::util::Locale arg0)
		: __JniBaseClass(
			"android.icu.text.AlphabeticIndex",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject AlphabeticIndex::addLabels(jarray arg0)
	{
		return callObjectMethod(
			"addLabels",
			"([Landroid/icu/util/ULocale;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::addLabels(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"addLabels",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object()
		);
	}
	QAndroidJniObject AlphabeticIndex::addRecord(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"addRecord",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Landroid/icu/text/AlphabeticIndex;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AlphabeticIndex::buildImmutableIndex()
	{
		return callObjectMethod(
			"buildImmutableIndex",
			"()Landroid/icu/text/AlphabeticIndex$ImmutableIndex;"
		);
	}
	QAndroidJniObject AlphabeticIndex::clearRecords()
	{
		return callObjectMethod(
			"clearRecords",
			"()Landroid/icu/text/AlphabeticIndex;"
		);
	}
	jint AlphabeticIndex::getBucketCount()
	{
		return callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	jint AlphabeticIndex::getBucketIndex(jstring arg0)
	{
		return callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::getBucketLabels()
	{
		return callObjectMethod(
			"getBucketLabels",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AlphabeticIndex::getCollator()
	{
		return callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	jstring AlphabeticIndex::getInflowLabel()
	{
		return callObjectMethod(
			"getInflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AlphabeticIndex::getMaxLabelCount()
	{
		return callMethod<jint>(
			"getMaxLabelCount",
			"()I"
		);
	}
	jstring AlphabeticIndex::getOverflowLabel()
	{
		return callObjectMethod(
			"getOverflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AlphabeticIndex::getRecordCount()
	{
		return callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	jstring AlphabeticIndex::getUnderflowLabel()
	{
		return callObjectMethod(
			"getUnderflowLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AlphabeticIndex::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject AlphabeticIndex::setInflowLabel(jstring arg0)
	{
		return callObjectMethod(
			"setInflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::setMaxLabelCount(jint arg0)
	{
		return callObjectMethod(
			"setMaxLabelCount",
			"(I)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::setOverflowLabel(jstring arg0)
	{
		return callObjectMethod(
			"setOverflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex::setUnderflowLabel(jstring arg0)
	{
		return callObjectMethod(
			"setUnderflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
} // namespace android::icu::text

