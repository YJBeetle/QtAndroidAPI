#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Entity.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	Entity::Entity(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Entity::Entity(android::content::ContentValues arg0)
		: __JniBaseClass(
			"android.content.Entity",
			"(Landroid/content/ContentValues;)V",
			arg0.object()
		) {}
	
	// Methods
	void Entity::addSubValue(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		callMethod<void>(
			"addSubValue",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Entity::getEntityValues()
	{
		return callObjectMethod(
			"getEntityValues",
			"()Landroid/content/ContentValues;"
		);
	}
	QAndroidJniObject Entity::getSubValues()
	{
		return callObjectMethod(
			"getSubValues",
			"()Ljava/util/ArrayList;"
		);
	}
	jstring Entity::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::content

