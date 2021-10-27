#pragma once

#ifndef ANDROID_CONTENT_ENTITY
#define ANDROID_CONTENT_ENTITY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::content
{
	class Entity : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::ContentValues arg0);
		
		// Methods
		void addSubValue(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		QAndroidJniObject getEntityValues();
		QAndroidJniObject getSubValues();
		jstring toString();
	};
} // namespace __jni_impl::android::content

#include "ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void Entity::__constructor(__jni_impl::android::content::ContentValues arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Entity",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Entity::addSubValue(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		__thiz.callMethod<void>(
			"addSubValue",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Entity::getEntityValues()
	{
		return __thiz.callObjectMethod(
			"getEntityValues",
			"()Landroid/content/ContentValues;"
		);
	}
	QAndroidJniObject Entity::getSubValues()
	{
		return __thiz.callObjectMethod(
			"getSubValues",
			"()Ljava/util/ArrayList;"
		);
	}
	jstring Entity::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class Entity : public __jni_impl::android::content::Entity
	{
	public:
		Entity(QAndroidJniObject obj) { __thiz = obj; }
		Entity(__jni_impl::android::content::ContentValues arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ENTITY

