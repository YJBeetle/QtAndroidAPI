#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Entity.hpp"

namespace android::content
{
	// Fields
	
	Entity::Entity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Entity::Entity(android::content::ContentValues arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Entity",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Entity::addSubValue(android::net::Uri arg0, android::content::ContentValues arg1)
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
} // namespace android::content

