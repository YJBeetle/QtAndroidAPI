#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "./Entity_NamedContentValues.hpp"

namespace android::content
{
	// Fields
	android::net::Uri Entity_NamedContentValues::uri()
	{
		return getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	android::content::ContentValues Entity_NamedContentValues::values()
	{
		return getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	// Constructors
	Entity_NamedContentValues::Entity_NamedContentValues(android::net::Uri arg0, android::content::ContentValues arg1)
		: JObject(
			"android.content.Entity$NamedContentValues",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::content

