#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./AlphabeticIndex_ImmutableIndex.hpp"
#include "./RuleBasedCollator.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./AlphabeticIndex.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	AlphabeticIndex::AlphabeticIndex(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlphabeticIndex::AlphabeticIndex(android::icu::text::RuleBasedCollator arg0)
		: JObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object()
		) {}
	AlphabeticIndex::AlphabeticIndex(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	AlphabeticIndex::AlphabeticIndex(java::util::Locale arg0)
		: JObject(
			"android.icu.text.AlphabeticIndex",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	android::icu::text::AlphabeticIndex AlphabeticIndex::addLabels(JArray arg0)
	{
		return callObjectMethod(
			"addLabels",
			"([Landroid/icu/util/ULocale;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jarray>()
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::addLabels(android::icu::text::UnicodeSet arg0)
	{
		return callObjectMethod(
			"addLabels",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object()
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::addRecord(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"addRecord",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	android::icu::text::AlphabeticIndex_ImmutableIndex AlphabeticIndex::buildImmutableIndex()
	{
		return callObjectMethod(
			"buildImmutableIndex",
			"()Landroid/icu/text/AlphabeticIndex$ImmutableIndex;"
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::clearRecords()
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
	jint AlphabeticIndex::getBucketIndex(JString arg0)
	{
		return callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	JObject AlphabeticIndex::getBucketLabels()
	{
		return callObjectMethod(
			"getBucketLabels",
			"()Ljava/util/List;"
		);
	}
	android::icu::text::RuleBasedCollator AlphabeticIndex::getCollator()
	{
		return callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	JString AlphabeticIndex::getInflowLabel()
	{
		return callObjectMethod(
			"getInflowLabel",
			"()Ljava/lang/String;"
		);
	}
	jint AlphabeticIndex::getMaxLabelCount()
	{
		return callMethod<jint>(
			"getMaxLabelCount",
			"()I"
		);
	}
	JString AlphabeticIndex::getOverflowLabel()
	{
		return callObjectMethod(
			"getOverflowLabel",
			"()Ljava/lang/String;"
		);
	}
	jint AlphabeticIndex::getRecordCount()
	{
		return callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	JString AlphabeticIndex::getUnderflowLabel()
	{
		return callObjectMethod(
			"getUnderflowLabel",
			"()Ljava/lang/String;"
		);
	}
	JObject AlphabeticIndex::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::setInflowLabel(JString arg0)
	{
		return callObjectMethod(
			"setInflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::setMaxLabelCount(jint arg0)
	{
		return callObjectMethod(
			"setMaxLabelCount",
			"(I)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::setOverflowLabel(JString arg0)
	{
		return callObjectMethod(
			"setOverflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::AlphabeticIndex AlphabeticIndex::setUnderflowLabel(JString arg0)
	{
		return callObjectMethod(
			"setUnderflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

