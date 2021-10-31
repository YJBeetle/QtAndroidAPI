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

namespace android::content
{
	class Entity_NamedContentValues : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject uri();
		QAndroidJniObject values();
		
		Entity_NamedContentValues(QAndroidJniObject obj);
		// Constructors
		Entity_NamedContentValues(android::net::Uri arg0, android::content::ContentValues arg1);
		Entity_NamedContentValues() = default;
		
		// Methods
	};
} // namespace android::content

