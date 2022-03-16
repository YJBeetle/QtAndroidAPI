#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Person_Builder;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::app
{
	class Person : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Person(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Person(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::drawable::Icon getIcon() const;
		JString getKey() const;
		JString getName() const;
		JString getUri() const;
		jint hashCode() const;
		jboolean isBot() const;
		jboolean isImportant() const;
		android::app::Person_Builder toBuilder() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

