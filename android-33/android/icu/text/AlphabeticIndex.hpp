#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./AlphabeticIndex_ImmutableIndex.def.hpp"
#include "./RuleBasedCollator.def.hpp"
#include "./UnicodeSet.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./AlphabeticIndex.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline AlphabeticIndex::AlphabeticIndex(android::icu::text::RuleBasedCollator arg0)
		: JObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object()
		) {}
	inline AlphabeticIndex::AlphabeticIndex(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.AlphabeticIndex",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline AlphabeticIndex::AlphabeticIndex(java::util::Locale arg0)
		: JObject(
			"android.icu.text.AlphabeticIndex",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::addLabels(JArray arg0) const
	{
		return callObjectMethod(
			"addLabels",
			"([Landroid/icu/util/ULocale;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jarray>()
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::addLabels(android::icu::text::UnicodeSet arg0) const
	{
		return callObjectMethod(
			"addLabels",
			"(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object()
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::addRecord(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addRecord",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline android::icu::text::AlphabeticIndex_ImmutableIndex AlphabeticIndex::buildImmutableIndex() const
	{
		return callObjectMethod(
			"buildImmutableIndex",
			"()Landroid/icu/text/AlphabeticIndex$ImmutableIndex;"
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::clearRecords() const
	{
		return callObjectMethod(
			"clearRecords",
			"()Landroid/icu/text/AlphabeticIndex;"
		);
	}
	inline jint AlphabeticIndex::getBucketCount() const
	{
		return callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	inline jint AlphabeticIndex::getBucketIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline JObject AlphabeticIndex::getBucketLabels() const
	{
		return callObjectMethod(
			"getBucketLabels",
			"()Ljava/util/List;"
		);
	}
	inline android::icu::text::RuleBasedCollator AlphabeticIndex::getCollator() const
	{
		return callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	inline JString AlphabeticIndex::getInflowLabel() const
	{
		return callObjectMethod(
			"getInflowLabel",
			"()Ljava/lang/String;"
		);
	}
	inline jint AlphabeticIndex::getMaxLabelCount() const
	{
		return callMethod<jint>(
			"getMaxLabelCount",
			"()I"
		);
	}
	inline JString AlphabeticIndex::getOverflowLabel() const
	{
		return callObjectMethod(
			"getOverflowLabel",
			"()Ljava/lang/String;"
		);
	}
	inline jint AlphabeticIndex::getRecordCount() const
	{
		return callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	inline JString AlphabeticIndex::getUnderflowLabel() const
	{
		return callObjectMethod(
			"getUnderflowLabel",
			"()Ljava/lang/String;"
		);
	}
	inline JObject AlphabeticIndex::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::setInflowLabel(JString arg0) const
	{
		return callObjectMethod(
			"setInflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::setMaxLabelCount(jint arg0) const
	{
		return callObjectMethod(
			"setMaxLabelCount",
			"(I)Landroid/icu/text/AlphabeticIndex;",
			arg0
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::setOverflowLabel(JString arg0) const
	{
		return callObjectMethod(
			"setOverflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::AlphabeticIndex AlphabeticIndex::setUnderflowLabel(JString arg0) const
	{
		return callObjectMethod(
			"setUnderflowLabel",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
