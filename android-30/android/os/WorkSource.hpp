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
		jboolean add(android::os::WorkSource arg0) const;
		void clear() const;
		jint describeContents() const;
		jboolean diff(android::os::WorkSource arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jboolean remove(android::os::WorkSource arg0) const;
		void set(android::os::WorkSource arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

