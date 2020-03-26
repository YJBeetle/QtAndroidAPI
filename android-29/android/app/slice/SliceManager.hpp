#pragma once

#ifndef ANDROID_APP_SLICE_SLICEMANAGER
#define ANDROID_APP_SLICE_SLICEMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::app::slice
{
	class Slice;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::app::slice
{
	class SliceManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CATEGORY_SLICE();
		static jstring SLICE_METADATA_KEY();
		
		// Constructors
		void __constructor();
		
		// Methods
		void pinSlice(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1);
		void unpinSlice(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getPinnedSpecs(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getPinnedSlices();
		QAndroidJniObject getSliceDescendants(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject bindSlice(__jni_impl::android::content::Intent arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject bindSlice(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject mapIntentToUri(__jni_impl::android::content::Intent arg0);
		jint checkSlicePermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2);
		void grantSlicePermission(jstring arg0, __jni_impl::android::net::Uri arg1);
		void revokeSlicePermission(jstring arg0, __jni_impl::android::net::Uri arg1);
	};
} // namespace __jni_impl::android::app::slice

#include "../../net/Uri.hpp"
#include "Slice.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	jstring SliceManager::CATEGORY_SLICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceManager",
			"CATEGORY_SLICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceManager::SLICE_METADATA_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceManager",
			"SLICE_METADATA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SliceManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceManager",
			"(V)V");
	}
	
	// Methods
	void SliceManager::pinSlice(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"pinSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SliceManager::unpinSlice(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"unpinSlice",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::getPinnedSpecs(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getPinnedSpecs",
			"(Landroid/net/Uri;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::getPinnedSlices()
	{
		return __thiz.callObjectMethod(
			"getPinnedSlices",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SliceManager::getSliceDescendants(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::bindSlice(__jni_impl::android::content::Intent arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"bindSlice",
			"(Landroid/content/Intent;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::bindSlice(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"bindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::mapIntentToUri(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"mapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jint SliceManager::checkSlicePermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"checkSlicePermission",
			"(Landroid/net/Uri;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SliceManager::grantSlicePermission(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"grantSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SliceManager::revokeSlicePermission(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"revokeSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class SliceManager : public __jni_impl::android::app::slice::SliceManager
	{
	public:
		SliceManager(QAndroidJniObject obj) { __thiz = obj; }
		SliceManager()
		{
			__constructor();
		}
	};
} // namespace android::app::slice

#endif // ANDROID_APP_SLICE_SLICEMANAGER

