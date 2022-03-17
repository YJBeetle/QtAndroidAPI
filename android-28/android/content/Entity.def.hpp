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
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class Entity : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Entity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Entity(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Entity(android::content::ContentValues arg0);
		
		// Methods
		void addSubValue(android::net::Uri arg0, android::content::ContentValues arg1) const;
		android::content::ContentValues getEntityValues() const;
		java::util::ArrayList getSubValues() const;
		JString toString() const;
	};
} // namespace android::content

