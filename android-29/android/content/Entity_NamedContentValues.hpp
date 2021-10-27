#pragma once

#ifndef ANDROID_CONTENT_ENTITY_NAMEDCONTENTVALUES
#define ANDROID_CONTENT_ENTITY_NAMEDCONTENTVALUES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content
{
	class Entity_NamedContentValues : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject uri();
		QAndroidJniObject values();
		
		// Constructors
		void __constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::content

#include "ContentValues.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject Entity_NamedContentValues::uri()
	{
		return __thiz.getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Entity_NamedContentValues::values()
	{
		return __thiz.getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	// Constructors
	void Entity_NamedContentValues::__constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.Entity$NamedContentValues",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class Entity_NamedContentValues : public __jni_impl::android::content::Entity_NamedContentValues
	{
	public:
		Entity_NamedContentValues(QAndroidJniObject obj) { __thiz = obj; }
		Entity_NamedContentValues(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ENTITY_NAMEDCONTENTVALUES

