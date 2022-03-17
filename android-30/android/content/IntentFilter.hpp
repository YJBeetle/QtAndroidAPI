#pragma once

#include "./ContentResolver.def.hpp"
#include "./Intent.def.hpp"
#include "./IntentFilter_AuthorityEntry.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/PatternMatcher.def.hpp"
#include "../../JString.hpp"
#include "./IntentFilter.def.hpp"

namespace android::content
{
	// Fields
	inline JObject IntentFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.content.IntentFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint IntentFilter::MATCH_ADJUSTMENT_MASK()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_ADJUSTMENT_MASK"
		);
	}
	inline jint IntentFilter::MATCH_ADJUSTMENT_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_ADJUSTMENT_NORMAL"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_EMPTY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_EMPTY"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_HOST()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_HOST"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_MASK()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_MASK"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_PATH()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_PATH"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_PORT()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_PORT"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_SCHEME()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_SCHEME"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_SCHEME_SPECIFIC_PART()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_SCHEME_SPECIFIC_PART"
		);
	}
	inline jint IntentFilter::MATCH_CATEGORY_TYPE()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_TYPE"
		);
	}
	inline jint IntentFilter::NO_MATCH_ACTION()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_ACTION"
		);
	}
	inline jint IntentFilter::NO_MATCH_CATEGORY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_CATEGORY"
		);
	}
	inline jint IntentFilter::NO_MATCH_DATA()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_DATA"
		);
	}
	inline jint IntentFilter::NO_MATCH_TYPE()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_TYPE"
		);
	}
	inline jint IntentFilter::SYSTEM_HIGH_PRIORITY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"SYSTEM_HIGH_PRIORITY"
		);
	}
	inline jint IntentFilter::SYSTEM_LOW_PRIORITY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"SYSTEM_LOW_PRIORITY"
		);
	}
	
	// Constructors
	inline IntentFilter::IntentFilter()
		: JObject(
			"android.content.IntentFilter",
			"()V"
		) {}
	inline IntentFilter::IntentFilter(android::content::IntentFilter &arg0)
		: JObject(
			"android.content.IntentFilter",
			"(Landroid/content/IntentFilter;)V",
			arg0.object()
		) {}
	inline IntentFilter::IntentFilter(JString arg0)
		: JObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IntentFilter::IntentFilter(JString arg0, JString arg1)
		: JObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::content::IntentFilter IntentFilter::create(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.IntentFilter",
			"create",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/IntentFilter;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject IntentFilter::actionsIterator() const
	{
		return callObjectMethod(
			"actionsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void IntentFilter::addAction(JString arg0) const
	{
		callMethod<void>(
			"addAction",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void IntentFilter::addCategory(JString arg0) const
	{
		callMethod<void>(
			"addCategory",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void IntentFilter::addDataAuthority(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"addDataAuthority",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void IntentFilter::addDataPath(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"addDataPath",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void IntentFilter::addDataScheme(JString arg0) const
	{
		callMethod<void>(
			"addDataScheme",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void IntentFilter::addDataSchemeSpecificPart(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"addDataSchemeSpecificPart",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void IntentFilter::addDataType(JString arg0) const
	{
		callMethod<void>(
			"addDataType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject IntentFilter::authoritiesIterator() const
	{
		return callObjectMethod(
			"authoritiesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject IntentFilter::categoriesIterator() const
	{
		return callObjectMethod(
			"categoriesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint IntentFilter::countActions() const
	{
		return callMethod<jint>(
			"countActions",
			"()I"
		);
	}
	inline jint IntentFilter::countCategories() const
	{
		return callMethod<jint>(
			"countCategories",
			"()I"
		);
	}
	inline jint IntentFilter::countDataAuthorities() const
	{
		return callMethod<jint>(
			"countDataAuthorities",
			"()I"
		);
	}
	inline jint IntentFilter::countDataPaths() const
	{
		return callMethod<jint>(
			"countDataPaths",
			"()I"
		);
	}
	inline jint IntentFilter::countDataSchemeSpecificParts() const
	{
		return callMethod<jint>(
			"countDataSchemeSpecificParts",
			"()I"
		);
	}
	inline jint IntentFilter::countDataSchemes() const
	{
		return callMethod<jint>(
			"countDataSchemes",
			"()I"
		);
	}
	inline jint IntentFilter::countDataTypes() const
	{
		return callMethod<jint>(
			"countDataTypes",
			"()I"
		);
	}
	inline jint IntentFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void IntentFilter::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString IntentFilter::getAction(jint arg0) const
	{
		return callObjectMethod(
			"getAction",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString IntentFilter::getCategory(jint arg0) const
	{
		return callObjectMethod(
			"getCategory",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::content::IntentFilter_AuthorityEntry IntentFilter::getDataAuthority(jint arg0) const
	{
		return callObjectMethod(
			"getDataAuthority",
			"(I)Landroid/content/IntentFilter$AuthorityEntry;",
			arg0
		);
	}
	inline android::os::PatternMatcher IntentFilter::getDataPath(jint arg0) const
	{
		return callObjectMethod(
			"getDataPath",
			"(I)Landroid/os/PatternMatcher;",
			arg0
		);
	}
	inline JString IntentFilter::getDataScheme(jint arg0) const
	{
		return callObjectMethod(
			"getDataScheme",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::os::PatternMatcher IntentFilter::getDataSchemeSpecificPart(jint arg0) const
	{
		return callObjectMethod(
			"getDataSchemeSpecificPart",
			"(I)Landroid/os/PatternMatcher;",
			arg0
		);
	}
	inline JString IntentFilter::getDataType(jint arg0) const
	{
		return callObjectMethod(
			"getDataType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint IntentFilter::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline jboolean IntentFilter::hasAction(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasAction",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean IntentFilter::hasCategory(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean IntentFilter::hasDataAuthority(android::net::Uri arg0) const
	{
		return callMethod<jboolean>(
			"hasDataAuthority",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline jboolean IntentFilter::hasDataPath(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasDataPath",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean IntentFilter::hasDataScheme(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasDataScheme",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean IntentFilter::hasDataSchemeSpecificPart(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasDataSchemeSpecificPart",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean IntentFilter::hasDataType(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasDataType",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint IntentFilter::match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, JString arg3) const
	{
		return callMethod<jint>(
			"match",
			"(Landroid/content/ContentResolver;Landroid/content/Intent;ZLjava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jstring>()
		);
	}
	inline jint IntentFilter::match(JString arg0, JString arg1, JString arg2, android::net::Uri arg3, JObject arg4, JString arg5) const
	{
		return callMethod<jint>(
			"match",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5.object<jstring>()
		);
	}
	inline jboolean IntentFilter::matchAction(JString arg0) const
	{
		return callMethod<jboolean>(
			"matchAction",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString IntentFilter::matchCategories(JObject arg0) const
	{
		return callObjectMethod(
			"matchCategories",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint IntentFilter::matchData(JString arg0, JString arg1, android::net::Uri arg2) const
	{
		return callMethod<jint>(
			"matchData",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jint IntentFilter::matchDataAuthority(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"matchDataAuthority",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	inline JObject IntentFilter::pathsIterator() const
	{
		return callObjectMethod(
			"pathsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void IntentFilter::readFromXml(JObject arg0) const
	{
		callMethod<void>(
			"readFromXml",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		);
	}
	inline JObject IntentFilter::schemeSpecificPartsIterator() const
	{
		return callObjectMethod(
			"schemeSpecificPartsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject IntentFilter::schemesIterator() const
	{
		return callObjectMethod(
			"schemesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void IntentFilter::setPriority(jint arg0) const
	{
		callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	inline JObject IntentFilter::typesIterator() const
	{
		return callObjectMethod(
			"typesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void IntentFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void IntentFilter::writeToXml(JObject arg0) const
	{
		callMethod<void>(
			"writeToXml",
			"(Lorg/xmlpull/v1/XmlSerializer;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

