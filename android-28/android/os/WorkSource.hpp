#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::os
{
	class WorkSource : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WorkSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WorkSource(QJniObject obj);
		
		// Constructors
		WorkSource();
		WorkSource(android::os::WorkSource &arg0);
		
		// Methods
		jboolean add(android::os::WorkSource arg0);
		void clear();
		jint describeContents();
		jboolean diff(android::os::WorkSource arg0);
		jboolean equals(JObject arg0);
		jint hashCode();
		jboolean remove(android::os::WorkSource arg0);
		void set(android::os::WorkSource arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

