#pragma once

#include "../../../JObject.hpp"

namespace android::content::om
{
	class OverlayIdentifier;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::content::om
{
	class OverlayInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit OverlayInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OverlayInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::content::om::OverlayIdentifier getOverlayIdentifier() const;
		JString getOverlayName() const;
		JString getTargetOverlayableName() const;
		JString getTargetPackageName() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::om

