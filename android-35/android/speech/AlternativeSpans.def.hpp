#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::speech
{
	class AlternativeSpans : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AlternativeSpans(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlternativeSpans(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AlternativeSpans(JObject arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getSpans() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::speech

