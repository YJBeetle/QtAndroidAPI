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
class JObject;
class JString;

namespace android::content
{
	class AttributionSource : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AttributionSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributionSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean checkCallingUid() const;
		jint describeContents() const;
		void enforceCallingUid() const;
		jboolean equals(JObject arg0) const;
		JString getAttributionTag() const;
		android::content::AttributionSource getNext() const;
		JString getPackageName() const;
		jint getUid() const;
		jint hashCode() const;
		jboolean isTrusted(android::content::Context arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

