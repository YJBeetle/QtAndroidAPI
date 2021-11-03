#pragma once

#include "../../JObject.hpp"

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
	class Person_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Person_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Person_Builder(QJniObject obj);
		
		// Constructors
		Person_Builder();
		
		// Methods
		android::app::Person build();
		android::app::Person_Builder setBot(jboolean arg0);
		android::app::Person_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::app::Person_Builder setImportant(jboolean arg0);
		android::app::Person_Builder setKey(jstring arg0);
		android::app::Person_Builder setName(jstring arg0);
		android::app::Person_Builder setUri(jstring arg0);
	};
} // namespace android::app

