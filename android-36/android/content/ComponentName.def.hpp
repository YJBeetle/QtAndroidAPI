#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
class JClass;
class JObject;
class JString;

namespace android::content
{
	class ComponentName : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ComponentName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ComponentName(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ComponentName(android::os::Parcel arg0);
		ComponentName(android::content::Context arg0, JClass arg1);
		ComponentName(android::content::Context arg0, JString arg1);
		ComponentName(JString arg0, JString arg1);
		
		// Methods
		static android::content::ComponentName createRelative(android::content::Context arg0, JString arg1);
		static android::content::ComponentName createRelative(JString arg0, JString arg1);
		static android::content::ComponentName readFromParcel(android::os::Parcel arg0);
		static android::content::ComponentName unflattenFromString(JString arg0);
		static void writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1);
		android::content::ComponentName clone() const;
		jint compareTo(android::content::ComponentName arg0) const;
		jint compareTo(JObject arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString flattenToShortString() const;
		JString flattenToString() const;
		JString getClassName() const;
		JString getPackageName() const;
		JString getShortClassName() const;
		jint hashCode() const;
		JString toShortString() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

