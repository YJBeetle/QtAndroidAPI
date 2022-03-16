#pragma once

#include "./ContentValues.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./Entity.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline Entity::Entity(android::content::ContentValues arg0)
		: JObject(
			"android.content.Entity",
			"(Landroid/content/ContentValues;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Entity::addSubValue(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		callMethod<void>(
			"addSubValue",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::ContentValues Entity::getEntityValues() const
	{
		return callObjectMethod(
			"getEntityValues",
			"()Landroid/content/ContentValues;"
		);
	}
	inline java::util::ArrayList Entity::getSubValues() const
	{
		return callObjectMethod(
			"getSubValues",
			"()Ljava/util/ArrayList;"
		);
	}
	inline JString Entity::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content

// Base class headers

