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
		
		Entity(QAndroidJniObject obj);
		// Constructors
		Entity(android::content::ContentValues arg0);
		Entity() = default;
		
		// Methods
		void addSubValue(android::net::Uri arg0, android::content::ContentValues arg1);
		QAndroidJniObject getEntityValues();
		QAndroidJniObject getSubValues();
		jstring toString();
	};
} // namespace android::content

