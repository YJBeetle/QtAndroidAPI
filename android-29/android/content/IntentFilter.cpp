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
	QAndroidJniObject IntentFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.IntentFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint IntentFilter::MATCH_ADJUSTMENT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_ADJUSTMENT_MASK"
		);
	}
	jint IntentFilter::MATCH_ADJUSTMENT_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_ADJUSTMENT_NORMAL"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_EMPTY"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_HOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_HOST"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_MASK"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_PATH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_PATH"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_PORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_PORT"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_SCHEME"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_SCHEME_SPECIFIC_PART()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_SCHEME_SPECIFIC_PART"
		);
	}
	jint IntentFilter::MATCH_CATEGORY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"MATCH_CATEGORY_TYPE"
		);
	}
	jint IntentFilter::NO_MATCH_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_ACTION"
		);
	}
	jint IntentFilter::NO_MATCH_CATEGORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_CATEGORY"
		);
	}
	jint IntentFilter::NO_MATCH_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_DATA"
		);
	}
	jint IntentFilter::NO_MATCH_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"NO_MATCH_TYPE"
		);
	}
	jint IntentFilter::SYSTEM_HIGH_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"SYSTEM_HIGH_PRIORITY"
		);
	}
	jint IntentFilter::SYSTEM_LOW_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.IntentFilter",
			"SYSTEM_LOW_PRIORITY"
		);
	}
	
	IntentFilter::IntentFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntentFilter::IntentFilter()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"()V"
		);
	}
	IntentFilter::IntentFilter(android::content::IntentFilter &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Landroid/content/IntentFilter;)V",
			arg0.__jniObject().object()
		);
	}
	IntentFilter::IntentFilter(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IntentFilter::IntentFilter(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	IntentFilter::IntentFilter(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	IntentFilter::IntentFilter(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject IntentFilter::create(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.IntentFilter",
			"create",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/IntentFilter;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IntentFilter::create(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.IntentFilter",
			"create",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/IntentFilter;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject IntentFilter::actionsIterator()
	{
		return __thiz.callObjectMethod(
			"actionsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::addAction(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addAction",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addAction(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addAction",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IntentFilter::addCategory(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addCategory",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addCategory(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addCategory",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IntentFilter::addDataAuthority(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addDataAuthority",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void IntentFilter::addDataAuthority(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"addDataAuthority",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void IntentFilter::addDataPath(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addDataPath",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void IntentFilter::addDataPath(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addDataPath",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void IntentFilter::addDataScheme(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addDataScheme",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addDataScheme(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addDataScheme",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IntentFilter::addDataSchemeSpecificPart(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addDataSchemeSpecificPart",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void IntentFilter::addDataSchemeSpecificPart(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addDataSchemeSpecificPart",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void IntentFilter::addDataType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addDataType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentFilter::addDataType(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addDataType",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject IntentFilter::authoritiesIterator()
	{
		return __thiz.callObjectMethod(
			"authoritiesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject IntentFilter::categoriesIterator()
	{
		return __thiz.callObjectMethod(
			"categoriesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint IntentFilter::countActions()
	{
		return __thiz.callMethod<jint>(
			"countActions",
			"()I"
		);
	}
	jint IntentFilter::countCategories()
	{
		return __thiz.callMethod<jint>(
			"countCategories",
			"()I"
		);
	}
	jint IntentFilter::countDataAuthorities()
	{
		return __thiz.callMethod<jint>(
			"countDataAuthorities",
			"()I"
		);
	}
	jint IntentFilter::countDataPaths()
	{
		return __thiz.callMethod<jint>(
			"countDataPaths",
			"()I"
		);
	}
	jint IntentFilter::countDataSchemeSpecificParts()
	{
		return __thiz.callMethod<jint>(
			"countDataSchemeSpecificParts",
			"()I"
		);
	}
	jint IntentFilter::countDataSchemes()
	{
		return __thiz.callMethod<jint>(
			"countDataSchemes",
			"()I"
		);
	}
	jint IntentFilter::countDataTypes()
	{
		return __thiz.callMethod<jint>(
			"countDataTypes",
			"()I"
		);
	}
	jint IntentFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void IntentFilter::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void IntentFilter::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring IntentFilter::getAction(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAction",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring IntentFilter::getCategory(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getCategory",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject IntentFilter::getDataAuthority(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataAuthority",
			"(I)Landroid/content/IntentFilter$AuthorityEntry;",
			arg0
		);
	}
	QAndroidJniObject IntentFilter::getDataPath(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataPath",
			"(I)Landroid/os/PatternMatcher;",
			arg0
		);
	}
	jstring IntentFilter::getDataScheme(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataScheme",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject IntentFilter::getDataSchemeSpecificPart(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataSchemeSpecificPart",
			"(I)Landroid/os/PatternMatcher;",
			arg0
		);
	}
	jstring IntentFilter::getDataType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint IntentFilter::getPriority()
	{
		return __thiz.callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jboolean IntentFilter::hasAction(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAction",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasAction(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAction",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean IntentFilter::hasCategory(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasCategory(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean IntentFilter::hasDataAuthority(android::net::Uri arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataAuthority",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean IntentFilter::hasDataPath(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataPath",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataPath(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataPath",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean IntentFilter::hasDataScheme(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataScheme",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataScheme(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataScheme",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean IntentFilter::hasDataSchemeSpecificPart(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataSchemeSpecificPart",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataSchemeSpecificPart(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataSchemeSpecificPart",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean IntentFilter::hasDataType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::hasDataType(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataType",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint IntentFilter::match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, jstring arg3)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Landroid/content/ContentResolver;Landroid/content/Intent;ZLjava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint IntentFilter::match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, const QString &arg3)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Landroid/content/ContentResolver;Landroid/content/Intent;ZLjava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jint IntentFilter::match(jstring arg0, jstring arg1, jstring arg2, android::net::Uri arg3, __JniBaseClass arg4, jstring arg5)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5
		);
	}
	jint IntentFilter::match(const QString &arg0, const QString &arg1, const QString &arg2, android::net::Uri arg3, __JniBaseClass arg4, const QString &arg5)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	jboolean IntentFilter::matchAction(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matchAction",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean IntentFilter::matchAction(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matchAction",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring IntentFilter::matchCategories(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"matchCategories",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint IntentFilter::matchData(jstring arg0, jstring arg1, android::net::Uri arg2)
	{
		return __thiz.callMethod<jint>(
			"matchData",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint IntentFilter::matchData(const QString &arg0, const QString &arg1, android::net::Uri arg2)
	{
		return __thiz.callMethod<jint>(
			"matchData",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	jint IntentFilter::matchDataAuthority(android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"matchDataAuthority",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IntentFilter::pathsIterator()
	{
		return __thiz.callObjectMethod(
			"pathsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::readFromXml(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"readFromXml",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IntentFilter::schemeSpecificPartsIterator()
	{
		return __thiz.callObjectMethod(
			"schemeSpecificPartsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject IntentFilter::schemesIterator()
	{
		return __thiz.callObjectMethod(
			"schemesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::setPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject IntentFilter::typesIterator()
	{
		return __thiz.callObjectMethod(
			"typesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void IntentFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void IntentFilter::writeToXml(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeToXml",
			"(Lorg/xmlpull/v1/XmlSerializer;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

