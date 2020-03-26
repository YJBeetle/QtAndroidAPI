#pragma once

#ifndef ANDROID_CONTENT_INTENTFILTER
#define ANDROID_CONTENT_INTENTFILTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class PatternMatcher;
}
namespace __jni_impl::android::content
{
	class IntentFilter_AuthorityEntry;
}

namespace __jni_impl::android::content
{
	class IntentFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MATCH_ADJUSTMENT_MASK();
		static jint MATCH_ADJUSTMENT_NORMAL();
		static jint MATCH_CATEGORY_EMPTY();
		static jint MATCH_CATEGORY_HOST();
		static jint MATCH_CATEGORY_MASK();
		static jint MATCH_CATEGORY_PATH();
		static jint MATCH_CATEGORY_PORT();
		static jint MATCH_CATEGORY_SCHEME();
		static jint MATCH_CATEGORY_SCHEME_SPECIFIC_PART();
		static jint MATCH_CATEGORY_TYPE();
		static jint NO_MATCH_ACTION();
		static jint NO_MATCH_CATEGORY();
		static jint NO_MATCH_DATA();
		static jint NO_MATCH_TYPE();
		static jint SYSTEM_HIGH_PRIORITY();
		static jint SYSTEM_LOW_PRIORITY();
		
		// Constructors
		void __constructor(__jni_impl::android::content::IntentFilter arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		jint match(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::Intent arg1, jboolean arg2, jstring arg3);
		jint match(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::net::Uri arg3, __jni_impl::__JniBaseClass arg4, jstring arg5);
		void setPriority(jint arg0);
		jint getPriority();
		static QAndroidJniObject create(jstring arg0, jstring arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void addAction(jstring arg0);
		jint countActions();
		jstring getAction(jint arg0);
		jboolean hasAction(jstring arg0);
		jboolean matchAction(jstring arg0);
		QAndroidJniObject actionsIterator();
		void addDataType(jstring arg0);
		jboolean hasDataType(jstring arg0);
		jint countDataTypes();
		jstring getDataType(jint arg0);
		QAndroidJniObject typesIterator();
		void addDataScheme(jstring arg0);
		jint countDataSchemes();
		jstring getDataScheme(jint arg0);
		jboolean hasDataScheme(jstring arg0);
		QAndroidJniObject schemesIterator();
		void addDataSchemeSpecificPart(jstring arg0, jint arg1);
		jint countDataSchemeSpecificParts();
		QAndroidJniObject getDataSchemeSpecificPart(jint arg0);
		jboolean hasDataSchemeSpecificPart(jstring arg0);
		QAndroidJniObject schemeSpecificPartsIterator();
		void addDataAuthority(jstring arg0, jstring arg1);
		jint countDataAuthorities();
		QAndroidJniObject getDataAuthority(jint arg0);
		jboolean hasDataAuthority(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject authoritiesIterator();
		void addDataPath(jstring arg0, jint arg1);
		jint countDataPaths();
		QAndroidJniObject getDataPath(jint arg0);
		jboolean hasDataPath(jstring arg0);
		QAndroidJniObject pathsIterator();
		jint matchDataAuthority(__jni_impl::android::net::Uri arg0);
		jint matchData(jstring arg0, jstring arg1, __jni_impl::android::net::Uri arg2);
		void addCategory(jstring arg0);
		jint countCategories();
		jstring getCategory(jint arg0);
		jboolean hasCategory(jstring arg0);
		QAndroidJniObject categoriesIterator();
		jstring matchCategories(__jni_impl::__JniBaseClass arg0);
		void writeToXml(__jni_impl::__JniBaseClass arg0);
		void readFromXml(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::content

#include "ContentResolver.hpp"
#include "Intent.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../os/PatternMatcher.hpp"
#include "IntentFilter_AuthorityEntry.hpp"

namespace __jni_impl::android::content
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
	
	// Constructors
	void IntentFilter::__constructor(__jni_impl::android::content::IntentFilter arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Landroid/content/IntentFilter;)V",
			arg0.__jniObject().object());
	}
	void IntentFilter::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void IntentFilter::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void IntentFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter",
			"()V");
	}
	
	// Methods
	jint IntentFilter::match(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::Intent arg1, jboolean arg2, jstring arg3)
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
	jint IntentFilter::match(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::net::Uri arg3, __jni_impl::__JniBaseClass arg4, jstring arg5)
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
	void IntentFilter::setPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(I)V",
			arg0
		);
	}
	jint IntentFilter::getPriority()
	{
		return __thiz.callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
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
	jint IntentFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void IntentFilter::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void IntentFilter::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
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
	jint IntentFilter::countActions()
	{
		return __thiz.callMethod<jint>(
			"countActions",
			"()I"
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
	jboolean IntentFilter::hasAction(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAction",
			"(Ljava/lang/String;)Z",
			arg0
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
	QAndroidJniObject IntentFilter::actionsIterator()
	{
		return __thiz.callObjectMethod(
			"actionsIterator",
			"()Ljava/util/Iterator;"
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
	jboolean IntentFilter::hasDataType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint IntentFilter::countDataTypes()
	{
		return __thiz.callMethod<jint>(
			"countDataTypes",
			"()I"
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
	QAndroidJniObject IntentFilter::typesIterator()
	{
		return __thiz.callObjectMethod(
			"typesIterator",
			"()Ljava/util/Iterator;"
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
	jint IntentFilter::countDataSchemes()
	{
		return __thiz.callMethod<jint>(
			"countDataSchemes",
			"()I"
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
	jboolean IntentFilter::hasDataScheme(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataScheme",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject IntentFilter::schemesIterator()
	{
		return __thiz.callObjectMethod(
			"schemesIterator",
			"()Ljava/util/Iterator;"
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
	jint IntentFilter::countDataSchemeSpecificParts()
	{
		return __thiz.callMethod<jint>(
			"countDataSchemeSpecificParts",
			"()I"
		);
	}
	QAndroidJniObject IntentFilter::getDataSchemeSpecificPart(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataSchemeSpecificPart",
			"(I)Landroid/os/PatternMatcher;",
			arg0
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
	QAndroidJniObject IntentFilter::schemeSpecificPartsIterator()
	{
		return __thiz.callObjectMethod(
			"schemeSpecificPartsIterator",
			"()Ljava/util/Iterator;"
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
	jint IntentFilter::countDataAuthorities()
	{
		return __thiz.callMethod<jint>(
			"countDataAuthorities",
			"()I"
		);
	}
	QAndroidJniObject IntentFilter::getDataAuthority(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDataAuthority",
			"(I)Landroid/content/IntentFilter$AuthorityEntry;",
			arg0
		);
	}
	jboolean IntentFilter::hasDataAuthority(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataAuthority",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IntentFilter::authoritiesIterator()
	{
		return __thiz.callObjectMethod(
			"authoritiesIterator",
			"()Ljava/util/Iterator;"
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
	jint IntentFilter::countDataPaths()
	{
		return __thiz.callMethod<jint>(
			"countDataPaths",
			"()I"
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
	jboolean IntentFilter::hasDataPath(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasDataPath",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject IntentFilter::pathsIterator()
	{
		return __thiz.callObjectMethod(
			"pathsIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint IntentFilter::matchDataAuthority(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"matchDataAuthority",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	jint IntentFilter::matchData(jstring arg0, jstring arg1, __jni_impl::android::net::Uri arg2)
	{
		return __thiz.callMethod<jint>(
			"matchData",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
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
	jint IntentFilter::countCategories()
	{
		return __thiz.callMethod<jint>(
			"countCategories",
			"()I"
		);
	}
	jstring IntentFilter::getCategory(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getCategory",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean IntentFilter::hasCategory(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject IntentFilter::categoriesIterator()
	{
		return __thiz.callObjectMethod(
			"categoriesIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jstring IntentFilter::matchCategories(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"matchCategories",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void IntentFilter::writeToXml(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeToXml",
			"(Lorg/xmlpull/v1/XmlSerializer;)V",
			arg0.__jniObject().object()
		);
	}
	void IntentFilter::readFromXml(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"readFromXml",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class IntentFilter : public __jni_impl::android::content::IntentFilter
	{
	public:
		IntentFilter(QAndroidJniObject obj) { __thiz = obj; }
		IntentFilter(__jni_impl::android::content::IntentFilter arg0)
		{
			__constructor(
				arg0);
		}
		IntentFilter(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IntentFilter(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IntentFilter()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENTFILTER

