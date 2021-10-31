#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class Entity : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Entity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Entity(QAndroidJniObject obj);
		
		// Constructors
		Entity(android::content::ContentValues arg0);
		
		// Methods
		void addSubValue(android::net::Uri arg0, android::content::ContentValues arg1);
		android::content::ContentValues getEntityValues();
		java::util::ArrayList getSubValues();
		jstring toString();
	};
} // namespace android::content

