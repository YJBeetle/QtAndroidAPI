#pragma once

#include "../../../JObject.hpp"

namespace android::content::om
{
	class OverlayIdentifier;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::content::om
{
	class FabricatedOverlay : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FabricatedOverlay(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FabricatedOverlay(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FabricatedOverlay(JString arg0, JString arg1);
		
		// Methods
		android::content::om::OverlayIdentifier getIdentifier() const;
		void setResourceValue(JString arg0, android::os::ParcelFileDescriptor arg1, JString arg2) const;
		void setResourceValue(JString arg0, jint arg1, jint arg2, JString arg3) const;
		void setResourceValue(JString arg0, jint arg1, JString arg2, JString arg3) const;
		void setTargetOverlayable(JString arg0) const;
	};
} // namespace android::content::om

