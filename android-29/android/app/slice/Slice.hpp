#pragma once

#ifndef ANDROID_APP_SLICE_SLICE
#define ANDROID_APP_SLICE_SLICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::app::slice
{
	class SliceSpec;
}

namespace __jni_impl::android::app::slice
{
	class Slice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EXTRA_RANGE_VALUE();
		static QAndroidJniObject EXTRA_TOGGLE_STATE();
		static QAndroidJniObject HINT_ACTIONS();
		static QAndroidJniObject HINT_ERROR();
		static QAndroidJniObject HINT_HORIZONTAL();
		static QAndroidJniObject HINT_KEYWORDS();
		static QAndroidJniObject HINT_LARGE();
		static QAndroidJniObject HINT_LAST_UPDATED();
		static QAndroidJniObject HINT_LIST();
		static QAndroidJniObject HINT_LIST_ITEM();
		static QAndroidJniObject HINT_NO_TINT();
		static QAndroidJniObject HINT_PARTIAL();
		static QAndroidJniObject HINT_PERMISSION_REQUEST();
		static QAndroidJniObject HINT_SEE_MORE();
		static QAndroidJniObject HINT_SELECTED();
		static QAndroidJniObject HINT_SHORTCUT();
		static QAndroidJniObject HINT_SUMMARY();
		static QAndroidJniObject HINT_TITLE();
		static QAndroidJniObject HINT_TTL();
		static QAndroidJniObject SUBTYPE_COLOR();
		static QAndroidJniObject SUBTYPE_CONTENT_DESCRIPTION();
		static QAndroidJniObject SUBTYPE_LAYOUT_DIRECTION();
		static QAndroidJniObject SUBTYPE_MAX();
		static QAndroidJniObject SUBTYPE_MESSAGE();
		static QAndroidJniObject SUBTYPE_MILLIS();
		static QAndroidJniObject SUBTYPE_PRIORITY();
		static QAndroidJniObject SUBTYPE_RANGE();
		static QAndroidJniObject SUBTYPE_SOURCE();
		static QAndroidJniObject SUBTYPE_TOGGLE();
		static QAndroidJniObject SUBTYPE_VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getUri();
		QAndroidJniObject getSpec();
		QAndroidJniObject getItems();
		QAndroidJniObject getHints();
		jboolean isCallerNeeded();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::slice

#include "../../os/Parcel.hpp"
#include "../../net/Uri.hpp"
#include "SliceSpec.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	QAndroidJniObject Slice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject Slice::EXTRA_RANGE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_RANGE_VALUE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::EXTRA_TOGGLE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_TOGGLE_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_ACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ACTIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ERROR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_HORIZONTAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_KEYWORDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_KEYWORDS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_LARGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LARGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_LAST_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LAST_UPDATED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_LIST_ITEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST_ITEM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_NO_TINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_NO_TINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_PARTIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PARTIAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_PERMISSION_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PERMISSION_REQUEST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_SEE_MORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SEE_MORE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_SELECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SELECTED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SHORTCUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SUMMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::HINT_TTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TTL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_COLOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_CONTENT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_CONTENT_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_LAYOUT_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_LAYOUT_DIRECTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MAX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_PRIORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_PRIORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_RANGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_SOURCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_TOGGLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_TOGGLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Slice::SUBTYPE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_VALUE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Slice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.Slice",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Slice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Slice::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;");
	}
	QAndroidJniObject Slice::getSpec()
	{
		return __thiz.callObjectMethod(
			"getSpec",
			"()Landroid/app/slice/SliceSpec;");
	}
	QAndroidJniObject Slice::getItems()
	{
		return __thiz.callObjectMethod(
			"getItems",
			"()Ljava/util/List;");
	}
	QAndroidJniObject Slice::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/List;");
	}
	jboolean Slice::isCallerNeeded()
	{
		return __thiz.callMethod<jboolean>(
			"isCallerNeeded",
			"()Z");
	}
	jint Slice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Slice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class Slice : public __jni_impl::android::app::slice::Slice
	{
	public:
		Slice(QAndroidJniObject obj) { __thiz = obj; }
		Slice()
		{
			__constructor();
		}
	};
} // namespace android::app::slice

#endif // ANDROID_APP_SLICE_SLICE

