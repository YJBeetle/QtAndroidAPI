#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Entity.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	Entity::Entity(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Entity::Entity(android::content::ContentValues arg0)
		: JObject(
			"android.content.Entity",
			"(Landroid/content/ContentValues;)V",
			arg0.object()
		) {}
	
	// Methods
	void Entity::addSubValue(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		callMethod<void>(
			"addSubValue",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ContentValues Entity::getEntityValues() const
	{
		return callObjectMethod(
			"getEntityValues",
			"()Landroid/content/ContentValues;"
		);
	}
	java::util::ArrayList Entity::getSubValues() const
	{
		return callObjectMethod(
			"getSubValues",
			"()Ljava/util/ArrayList;"
		);
	}
	JString Entity::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content

