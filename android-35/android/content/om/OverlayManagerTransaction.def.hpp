#pragma once

#include "../../../JObject.hpp"

namespace android::content::om
{
	class FabricatedOverlay;
}
namespace android::content::om
{
	class OverlayIdentifier;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::om
{
	class OverlayManagerTransaction : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit OverlayManagerTransaction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OverlayManagerTransaction(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::om::OverlayManagerTransaction newInstance();
		jint describeContents() const;
		void registerFabricatedOverlay(android::content::om::FabricatedOverlay arg0) const;
		JString toString() const;
		void unregisterFabricatedOverlay(android::content::om::OverlayIdentifier arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::om

