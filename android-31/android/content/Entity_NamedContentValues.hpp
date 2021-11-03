#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}

namespace android::content
{
	class Entity_NamedContentValues : public JObject
	{
	public:
		// Fields
		android::net::Uri uri();
		android::content::ContentValues values();
		
		// QJniObject forward
		template<typename ...Ts> explicit Entity_NamedContentValues(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Entity_NamedContentValues(QJniObject obj);
		
		// Constructors
		Entity_NamedContentValues(android::net::Uri arg0, android::content::ContentValues arg1);
		
		// Methods
	};
} // namespace android::content

