#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Person;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app
{
	class Person_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Person_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Person_Builder(QAndroidJniObject obj);
		
		// Constructors
		Person_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBot(jboolean arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject setImportant(jboolean arg0);
		QAndroidJniObject setKey(jstring arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setUri(jstring arg0);
	};
} // namespace android::app

