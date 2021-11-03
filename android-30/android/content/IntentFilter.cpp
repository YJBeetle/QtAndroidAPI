#include "./ContentResolver.hpp"
#include "./Intent.hpp"
#include "./IntentFilter_AuthorityEntry.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../os/PatternMatcher.hpp"
#include "./IntentFilter.hpp"

namespace android::content
{
	// Fields
	JObject IntentFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.content.IntentFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint IntentFilter::MATCH_ADJUSTMENT_MASK()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_ADJUSTMENT_MASK"
		);
	}
	jint IntentFilter::MATCH_ADJUSTMENT_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_ADJUSTMENT_NORMAL"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_EMPTY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_EMPTY"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_HOST()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_HOST"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_MASK()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_MASK"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_PATH()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_PATH"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_PORT()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_PORT"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_SCHEME()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_SCHEME"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_SCHEME_SPECIFIC_PART()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_SCHEME_SPECIFIC_PART"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_TYPE()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_TYPE"
		);
	}
	jint IntentFilter::NO_MATCH_ACTION()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_ACTION"
		);
	}
	jint IntentFilter::NO_MATCH_CATEGORY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_CATEGORY"
		);
	}
	jint IntentFilter::NO_MATCH_DATA()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_DATA"
		);
	}
	jint IntentFilter::NO_MATCH_TYPE()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_TYPE"
		);
	}
	jint IntentFilter::SYSTEM_HIGH_PRIORITY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"SYSTEM_HIGH_PRIORITY"
		);
	}
	jint IntentFilter::SYSTEM_LOW_PRIORITY()
	{
		return getStaticField<jint>(
			"android.content.IntentFilter",
			"SYSTEM_LOW_PRIORITY"
		);
	}
	
	// QAndroidJniObject forward
	IntentFilter::IntentFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IntentFilter::IntentFilter()
		: JObject(
			"android.content.IntentFilter",
			"()V"
		) {}
	IntentFilter::IntentFilter(android::content::IntentFilter &arg0)
		: JObject(
			"android.content.IntentFilter",
			"(Landroid/content/IntentFilter;)V",
			arg0.object()
		) {}
	IntentFilter::IntentFilter(jstring arg0)
		: JObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IntentFilter::IntentFilter(jstring arg0, jstring arg1)
		: JObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::content::IntentFilter IntentFilter::create(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.content.IntentFilter",
			"create",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/IntentFilter;",
			arg0,
			arg1
		);
	}
	JObject IntentFilter::actionsIterator()
	{
		return callObjectMethod(
			"actionsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::addAction(jstring arg0)
	{
		callMethod<void>(
			"addAction",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addCategory(jstring arg0)
	{
		callMethod<void>(
			"addCategory",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addDataAuthority(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"addDataAuthority",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void IntentFilter::addDataPath(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"addDataPath",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void IntentFilter::addDataScheme(jstring arg0)
	{
		callMethod<void>(
			"addDataScheme",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addDataSchemeSpecificPart(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"addDataSchemeSpecificPart",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void IntentFilter::addDataType(jstring arg0)
	{
		callMethod<void>(
			"addDataType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JObject IntentFilter::authoritiesIterator()
	{
		return callObjectMethod(
			"authoritiesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject IntentFilter::categoriesIterator()
	{
		return callObjectMethod(
			"categoriesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint IntentFilter::countActions()
	{
		return callMethod<jint>(
			"countActions",
			"()I"
		);
	}
	jint IntentFilter::countCategories()
	{
		return callMethod<jint>(
			"countCategories",
			"()I"
		);
	}
	jint IntentFilter::countDataAuthorities()
	{
		return callMethod<jint>(
			"countDataAuthorities",
			"()I"
		);
	}
	jint IntentFilter::countDataPaths()
	{
		return callMethod<jint>(
			"countDataPaths",
			"()I"
		);
	}
	jint IntentFilter::countDataSchemeSpecificParts()
	{
		return callMethod<jint>(
			"countDataSchemeSpecificParts",
			"()I"
		);
	}
	jint IntentFilter::countDataSchemes()
	{
		return callMethod<jint>(
			"countDataSchemes",
			"()I"
		);
	}
	jint IntentFilter::countDataTypes()
	{
		return callMethod<jint>(
			"countDataTypes",
			"()I"
		);
	}
	jint IntentFilter::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void IntentFilter::dump(JObject arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jstring IntentFilter::getAction(jint arg0)
	{
		return callObjectMethod(
			"getAction",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring IntentFilter::getCategory(jint arg0)
	{
		return callObjectMethod(
			"getCategory",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::content::IntentFilter_AuthorityEntry IntentFilter::getDataAuthority(jint arg0)
	{
		return callObjectMethod(
			"getDataAuthority",
			"(I)Landroid/content/IntentFilter$AuthorityEntry;",
			arg0
		);
	}
	android::os::PatternMatcher IntentFilter::getDataPath(jint arg0)
	{
		return callObjectMethod(
			"getDataPath",
			"(I)Landroid/os/PatternMatcher;",
			arg0
		);
	}
	jstring IntentFilter::getDataScheme(jint arg0)
	{
		return callObjectMethod(
			"getDataScheme",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::os::PatternMatcher IntentFilter::getDataSchemeSpecificPart(jint arg0)
	{
		return callObjectMethod(
			"getDataSchemeSpecificPart",
			"(I)Landroid/os/PatternMatcher;",
			arg0
		);
	}
	jstring IntentFilter::getDataType(jint arg0)
	{
		return callObjectMethod(
			"getDataType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint IntentFilter::getPriority()
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jboolean IntentFilter::hasAction(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasAction",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasCategory(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataAuthority(android::net::Uri arg0)
	{
		return callMethod<jboolean>(
			"hasDataAuthority",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	jboolean IntentFilter::hasDataPath(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasDataPath",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataScheme(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasDataScheme",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataSchemeSpecificPart(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasDataSchemeSpecificPart",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataType(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasDataType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint IntentFilter::match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, jstring arg3)
	{
		return callMethod<jint>(
			"match",
			"(Landroid/content/ContentResolver;Landroid/content/Intent;ZLjava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	jint IntentFilter::match(jstring arg0, jstring arg1, jstring arg2, android::net::Uri arg3, JObject arg4, jstring arg5)
	{
		return callMethod<jint>(
			"match",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	jboolean IntentFilter::matchAction(jstring arg0)
	{
		return callMethod<jboolean>(
			"matchAction",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring IntentFilter::matchCategories(JObject arg0)
	{
		return callObjectMethod(
			"matchCategories",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint IntentFilter::matchData(jstring arg0, jstring arg1, android::net::Uri arg2)
	{
		return callMethod<jint>(
			"matchData",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint IntentFilter::matchDataAuthority(android::net::Uri arg0)
	{
		return callMethod<jint>(
			"matchDataAuthority",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	JObject IntentFilter::pathsIterator()
	{
		return callObjectMethod(
			"pathsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::readFromXml(JObject arg0)
	{
		callMethod<void>(
			"readFromXml",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		);
	}
	JObject IntentFilter::schemeSpecificPartsIterator()
	{
		return callObjectMethod(
			"schemeSpecificPartsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject IntentFilter::schemesIterator()
	{
		return callObjectMethod(
			"schemesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::setPriority(jint arg0)
	{
		callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	JObject IntentFilter::typesIterator()
	{
		return callObjectMethod(
			"typesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
	void IntentFilter::writeToXml(JObject arg0)
	{
		callMethod<void>(
			"writeToXml",
			"(Lorg/xmlpull/v1/XmlSerializer;)V",
			arg0.object()
		);
	}
} // namespace android::content

