#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::window
{
	class TrustedPresentationThresholds : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TrustedPresentationThresholds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrustedPresentationThresholds(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TrustedPresentationThresholds(jfloat arg0, jfloat arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jfloat getMinAlpha() const;
		jfloat getMinFractionRendered() const;
		jint getStabilityRequirementMillis() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::window

